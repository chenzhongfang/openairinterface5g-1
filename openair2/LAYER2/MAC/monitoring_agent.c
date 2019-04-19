#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <czmq.h>
#include <string.h>
#include <netdb.h>
#include <signal.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdbool.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/time.h> //use POSIX to read sys time
#include <librdkafka/rdkafka.h>
#include <jsmn.h> //json parser

#include "monitoring_agent.h"

UE_list_t *UE_list;
protocol_conf protocols[PROTO_TYPE_COUNTER]; //[0]: tcp, [1]:kafka, etc
pthread_mutex_t protocol_conf_lock;

void init_tcp(void)
{
    protocols[PROTO_INDEX_TCP].name = TCP_SOCKET;
    protocols[PROTO_INDEX_TCP].tcp.active = true;
    protocols[PROTO_INDEX_TCP].tcp.agent_tcp_port = 60001; //default is 60000+
    protocols[PROTO_INDEX_TCP].tcp.clients = NULL;
};

void init_kafka(void)
{
    protocols[PROTO_INDEX_KAFKA].name = KAFKA;
    protocols[PROTO_INDEX_KAFKA].kafka.active = false;
    protocols[PROTO_INDEX_KAFKA].kafka.time1 = get_systime_nano();
    protocols[PROTO_INDEX_KAFKA].kafka.time2 = 0;
    protocols[PROTO_INDEX_KAFKA].kafka.period = 3;
    strcpy(protocols[PROTO_INDEX_KAFKA].kafka.brokers, "127.0.0.1:9092");
    strcpy(protocols[PROTO_INDEX_KAFKA].kafka.topic, "oai");
};

void init_protocols(void)
{
    init_tcp();
    init_kafka();
}
void init_monitoring_thread(void *arg)
{
    UE_list = (UE_list_t *)arg;

    if (pthread_mutex_init(&protocol_conf_lock, NULL) != 0)
    {
        printf("[-]mutex init has failed, stop monitoring.\n");
        return;
    }
      
    init_protocols();

}

void create_socket(int *socket_desc)
{
    *socket_desc = socket(AF_INET, SOCK_STREAM, 0);
    if (*socket_desc == -1)
    {
        printf("Could not create socket");
    }
};

int set_server(struct sockaddr_in *server, int *socket_desc)
{

    server->sin_family = AF_INET;
    server->sin_addr.s_addr = INADDR_ANY;

    int port = MIN_MCONF_PORT; //agent port range from 60000 - 65535
    for (;;)
    {
        if (port > MAX_MCONF_PORT)
        {
            perror("[-] No port availble.");
            return -1;
        }

        server->sin_port = htons(port);
        if (bind(*socket_desc, (struct sockaddr *)server, sizeof(*server)) < 0)
        {
            //print the error message
            printf("[-] port %d is in used, find next..\n", port);
        }
        else
        {
            printf("[+] Listen at localhost:%d\n", port);
            break;
        }

        port++;
    }

    return port;
};

enum request get_req_type(char *value)
{

    if (strcmp(value, "CONFIG_PROTO") == 0)
    {
        return CONFIG_PROTO;
    }
    else if (strcmp(value, "NOTIFY_TOKEN") == 0)
    {
        return NOTIFY_TOKEN;
    }
    else if (strcmp(value, "REGIST_AGENT_RES") == 0)
    {
        return REGIST_AGENT_RES;
    }
    else if (strcmp(value, "UPDATE_AGENT_RES") == 0)
    {
        return UPDATE_AGENT_RES;
    }
    else
    {
        return UNKNOWN;
    }
}

static int jsoneq(const char *json, jsmntok_t *tok, const char *s)
{
    if (tok->type == JSMN_STRING && (int)strlen(s) == tok->end - tok->start &&
        strncmp(json + tok->start, s, tok->end - tok->start) == 0)
    {
        return 0;
    }
    return -1;
}

int config_token(char *json_str)
{

    return 0;
}

void config_tcp_init_time(char *conn_id)
{
    tcp_client_t *client = protocols[PROTO_INDEX_TCP].tcp.clients;

    while (client != NULL)
    {
        if (strcmp(client->client_id, conn_id) == 0)
        {
            client->period = 1;
            client->time1 = get_systime_nano();
            client->time2 = 0;
            return;
        }
        //protocols[PROTO_INDEX_TCP].tcp.clients = NULL;
        //printf("conn id:%s\n", client->client_id);
        client = client->next;
    }
}

//void config_init_time(int proto_index)
void config_kafka_init_time(/*char* topic*/)
{
    protocols[PROTO_INDEX_KAFKA].kafka.time1 = get_systime_nano();
    protocols[PROTO_INDEX_KAFKA].kafka.time2 = 0;
    /*
    switch (proto_index)
    {
    case PROTO_INDEX_TCP:

        if (protocols[PROTO_INDEX_TCP].tcp.clients == NULL)
            return;

        //while(1)
        //protocols[PROTO_INDEX_TCP].tcp.clients.time1 = get_systime_nano();
        //protocols[PROTO_INDEX_TCP].tcp.clients.time2 = 0;

        break;

    case PROTO_INDEX_KAFKA:
        
        break;
    }*/
}

bool is_kafka_delay(int proto_index)
{
    long current_time = get_systime_nano();

    switch (proto_index)
    {
    case PROTO_INDEX_TCP:

        if (protocols[PROTO_INDEX_TCP].tcp.clients == NULL)
            return false;

        break;

    case PROTO_INDEX_KAFKA:
        if (protocols[proto_index].kafka.time2 == 0)
        {
            protocols[proto_index].kafka.time2 = protocols[proto_index].kafka.time1 + (long)(protocols[proto_index].kafka.period * 1000 * 1000);

            return true;
        }
        else
        {
            if (protocols[proto_index].kafka.time2 > current_time)
            {
                return false;
            }
            else
            {
                protocols[proto_index].kafka.time1 = protocols[proto_index].kafka.time2;
                protocols[proto_index].kafka.time2 = protocols[proto_index].kafka.time1 + (long)(protocols[proto_index].kafka.period * 1000 * 1000);
                return true;
            }
        }
        break;
    }

    return false;
}

