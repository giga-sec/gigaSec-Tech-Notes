### [[6 - Presentation Layer]]

# 5 - Session Layer
Created:  [[2022-06-30]]
Tags: #permanent 

---
### 5. Session
When data is correctly formated by presentation layer, data will be passed through the session layer. 


Session layer sees if it can set up a connection with the other computer across the network. 
-> Fail: If a session **CAN'T be establised, it sends back an error** and the **==process goes no further==**
-> Success: If a session **CAN be established** then **==session layer will maintain the established connection==**, 

It will also **co-operate with session layer of remote computer** in **order ==to synchronise communications.**==


The session layer is particularly important as the session that it creates is unique to the communication in question. This is what allows you to make multiple requests to different endpoints simultaneously without all the data getting mixed up (think about opening two tabs in a web browser at the same time)!


When the session layer has successfully logged a connection between the host and remote computer the data is passed down to transport layer


### [[4 - Transport Layer]]












### References
1. 