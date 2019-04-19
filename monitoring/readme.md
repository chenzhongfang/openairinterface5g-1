1. run zookeeper and a local kafka broker
2. use tcp client to active the kafka agent in OAI
``` 
$nc -t localhost 60000
{"req":"CONFIG_PROTO","name":"kafka", "active":"true","period":1}
```