bool is_tcp_delay(char *conn_id) //add tcp clients
{
    long current_time = get_systime_nano();

    tcp_client_t *client = protocols[PROTO_INDEX_TCP].tcp.clients;

    while (client != NULL)
    {
        if (strcmp(client->client_id, conn_id) == 0)
        {
            if (client->time2 == 0)
            {
                client->time2 = client->time1 + (long)(client->period * 1000 * 1000);

                return true;
            }
            else
            {
                if (client->time2 > current_time)
                {
                    return false;
                }
                else
                {
                    client->time1 = client->time2;
                    client->time2 = client->time1 + (long)(client->period * 1000 * 1000);
                    return true;
                }
            }
        }
        client = client->next;
    }

    return false;
}

void config_kafka(char *json_str)
{
    pthread_mutex_lock(&protocol_conf_lock);

    char *JSON_STRING = json_str;
    int r;
    jsmn_parser p;
    jsmntok_t t[JSON_TOKEN_MAX];

    jsmn_init(&p);
    r = jsmn_parse(&p, JSON_STRING, strlen(JSON_STRING), t, sizeof(t) / sizeof(t[0]));

    for (int i = 1; i < r; i++)
    {

        if (jsoneq(JSON_STRING, &t[i], "brokers") == 0) //if kafka
        {
            if ((t[i + 1].end - t[i + 1].start) > KAFKA_BROKER_CLUSTER_LEN)
            {
                printf("[-] Brokers too long\n");
            }
            else
            {
                strncpy(protocols[PROTO_INDEX_KAFKA].kafka.brokers, JSON_STRING + t[i + 1].start, t[i + 1].end - t[i + 1].start);
            }

            i++;
        }
        else if (jsoneq(JSON_STRING, &t[i], "active") == 0)
        {
            char *status = malloc(BUFSIZE);

            strncpy(status, JSON_STRING + t[i + 1].start, t[i + 1].end - t[i + 1].start);

            if (strcmp(status, "true") == 0)
            {
                if (!protocols[PROTO_INDEX_KAFKA].active) //new request, before is false, reset init_time
                {
                    config_kafka_init_time();
                    protocols[PROTO_INDEX_KAFKA].kafka.active = true;
                }
            }
            else if (strcmp(status, "false") == 0)
            {
                protocols[PROTO_INDEX_KAFKA].kafka.active = false;
            }

            free(status);
            i++;
        }
        else if (jsoneq(JSON_STRING, &t[i], "topic") == 0)
        {
            if ((t[i + 1].end - t[i + 1].start) > KAFKA_TOPIC_LEN)
            {
                printf("[-] Topic too long\n");
                //do nothing
            }
            else
            {
                strncpy(protocols[PROTO_INDEX_KAFKA].kafka.topic, JSON_STRING + t[i + 1].start, t[i + 1].end - t[i + 1].start);
            }

            i++;
        }
        else if (jsoneq(JSON_STRING, &t[i], "period") == 0)
        {
            char *prd = malloc(BUFSIZE);

            strncpy(prd, JSON_STRING + t[i + 1].start, t[i + 1].end - t[i + 1].start);
            if (strtod(prd, NULL) == 0.0 || strtod(prd, NULL) < MIN_PERIOD || strtod(prd, NULL) > MAX_PERIOD) //return 0.0 means the error
            {
                //do nothing
            }
            else
            {
                protocols[PROTO_INDEX_KAFKA].kafka.period = strtod(prd, NULL);
            }

            free(prd);
            i++;
        }
    }

    // free(JSON_STRING);
    pthread_mutex_unlock(&protocol_conf_lock);
}

int run_tcp_connection(void)
{

    return 0;
}

void config_tcp(char *json_str)
{
    pthread_mutex_lock(&protocol_conf_lock);

    char *JSON_STRING = json_str;
    int r;
    jsmn_parser p;
    jsmntok_t t[JSON_TOKEN_MAX];

    jsmn_init(&p);
    r = jsmn_parse(&p, JSON_STRING, strlen(JSON_STRING), t, sizeof(t) / sizeof(t[0]));

    for (int i = 1; i < r; i++)
    {

        if (jsoneq(JSON_STRING, &t[i], "active") == 0)
        {
            char *status = malloc(BUFSIZE);

            strncpy(status, JSON_STRING + t[i + 1].start, t[i + 1].end - t[i + 1].start);

            if (strcmp(status, "true") == 0)
            {
                if (!protocols[PROTO_INDEX_TCP].tcp.active) //new request, before is false, reset init_time
                {

                    protocols[PROTO_INDEX_TCP].tcp.active = true;
                }
            }
            else if (strcmp(status, "false") == 0)
            {
                protocols[PROTO_INDEX_TCP].tcp.active = false;
            }

            free(status);
            i++;
        }

        else if (jsoneq(JSON_STRING, &t[i], "period") == 0)
        {

            char *prd = malloc(BUFSIZE);

            strncpy(prd, JSON_STRING + t[i + 1].start, t[i + 1].end - t[i + 1].start);
            if (strtod(prd, NULL) == 0.0 || strtod(prd, NULL) < MIN_PERIOD || strtod(prd, NULL) > MAX_PERIOD) //return 0.0 means the error
            {
                //do nothing
            }
            else
            {
                //protocols[PROTO_INDEX_TCP].tcp.period = strtod(prd, NULL);
            }
            free(prd);

            i++;
        }
    }

    // free(JSON_STRING);
    pthread_mutex_unlock(&protocol_conf_lock);
}

void config_protocol(char *json_str)
{
    char *JSON_STRING = json_str;
    int r;
    jsmn_parser p;
    jsmntok_t t[JSON_TOKEN_MAX];

    jsmn_init(&p);
    r = jsmn_parse(&p, JSON_STRING, strlen(JSON_STRING), t, sizeof(t) / sizeof(t[0]));

    /* Loop over all keys of the root object */
    for (int i = 1; i < r; i++)
    {
        if (jsoneq(JSON_STRING, &t[i], "name") == 0)
        {
            char *proto_name = malloc(BUFSIZE);
            bzero(proto_name, BUFSIZE);

            strncpy(proto_name, JSON_STRING + t[i + 1].start, t[i + 1].end - t[i + 1].start);

            if (strcmp(proto_name, "kafka") == 0)
            {
                config_kafka(json_str);
            }
            else if (strcmp(proto_name, "tcp") == 0)
            {
                config_tcp(json_str);
            }

            free(proto_name);

            i++;
        }
    }
    //free(JSON_STRING);
}

