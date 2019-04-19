#include "mac.h"

#ifndef _montioring_metrics_h
#define _montioring_metrics_h

//#define MAX_CONNECTED_UE 200
#define BUFSIZE 1024
#define PROTO_TYPE_COUNTER 5 //so far, support only max 5 protocols
#define PROTO_INDEX_TCP 0
#define PROTO_INDEX_KAFKA 1
#define IP_ADDR_LENGTH 30
#define KAFKA_BROKER_CLUSTER_LEN 200
#define KAFKA_TOPIC_LEN 50
#define TCP_CONN_ID 50
#define MAX_TCP_CLIENT 100
#define MAX_KAFKA_PRODUCER 10
#define MONITORING_THREAD_SLEEP_TIME 1000 *10 //This sleep time should be 1000 = 1ms
#define MIN_MCONF_PORT 60000
#define MAX_MCONF_PORT 65535
#define JSON_TOKEN_MAX 128 // We expect no more than 128 tokens
#define MIN_PERIOD 0.001
#define MAX_PERIOD 1000 * 1000 * 1000

enum tcp_server_type
{
    CONFIG_SERVER,
    AGENT_SERVER
};

enum protocol_name
{
    UDP_SOCKET,
    TCP_SOCKET,
    SCTP_SOCKET,
    KAFKA,
    ZEROMQ,
};

enum request
{
    CONFIG_PROTO,
    NOTIFY_TOKEN,
    REGIST_AGENT_RES,
    UPDATE_AGENT_RES,
    UNKNOWN
};

typedef struct
{
    int m_enb_id;
    long m_timestamp_nano;
    int ue_nums;
    
} enodeb_monitoring_metrics;

typedef struct
{
    
    int m_id;    
    int crnti;               ///user id (rnti) of connected UEs
    int rrc_status;          // rrc status
    int harq_pid;            // harq pid
    int harq_round;          // harq rounf
    int rbs_used;            // total available number of PRBs for a new transmission
    int rbs_used_retx;       // total available number of PRBs for a retransmission
    int ncce_used;           // total nccc used for a new transmission: num control channel element
    int ncce_used_retx;      // total avilable nccc for a retransmission: num control channel element
    int dlsch_mcs1;          // mcs1 before the rate adaptaion
    int dlsch_mcs2;          /// Target mcs2 after rate-adaptation
    int TBS;                 //  current TBS with mcs2
    int total_rbs_used;      //  total rb used for a new transmission
    int total_rbs_used_retx; //  total rb used for retransmission
    int num_pdu_tx;          // TX num pkt
    int num_bytes_tx;        // TX num bytes
    int num_retransmission;  // num retransmission / harq
    int num_mac_sdu_tx;      // Number of received MAC SDU
    int sdu_length_tx;       // Length of SDU Got from LC DL
    int dlsch_bitrate;
    int total_dlsch_bitrate;
    int overhead_bytes;       /// headers+ CE +  padding bytes for a MAC PDU
    int total_overhead_bytes; /// headers+ CE +  padding bytes for a MAC PDU
    int avg_overhead_bytes;   /// headers+ CE +  padding bytes for a MAC PDU
    int total_sdu_bytes;      // MAC multiplexed payload
    int total_pdu_bytes;      // total MAC pdu bytes
    int total_num_pdus;       // total num pdu
    int Po_PUCCH_dBm;         // RX PUCCH1a/b power (dBm)
    int Po_PUCCH_update;      /// Indicator that Po_PUCCH has been updated by PHY
    int UL_rssi;              /// Uplink measured RSSI
    int ulsch_mcs1;           /// preassigned mcs after rate adaptation
    int ulsch_mcs2;           /// adjusted mcs
    int avg_pdu_idt;          /// estimated average pdu inter-departure time
    int avg_pdu_ps;           /// estimated average pdu size
    int aggregated_pdu_size;
    int aggregated_pdu_arrival;
    int ulsch_TBS; ///  uplink transport block size
    int total_ulsch_TBS;
    int num_retransmission_rx; ///  total rb used for a new uplink transmission
    int rbs_used_rx;           ///  total rb used for a new uplink transmission
    int rbs_used_retx_rx;      ///  total rb used for a new uplink retransmission
    int total_rbs_used_rx;     ///  total rb used for a new uplink transmission
    int normalized_rx_power;   /// normalized rx power
    int target_rx_power;       /// target rx power
    int num_pdu_rx;            /// num rx pdu
    int num_bytes_rx;          /// num bytes rx
    int num_errors_rx;         /// errors
    int overhead_bytes_rx;
    int total_overhead_bytes_rx; /// headers+ CE +  padding bytes for a MAC PDU
    int avg_overhead_bytes_rx;   /// headers+ CE +  padding bytes for a MAC PDU
    int ulsch_bitrate;
    int total_ulsch_bitrate;
    int pdu_bytes_rx;        ///  MAC pdu bytes
    int total_pdu_bytes_rx;  /// total MAC pdu bytes
    int total_num_pdus_rx;   /// total num pdu
    int total_num_errors_rx; /// num of error pdus
    int num_mac_sdu_rx;      // Number of error PDUS
    int sdu_length_rx;       // Length of SDU Got from LC UL - Size array can be refined

    //from the struct UE_sched_ctrl
    int cqi_received;     // indicator that CQI was received on PUSCH when requested
    int dl_cqi;

} ue_monitoring_metrics;

typedef struct
{
    enodeb_monitoring_metrics enb_mms;
    ue_monitoring_metrics ue_mms[MAX_MOBILES_PER_ENB];
} ue_list_monitoring_metrics;

typedef struct tcp_client
{
    char* client_id;
    char* client_ip;
    int* client_port; 
    
    int* client_sd;
    struct sockaddr_in* client_addr;
    int* socket_len; 
    
    long time1;
    long time2;
    double period; 
    struct tcp_client *prev;
    struct tcp_client *next;

}tcp_client_t;


typedef struct tcp_socket
{
    int agent_tcp_port;
    bool active;
    int* server_sd;
    struct sockaddr_in* server;
    tcp_client_t* clients;    
   
}tcp_socket_t;

typedef struct
{
    char topic[KAFKA_TOPIC_LEN];
    bool active;
    char brokers[KAFKA_BROKER_CLUSTER_LEN];
    long time1;
    long time2;
    double period; 

}kafka_producer_t;


typedef struct
{
    enum protocol_name name;
    bool active;
    
    tcp_socket_t tcp;
    kafka_producer_t kafka;

} protocol_conf;



/*
void *monitoring_thread(UE_list_t *UE_list) ;
*/
void *ue_list_thread_creator(void*);
void init_monitoring_thread(void*);
void run_monitoring_thread(void);
void error_handler(char*);
int send_udp_socket(void);
int push_in_brokers(char*, kafka_producer_t);
void metrics_to_json(ue_list_monitoring_metrics *, char*);
long get_systime_nano(void);
int get_enb_id(void);
void *run_tcp_server(void *);
void config_tcp_init_time(char*);
void config_kafka_init_time(void);

#endif 