int process_request(char *client_msg)
{

    char *JSON_STRING = malloc(strlen(client_msg));

    int size = strlen(client_msg);
    bzero(JSON_STRING, size);
    strcpy(JSON_STRING, client_msg);

    int r;
    jsmn_parser p;
    jsmntok_t t[JSON_TOKEN_MAX];

    jsmn_init(&p);
    r = jsmn_parse(&p, JSON_STRING, strlen(JSON_STRING), t, sizeof(t) / sizeof(t[0]));

    if (r == -1)
    {
        // -1 : over token
        printf("[-]Token over, MAX is %d\n", JSON_TOKEN_MAX);
        free(JSON_STRING);
        return r;
    }

    if (r == -3)
    {
        // -3 : format error
        printf("[-]JSON format error: %d\n", r);
        free(JSON_STRING);
        return r;
    }

    /* Assume the top-level element is an object */
    if (r < 1 || t[0].type != JSMN_OBJECT)
    {
        printf("[-]Json object expected\n");
        free(JSON_STRING);
        return -5;
    }

    /* Loop over all keys of the root object */
    for (int i = 1; i < r; i++)
    {
        if (jsoneq(JSON_STRING, &t[i], "req") == 0)
        {
            char *destination = malloc(BUFSIZE);
            bzero(destination, BUFSIZE);

            strncpy(destination, JSON_STRING + t[i + 1].start, t[i + 1].end - t[i + 1].start);

            enum request req_type = get_req_type(destination);

            switch (req_type)
            {
            case CONFIG_PROTO:
                config_protocol(JSON_STRING);
                break;

            case NOTIFY_TOKEN:
                config_token(JSON_STRING);
                break;

            case REGIST_AGENT_RES:

                break;

            case UPDATE_AGENT_RES:
                break;

            default:
                break;
            }

            free(destination);
            i++;
        }
    }
    free(JSON_STRING);

    return 0;
};

void print_clients(void)
{
    tcp_client_t *client = protocols[PROTO_INDEX_TCP].tcp.clients;

    while (client != NULL)
    {
        //protocols[PROTO_INDEX_TCP].tcp.clients = NULL;
        printf("conn id:%s\n", client->client_id);
        client = client->next;
    }
}

void get_client_ipv4(struct sockaddr_in *client_addr, char *ip, int ip_len)
{
    //char ip = malloc(IP_ADDR_LENGTH);

    struct in_addr ipAddr = client_addr->sin_addr;
    inet_ntop(AF_INET, &ipAddr, ip, INET_ADDRSTRLEN);
    //return ip;
};

int get_client_port(struct sockaddr_in *client_addr)
{
    int port = (int)ntohs(client_addr->sin_port);

    return port;
};

void get_client_id(struct sockaddr_in *client_addr, char *id, int id_len)
{
    char ip[IP_ADDR_LENGTH];
    get_client_ipv4(client_addr, ip, sizeof ip);

    sprintf(id, "%s:%d", ip, get_client_port(client_addr));
};

void add_client(int *client_sd, struct sockaddr_in *client_addr, int *socket_len)
//void  add_client( tcp_client_t** client_ref, char* id, char* ip, int port, long time1, long time2, double period)
{
    printf("[*] new conn, man...\n\n\n\n\n");
    tcp_client_t **head_ref = &(protocols[PROTO_INDEX_TCP].tcp.clients);
    tcp_client_t *new_conn = (tcp_client_t *)malloc(sizeof(tcp_client_t));

    char client_id[TCP_CONN_ID];
    char client_ip[IP_ADDR_LENGTH];
    int client_port;

    get_client_id(client_addr, client_id, TCP_CONN_ID);
    get_client_ipv4(client_addr, client_ip, IP_ADDR_LENGTH);
    client_port = get_client_port(client_addr);

    new_conn->client_id = malloc(TCP_CONN_ID);
    new_conn->client_ip = malloc(IP_ADDR_LENGTH);
    new_conn->client_port = malloc(sizeof(int));
    new_conn->client_sd = malloc(sizeof(int));

    new_conn->client_sd = malloc(sizeof(int));
    //new_conn->client_addr = malloc(sizeof(struct sockaddr_in));
    new_conn->socket_len = malloc(sizeof(int));

    *(new_conn->client_sd) = *client_sd;
    *(new_conn->socket_len) = *socket_len;

    strcpy(new_conn->client_id, client_id);
    strcpy(new_conn->client_ip, client_ip);
    *(new_conn->client_port) = client_port;

    new_conn->next = (*head_ref);

    protocols[PROTO_INDEX_TCP].tcp.clients = new_conn; //add the new node in front of the list
    print_clients();

    /*
    tcp_client_t* new_client = (tcp_client_t*) malloc(sizeof(tcp_client_t));
    
    
    strcpy(new_client->client_ip, ip);
    new_client->client_port = port;
    new_client->time1 = time1;
    new_client->time2 = time2;
    new_client->period = period;

    new_client->next= (*client_ref);
    (*new_client_ref) = new_client; 
    */
}

void remove_client(char *conn_id /* as the key */)
{
    tcp_client_t **head_ref = &(protocols[PROTO_INDEX_TCP].tcp.clients);
    tcp_client_t *client = *head_ref; //(tcp_client_t*) malloc(sizeof(tcp_client_t));
    tcp_client_t *prev;               // = *head_ref;

    if (client == NULL)
        return;

    //for the head first node case
    if (client != NULL && strcmp(client->client_id, conn_id) == 0)
    {
        protocols[PROTO_INDEX_TCP].tcp.clients = client->next;
        //free(temp);
        return;
    }

    while (client != NULL)
    {
        if (strcmp(client->client_id, conn_id) == 0)
        {
            prev->next = client->next;
            return;
        }

        prev = client;
        client = client->next;
    }
}

void update_client(void)
{
}

void *run_tcp_server(void *args)
{
    enum tcp_server_type *server_type = (enum tcp_server_type *)args;

    if (*server_type == CONFIG_SERVER)
    {
        int socket_desc;           // = malloc(sizeof(int));
        struct sockaddr_in server; // = malloc(sizeof(struct sockaddr_in));
        int port;
        create_socket(&socket_desc);
        port = set_server(&server, &socket_desc);

        if (port < 0 || listen(socket_desc, 3) < 0)
        {
            printf("[-] agent confiuger is not running.\n"); //use the defualt values
            return NULL;
        }
        //Listen
        while (1)
        {

            printf("[*] Monitor configuer is listening at port %d\n", port);
            int socket_len = sizeof(struct sockaddr_in);
            struct sockaddr_in client_addr; // = malloc(sizeof(struct sockaddr_in)); //TODO: limit them
            int socket_fd;                  // = malloc(sizeof(int));

            socket_fd = accept(socket_desc, (struct sockaddr *)&client_addr, (socklen_t *)&socket_len);

            if (socket_fd < 0)
            {
                perror("[-] accept failed");
                continue;
            }
            else
            {
                char *client_msg = malloc(BUFSIZE);
                //char client_msg[BUFSIZE * 2];

                bzero(client_msg, BUFSIZE);

                if (recv(socket_fd, client_msg, BUFSIZE, 0) < 0)
                {
                    continue;
                }
                printf("[+]recv client message: %s\n", client_msg);

                client_msg[strcspn(client_msg, "\n")] = 0;

                int jp_ret = process_request(client_msg);
                if (jp_ret < 0)
                {
                    char *msg_err = malloc(BUFSIZE);
                    if (jp_ret == -1)
                    {
                        strcpy(msg_err, "{\"res_type\":\"JSON_TOO_LONG\",\"MAX_TOKEN\":\"JSON_TOKEN_MAX\"}"); //TODO: replace JSON_TOKEN_MAX
                    }
                    else if (jp_ret == -3)
                    {
                        strcpy(msg_err, "{\"res_type\":\"JSON_FORMAT_ERROR\"}");
                    }
                    else if (jp_ret == -5)
                    {
                        strcpy(msg_err, "{\"res_type\":\"JSON_OBJ_EXPECTED\"}");
                    }
                    else
                    {
                        strcpy(msg_err, "{\"res_type\":\"JSON_UNKOWN_ERROR\"}");
                    }

                    fprintf(stderr, "[-] Unable to parse data\n");

                    if (write(socket_fd, msg_err, strlen(msg_err)) < 0)
                    {
                        printf("[-] Info parser ERROR to client error\n");
                        continue;
                    }
                    free(msg_err);
                    continue;
                }
                else
                {
                    char *msg_ok = "{\"res_type\":\"JSON_PARSE_OK\"}";
                    if (write(socket_fd, msg_ok, strlen(msg_ok)) < 0)
                    {
                        printf("[-] Info parser OK to client error\n");
                        continue;
                    }
                }
            }
        }
    }
    else if (*server_type == AGENT_SERVER)
    {
        int server_sd;
        struct sockaddr_in server;
        int port;
        create_socket(&server_sd);
        port = set_server(&server, &server_sd);

        if (port < 0 || listen(server_sd, 3) < 0)
        {
            printf("[-] agent confiuger is not running.\n"); //use the defualt values
            return NULL;
        }
        protocols[PROTO_INDEX_TCP].tcp.server_sd = &server_sd;
        protocols[PROTO_INDEX_TCP].tcp.server = &server;
        protocols[PROTO_INDEX_TCP].tcp.agent_tcp_port = port;

        //Listen

        while (1)
        {

            printf("[*] Agent is listening at port %d\n", port);

            int *client_sd = malloc(sizeof(int));
            struct sockaddr_in *client_addr = malloc(sizeof(struct sockaddr_in));
            int socket_len = sizeof(*client_addr);

            *client_sd = accept(server_sd, (struct sockaddr *)client_addr, (socklen_t *)&socket_len);

            if (*client_sd < 0)
            {
                perror("[-] accept failed");
                continue;
            }
            else //conn accepted
            {
                add_client(client_sd, client_addr, &socket_len);
            }
        }
    }

    return NULL;
}

void run_monitoring_thread()
{
    pthread_t thread_id;
    pthread_create(&thread_id, NULL, ue_list_thread_creator, NULL);
    //printf("run_monitoring_thread done...\n");

    pthread_t m_confserver_tid;
    enum tcp_server_type type_conf_server = CONFIG_SERVER;
    pthread_create(&m_confserver_tid, NULL, run_tcp_server, (void *)&type_conf_server);

    pthread_t agent_tid;
    enum tcp_server_type type_agent_server = AGENT_SERVER;
    pthread_create(&agent_tid, NULL, run_tcp_server, (void *)&type_agent_server) ;

}

/*
This func is used for initializing the metrics
*/
void init_m_metrics(ue_list_monitoring_metrics *ue_list_mms)
{
    ue_list_mms->enb_mms.ue_nums = 0;
    ue_list_mms->enb_mms.m_timestamp_nano = 0;
    ue_list_mms->enb_mms.m_enb_id = get_enb_id();

    for (int i = 0; i < MAX_MOBILES_PER_ENB; i++)
    {
        ue_list_mms->ue_mms[i].crnti = 0;
        ue_list_mms->ue_mms[i].rrc_status = 0;
        ue_list_mms->ue_mms[i].harq_pid = 0;
        ue_list_mms->ue_mms[i].harq_round = 0;
        ue_list_mms->ue_mms[i].rbs_used = 0;
        ue_list_mms->ue_mms[i].rbs_used_retx = 0;
        ue_list_mms->ue_mms[i].ncce_used_retx = 0;
        ue_list_mms->ue_mms[i].dlsch_mcs1 = 0;
        ue_list_mms->ue_mms[i].dlsch_mcs2 = 0;
        ue_list_mms->ue_mms[i].TBS = 0;
        ue_list_mms->ue_mms[i].total_rbs_used = 0;
        ue_list_mms->ue_mms[i].total_rbs_used_retx = 0;
        ue_list_mms->ue_mms[i].num_pdu_tx = 0;
        ue_list_mms->ue_mms[i].num_bytes_tx = 0;
        ue_list_mms->ue_mms[i].num_retransmission = 0;
        ue_list_mms->ue_mms[i].num_mac_sdu_tx = 0;
        ue_list_mms->ue_mms[i].sdu_length_tx = 0;
        ue_list_mms->ue_mms[i].dlsch_bitrate = 0;
        ue_list_mms->ue_mms[i].total_dlsch_bitrate = 0;
        ue_list_mms->ue_mms[i].overhead_bytes = 0;
        ue_list_mms->ue_mms[i].total_overhead_bytes = 0;
        ue_list_mms->ue_mms[i].avg_overhead_bytes = 0;
        ue_list_mms->ue_mms[i].total_sdu_bytes = 0;
        ue_list_mms->ue_mms[i].total_pdu_bytes = 0;
        ue_list_mms->ue_mms[i].total_num_pdus = 0;
        ue_list_mms->ue_mms[i].Po_PUCCH_dBm = 0;
        ue_list_mms->ue_mms[i].Po_PUCCH_update = 0;
        ue_list_mms->ue_mms[i].UL_rssi = 0;
        ue_list_mms->ue_mms[i].ulsch_mcs1 = 0;
        ue_list_mms->ue_mms[i].ulsch_mcs2 = 0;
        ue_list_mms->ue_mms[i].avg_pdu_idt = 0;
        ue_list_mms->ue_mms[i].avg_pdu_ps = 0;
        ue_list_mms->ue_mms[i].aggregated_pdu_size = 0;
        ue_list_mms->ue_mms[i].aggregated_pdu_arrival = 0;
        ue_list_mms->ue_mms[i].ulsch_TBS = 0;
        ue_list_mms->ue_mms[i].total_ulsch_TBS = 0;
        ue_list_mms->ue_mms[i].num_retransmission_rx = 0;
        ue_list_mms->ue_mms[i].rbs_used_rx = 0;
        ue_list_mms->ue_mms[i].rbs_used_retx_rx = 0;
        ue_list_mms->ue_mms[i].total_rbs_used_rx = 0;
        ue_list_mms->ue_mms[i].normalized_rx_power = 0;
        ue_list_mms->ue_mms[i].target_rx_power = 0;
        ue_list_mms->ue_mms[i].rbs_used_retx_rx = 0;
        ue_list_mms->ue_mms[i].num_pdu_rx = 0;
        ue_list_mms->ue_mms[i].num_bytes_rx = 0;
        ue_list_mms->ue_mms[i].num_errors_rx = 0;
        ue_list_mms->ue_mms[i].overhead_bytes_rx = 0;
        ue_list_mms->ue_mms[i].total_overhead_bytes_rx = 0;
        ue_list_mms->ue_mms[i].avg_overhead_bytes_rx = 0;
        ue_list_mms->ue_mms[i].ulsch_bitrate = 0;
        ue_list_mms->ue_mms[i].total_ulsch_bitrate = 0;
        ue_list_mms->ue_mms[i].pdu_bytes_rx = 0;
        ue_list_mms->ue_mms[i].total_pdu_bytes_rx = 0;
        ue_list_mms->ue_mms[i].total_num_pdus_rx = 0;
        ue_list_mms->ue_mms[i].total_num_errors_rx = 0;
        ue_list_mms->ue_mms[i].num_mac_sdu_rx = 0;
        ue_list_mms->ue_mms[i].sdu_length_rx = 0;
        ue_list_mms->ue_mms[i].cqi_received = 0;
        ue_list_mms->ue_mms[i].dl_cqi = 0;
    }
}

int get_enb_id()
{
    return 0;
}

void update_m_metrics(ue_list_monitoring_metrics *ue_list_mms)
{
    init_m_metrics(ue_list_mms);

    ue_list_mms->enb_mms.ue_nums = UE_list->num_UEs;
    ue_list_mms->enb_mms.m_timestamp_nano = get_systime_nano();

    for (int i = 0; i < MAX_MOBILES_PER_ENB; i++)
    {
        if (!UE_list->active[i])
            continue;

        ue_list_mms->ue_mms[i].cqi_received = UE_list->UE_sched_ctrl[i].cqi_received;

        for (int j = 0; j < UE_list->numactiveCCs[i]; j++) //i = UE_id
        {
            int index_ccid = UE_list->ordered_CCids[j][i];

            ue_list_mms->ue_mms[i].m_id = j;
            ue_list_mms->ue_mms[i].crnti = UE_list->eNB_UE_stats[index_ccid][i].crnti;
            ue_list_mms->ue_mms[i].rrc_status = UE_list->eNB_UE_stats[index_ccid][i].rrc_status;
            ue_list_mms->ue_mms[i].harq_pid = UE_list->eNB_UE_stats[index_ccid][i].harq_pid;
            ue_list_mms->ue_mms[i].harq_round = UE_list->eNB_UE_stats[index_ccid][i].harq_round;
            ue_list_mms->ue_mms[i].rbs_used = UE_list->eNB_UE_stats[index_ccid][i].rbs_used;
            ue_list_mms->ue_mms[i].rbs_used_retx = UE_list->eNB_UE_stats[index_ccid][i].rbs_used_retx;
            ue_list_mms->ue_mms[i].ncce_used_retx = UE_list->eNB_UE_stats[index_ccid][i].ncce_used_retx;
            ue_list_mms->ue_mms[i].dlsch_mcs1 = UE_list->eNB_UE_stats[index_ccid][i].dlsch_mcs1;
            ue_list_mms->ue_mms[i].dlsch_mcs2 = UE_list->eNB_UE_stats[index_ccid][i].dlsch_mcs2;
            ue_list_mms->ue_mms[i].TBS = UE_list->eNB_UE_stats[index_ccid][i].TBS;
            ue_list_mms->ue_mms[i].total_rbs_used = UE_list->eNB_UE_stats[index_ccid][i].total_rbs_used;
            ue_list_mms->ue_mms[i].total_rbs_used_retx = UE_list->eNB_UE_stats[index_ccid][i].total_rbs_used_retx;

            for (int k = 0; k < NB_RB_MAX; k++)
            {
                ue_list_mms->ue_mms[i].num_pdu_tx = UE_list->eNB_UE_stats[index_ccid][i].num_pdu_tx[k];
            }
            for (int k = 0; k < NB_RB_MAX; k++)
            {
                ue_list_mms->ue_mms[i].num_bytes_tx = UE_list->eNB_UE_stats[index_ccid][i].num_bytes_tx[k];
            }

            ue_list_mms->ue_mms[i].num_retransmission = UE_list->eNB_UE_stats[index_ccid][i].num_retransmission;
            ue_list_mms->ue_mms[i].num_mac_sdu_tx = UE_list->eNB_UE_stats[index_ccid][i].num_mac_sdu_tx;
            ue_list_mms->ue_mms[i].dlsch_bitrate = UE_list->eNB_UE_stats[index_ccid][i].dlsch_bitrate;
            ue_list_mms->ue_mms[i].total_dlsch_bitrate = UE_list->eNB_UE_stats[index_ccid][i].total_dlsch_bitrate;
            ue_list_mms->ue_mms[i].overhead_bytes = UE_list->eNB_UE_stats[index_ccid][i].overhead_bytes;
            ue_list_mms->ue_mms[i].total_overhead_bytes = UE_list->eNB_UE_stats[index_ccid][i].total_overhead_bytes;
            ue_list_mms->ue_mms[i].avg_overhead_bytes = UE_list->eNB_UE_stats[index_ccid][i].avg_overhead_bytes;
            ue_list_mms->ue_mms[i].total_sdu_bytes = UE_list->eNB_UE_stats[index_ccid][i].total_sdu_bytes;
            ue_list_mms->ue_mms[i].total_pdu_bytes = UE_list->eNB_UE_stats[index_ccid][i].total_pdu_bytes;
            ue_list_mms->ue_mms[i].total_num_pdus = UE_list->eNB_UE_stats[index_ccid][i].total_num_pdus;
            ue_list_mms->ue_mms[i].Po_PUCCH_dBm = UE_list->eNB_UE_stats[index_ccid][i].Po_PUCCH_dBm;
            ue_list_mms->ue_mms[i].Po_PUCCH_update = UE_list->eNB_UE_stats[index_ccid][i].Po_PUCCH_update;
            ue_list_mms->ue_mms[i].UL_rssi = UE_list->eNB_UE_stats[index_ccid][i].ulsch_mcs1;
            ue_list_mms->ue_mms[i].ulsch_mcs1 = UE_list->eNB_UE_stats[index_ccid][i].ulsch_mcs1;
            ue_list_mms->ue_mms[i].ulsch_mcs2 = UE_list->eNB_UE_stats[index_ccid][i].ulsch_mcs2;
            ue_list_mms->ue_mms[i].avg_pdu_idt = UE_list->eNB_UE_stats[index_ccid][i].avg_pdu_idt;
            ue_list_mms->ue_mms[i].avg_pdu_ps = UE_list->eNB_UE_stats[index_ccid][i].avg_pdu_ps;
            ue_list_mms->ue_mms[i].aggregated_pdu_size = UE_list->eNB_UE_stats[index_ccid][i].aggregated_pdu_size;
            ue_list_mms->ue_mms[i].aggregated_pdu_arrival = UE_list->eNB_UE_stats[index_ccid][i].aggregated_pdu_arrival;
            ue_list_mms->ue_mms[i].ulsch_TBS = UE_list->eNB_UE_stats[index_ccid][i].ulsch_TBS;
            ue_list_mms->ue_mms[i].total_ulsch_TBS = UE_list->eNB_UE_stats[index_ccid][i].total_ulsch_TBS;
            ue_list_mms->ue_mms[i].num_retransmission_rx = UE_list->eNB_UE_stats[index_ccid][i].num_retransmission_rx;
            ue_list_mms->ue_mms[i].rbs_used_rx = UE_list->eNB_UE_stats[index_ccid][i].rbs_used_rx;
            ue_list_mms->ue_mms[i].rbs_used_retx_rx = UE_list->eNB_UE_stats[index_ccid][i].rbs_used_retx_rx;
            ue_list_mms->ue_mms[i].total_rbs_used_rx = UE_list->eNB_UE_stats[index_ccid][i].total_rbs_used_rx;
            ue_list_mms->ue_mms[i].normalized_rx_power = UE_list->eNB_UE_stats[index_ccid][i].normalized_rx_power;
            ue_list_mms->ue_mms[i].target_rx_power = UE_list->eNB_UE_stats[index_ccid][i].target_rx_power;
            ue_list_mms->ue_mms[i].rbs_used_retx_rx = UE_list->eNB_UE_stats[index_ccid][i].rbs_used_retx_rx;

            for (int k = 0; k < NB_RB_MAX; k++)
            {
                ue_list_mms->ue_mms[i].num_pdu_rx += UE_list->eNB_UE_stats[index_ccid][i].num_pdu_rx[k];
            }

            for (int k = 0; k < NB_RB_MAX; k++)
            {
                ue_list_mms->ue_mms[i].num_bytes_rx = UE_list->eNB_UE_stats[index_ccid][i].num_bytes_rx[k];
            }

            ue_list_mms->ue_mms[i].num_errors_rx = UE_list->eNB_UE_stats[index_ccid][i].num_errors_rx;
            ue_list_mms->ue_mms[i].overhead_bytes_rx = UE_list->eNB_UE_stats[index_ccid][i].overhead_bytes_rx;
            ue_list_mms->ue_mms[i].total_overhead_bytes_rx = UE_list->eNB_UE_stats[index_ccid][i].total_overhead_bytes_rx;
            ue_list_mms->ue_mms[i].avg_overhead_bytes_rx = UE_list->eNB_UE_stats[index_ccid][i].avg_overhead_bytes_rx;
            ue_list_mms->ue_mms[i].ulsch_bitrate = UE_list->eNB_UE_stats[index_ccid][i].ulsch_bitrate;
            ue_list_mms->ue_mms[i].total_ulsch_bitrate = UE_list->eNB_UE_stats[index_ccid][i].total_ulsch_bitrate;
            ue_list_mms->ue_mms[i].pdu_bytes_rx = UE_list->eNB_UE_stats[index_ccid][i].pdu_bytes_rx;
            ue_list_mms->ue_mms[i].total_pdu_bytes_rx = UE_list->eNB_UE_stats[index_ccid][i].total_pdu_bytes_rx;
            ue_list_mms->ue_mms[i].total_num_pdus_rx = UE_list->eNB_UE_stats[index_ccid][i].total_num_pdus_rx;
            ue_list_mms->ue_mms[i].total_num_errors_rx = UE_list->eNB_UE_stats[index_ccid][i].total_num_errors_rx;
            ue_list_mms->ue_mms[i].num_mac_sdu_rx = UE_list->eNB_UE_stats[index_ccid][i].num_mac_sdu_rx;

            for (int k = 0; k < NB_RB_MAX; k++)
            {
                ue_list_mms->ue_mms[i].sdu_length_tx = UE_list->eNB_UE_stats[index_ccid][i].sdu_length_tx[k];
            }

            for (int k = 0; k < NB_RB_MAX; k++)
            {
                ue_list_mms->ue_mms[i].sdu_length_rx = UE_list->eNB_UE_stats[index_ccid][i].sdu_length_rx[k];
            }

            ue_list_mms->ue_mms[i].dl_cqi = UE_list->UE_sched_ctrl[i].dl_cqi[index_ccid];
        }
    }

    //sum_ue_monitoring_metrics(ue_mms);
}
void send_by_tcp(char *payload_json)
{

    tcp_client_t *client = protocols[PROTO_INDEX_TCP].tcp.clients;

    while (client != NULL)
    {
        
        if (is_tcp_delay(client->client_id))
        {
        }

        signal(SIGPIPE, SIG_IGN);
        ssize_t rc;
        rc = write(*(client->client_sd), payload_json, strlen(payload_json));
        if (rc == -1)
        {
            if (errno == EPIPE)
            {
                //it's broken
                tcp_client_t *prev = client;
                client = client->next;
                remove_client(prev->client_id);

                continue;
            }
        }

        client = client->next;
    }
}

void send_by_kafka(char *payload_json)
{

    if (/*protocols[PROTO_INDEX_KAFKA].kafka.active && */ is_kafka_delay(PROTO_INDEX_KAFKA))
    {

        if (push_in_brokers(payload_json, protocols[PROTO_INDEX_KAFKA].kafka) != 0)
        {
            printf("[-] Kafka does not actived correctly, please check the return code  \n");
        }
    }
    return;
}

/*
func: This function sends the data through different protocols:
(1) zeromq: TODO 
(2) Kakfa: ignore the ack requirement, otherwise dump
(3) UDP:
(4) TCP: TODO
*/
void send_m_metrics(ue_list_monitoring_metrics *ue_list_mms)
{
    pthread_mutex_lock(&protocol_conf_lock);

    const int size = BUFSIZE * (ue_list_mms->enb_mms.ue_nums + 1);
    char payload_json[size]; //= malloc(payload_size);
    bzero(payload_json, size);

    metrics_to_json(ue_list_mms, payload_json);

    for (int i = 0; i < PROTO_TYPE_COUNTER; i++)
    {

        switch (protocols[i].name)
        {
        case UDP_SOCKET:

            break;

        case SCTP_SOCKET:

            break;

        case TCP_SOCKET:
            if (protocols[PROTO_INDEX_TCP].tcp.active)
            {
                send_by_tcp(payload_json);
            }

            break;

        case ZEROMQ:
            break;

        case KAFKA:
            if (protocols[PROTO_INDEX_KAFKA].kafka.active)
            {
                send_by_kafka(payload_json);
            }

            break;
        }
    }

    pthread_mutex_unlock(&protocol_conf_lock);
}

/*
   * Func: Run a thread to send UE_list to monitoring socket thread
   * This thread sleep per e.g. 100 ms
   * Print message per e.g. 5 seconds
   */
void *ue_list_thread_creator(void *arg)
{
    ue_list_monitoring_metrics ue_list_mms;

    for (;;)
    {

        update_m_metrics(&ue_list_mms /*, &enb_mms, &ue_mms*/);
        send_m_metrics(&ue_list_mms /*, &enb_mms, &ue_mms*/);

        usleep(MONITORING_THREAD_SLEEP_TIME);
    }

    return NULL;
}

int send_udp_socket()
{
    return 0;
}

void error(char *msg)
{
    perror(msg);
    //exit(1);
    //do not exit, please assign a default value
}

int push_in_brokers(char *payload_json, kafka_producer_t k_producer)
{

    //TODO: this configuration should be done once

    rd_kafka_t *rk;                  //Producer instance handle
    rd_kafka_topic_t *rkt;           // Topic struct
    rd_kafka_conf_t *conf;           // Temporary configuration
    char errstr[BUFSIZE];            // librdkafka API error reporting buffer
    char *brokers = malloc(BUFSIZE); // Argument: broker as list separated by comma, eg. ip:port,ip2:port2,..
    char *topic = malloc(BUFSIZE);   //Argument: topic to produce to

    bzero(brokers, BUFSIZE);
    bzero(topic, BUFSIZE);
    strcpy(brokers, k_producer.brokers);
    strcpy(topic, k_producer.topic);

    conf = rd_kafka_conf_new();

    if (rd_kafka_conf_set(conf, "bootstrap.servers", brokers,
                          errstr, sizeof(errstr)) != RD_KAFKA_CONF_OK)
    {
        //fprintf(stderr, "%s\n", errstr);

        return 1;
    }

    rk = rd_kafka_new(RD_KAFKA_PRODUCER, conf, errstr, sizeof(errstr));
    if (!rk)
    {
        //fprintf(stderr, "[-] Failed to create new producer: %s\n", errstr);

        return 2;
    }

    rkt = rd_kafka_topic_new(rk, topic, NULL);
    if (!rkt)
    {
        // fprintf(stderr, "[-] Failed to create topic object: %s\n", rd_kafka_err2str(rd_kafka_last_error()));

        rd_kafka_destroy(rk);

        return 3;
    }

    int err = rd_kafka_produce(
        rkt,                                // Topic
        RD_KAFKA_PARTITION_UA,              // Partition configuration
        RD_KAFKA_MSG_F_COPY,                // for copying payload
        payload_json, strlen(payload_json), //payload and len
        NULL, 0,                            // Optional key and its length
        NULL);                              //Optional: Message opaque, provided in delivery report callback as msg_opaque.

    if (err == -1)
    {
        //error: this is producer sending err
        return 4;
    }

    //fprintf(stderr, "[*] Flushing kafka messages..\n");
    rd_kafka_flush(rk, 1 * 1000); // flush wait for max 1 seconds
    rd_kafka_topic_destroy(rkt);
    rd_kafka_destroy(rk);

    free(brokers);
    free(topic);

    return 0;
}

long get_systime_nano()
{

    struct timeval tv;
    gettimeofday(&tv, NULL);
    long sys_time_nano = (long)((tv.tv_sec) * 1000 * 1000 + (tv.tv_usec)); //before upcast, it is double

    return sys_time_nano;
};

void metrics_to_json(ue_list_monitoring_metrics *ue_list_mms, char *payload)
{
    const int len = 50;
    char value[len];

    strcat(payload, "{");

    //field: timestamp
    bzero(value, sizeof(value));
    strcat(payload, "\"m_timestamp_nano\":");
    sprintf(value, "%li", ue_list_mms->enb_mms.m_timestamp_nano);
    strcat(payload, value);
    strcat(payload, ",");

    bzero(value, sizeof(value));
    strcat(payload, "\"m_enb_id\":");
    sprintf(value, "%d", ue_list_mms->enb_mms.m_enb_id);
    strcat(payload, value);
    strcat(payload, ",");

    bzero(value, sizeof(value));
    strcat(payload, "\"ue_nums\":");
    sprintf(value, "%d", ue_list_mms->enb_mms.ue_nums);
    strcat(payload, value);
    strcat(payload, ",");

    strcat(payload, "\"ue_list\":");
    strcat(payload, "[");
    for (int i = 0; i < ue_list_mms->enb_mms.ue_nums; i++) //read list
    {

        strcat(payload, "{");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].m_id);
        strcat(payload, "\"m_id\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].crnti);
        strcat(payload, "\"crnti\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].rrc_status);
        strcat(payload, "\"rrc_status\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].harq_pid);
        strcat(payload, "\"harq_pid\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].harq_round);
        strcat(payload, "\"harq_round\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].rbs_used);
        strcat(payload, "\"rbs_used\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].rbs_used_retx);
        strcat(payload, "\"rbs_used_retx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].ncce_used);
        strcat(payload, "\"ncce_used\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].ncce_used_retx);
        strcat(payload, "\"ncce_used_retx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].dlsch_mcs1);
        strcat(payload, "\"dlsch_mcs1\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].dlsch_mcs2);
        strcat(payload, "\"dlsch_mcs2\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].TBS);
        strcat(payload, "\"TBS\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_rbs_used);
        strcat(payload, "\"total_rbs_used\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_rbs_used_retx);
        strcat(payload, "\"total_rbs_used_retx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].num_pdu_tx);
        strcat(payload, "\"num_pdu_tx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].num_bytes_tx);
        strcat(payload, "\"num_bytes_tx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].num_retransmission);
        strcat(payload, "\"num_retransmission\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].num_mac_sdu_tx);
        strcat(payload, "\"num_mac_sdu_tx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].sdu_length_tx);
        strcat(payload, "\"sdu_length_tx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].dlsch_bitrate);
        strcat(payload, "\"dlsch_bitrate\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_dlsch_bitrate);
        strcat(payload, "\"total_dlsch_bitrate\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].overhead_bytes);
        strcat(payload, "\"overhead_bytes\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_overhead_bytes);
        strcat(payload, "\"total_overhead_bytes\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].avg_overhead_bytes);
        strcat(payload, "\"avg_overhead_bytes\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_sdu_bytes);
        strcat(payload, "\"total_sdu_bytes\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_pdu_bytes);
        strcat(payload, "\"total_pdu_bytes\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_num_pdus);
        strcat(payload, "\"total_num_pdus\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].Po_PUCCH_dBm);
        strcat(payload, "\"Po_PUCCH_dBm\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].Po_PUCCH_update);
        strcat(payload, "\"Po_PUCCH_update\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].UL_rssi);
        strcat(payload, "\"UL_rssi\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].ulsch_mcs1);
        strcat(payload, "\"ulsch_mcs1\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].ulsch_mcs2);
        strcat(payload, "\"ulsch_mcs2\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].avg_pdu_idt);
        strcat(payload, "\"avg_pdu_idt\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].avg_pdu_ps);
        strcat(payload, "\"avg_pdu_ps\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].aggregated_pdu_size);
        strcat(payload, "\"aggregated_pdu_size\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].aggregated_pdu_arrival);
        strcat(payload, "\"aggregated_pdu_arrival\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].ulsch_TBS);
        strcat(payload, "\"ulsch_TBS\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_ulsch_TBS);
        strcat(payload, "\"total_ulsch_TBS\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].num_retransmission_rx);
        strcat(payload, "\"num_retransmission_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].rbs_used_rx);
        strcat(payload, "\"rbs_used_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].rbs_used_retx_rx);
        strcat(payload, "\"rbs_used_retx_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_rbs_used_rx);
        strcat(payload, "\"total_rbs_used_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].normalized_rx_power);
        strcat(payload, "\"normalized_rx_power\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].target_rx_power);
        strcat(payload, "\"target_rx_power\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].num_pdu_rx);
        strcat(payload, "\"num_pdu_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].num_bytes_rx);
        strcat(payload, "\"num_bytes_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].num_errors_rx);
        strcat(payload, "\"num_errors_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].overhead_bytes_rx);
        strcat(payload, "\"overhead_bytes_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_overhead_bytes_rx);
        strcat(payload, "\"total_overhead_bytes_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].avg_overhead_bytes_rx);
        strcat(payload, "\"avg_overhead_bytes_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].ulsch_bitrate);
        strcat(payload, "\"ulsch_bitrate\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_ulsch_bitrate);
        strcat(payload, "\"total_ulsch_bitrate\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].pdu_bytes_rx);
        strcat(payload, "\"pdu_bytes_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_pdu_bytes_rx);
        strcat(payload, "\"total_pdu_bytes_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_num_pdus_rx);
        strcat(payload, "\"total_num_pdus_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].total_num_errors_rx);
        strcat(payload, "\"total_num_errors_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].num_mac_sdu_rx);
        strcat(payload, "\"num_mac_sdu_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].sdu_length_rx);
        strcat(payload, "\"sdu_length_rx\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].cqi_received);
        strcat(payload, "\"cqi_received\":");
        strcat(payload, value);
        strcat(payload, ",");

        bzero(value, sizeof(value));
        sprintf(value, "%d", ue_list_mms->ue_mms[i].dl_cqi);
        strcat(payload, "\"dl_cqi\":");
        strcat(payload, value);

        strcat(payload, "}");

        if (i < ue_list_mms->enb_mms.ue_nums - 1)
        {
            strcat(payload, ",");
        }
    }
    strcat(payload, "]");
    strcat(payload, "}");
}