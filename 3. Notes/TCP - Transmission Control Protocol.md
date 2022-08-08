[[What is protocol in networking]]

# Transmission Control Protocol
Created:  [[2022-07-01]]
Tags: #permanent 

---

### Purpose
Protocol for sending and receiving data
Allows **two computers to remain in constant communication**.
**==Any lost data is re-sent==**. 


### But first
A [[When is Three-way handshake used in networking|Three-Way Handshake]] must be done first before sending any data.


### Protocol used
The protocol type of TCP is **==Connection-Based Protocol==**


### The bad thing about TCP
When your browser sends bunch of packets to request connection, Webserver responds its own packets, acknowledging the receipt. 
They are batched together in a specific order. 
![[Pasted image 20220706181812.png|400]]
If one of response packets gets lost because of weak connection, 
The rest of them will have to wait in line until lost packet is re-sent. 
This can slow the traffic speed down significantly




[[TCP vs UDP, Which to choose for Transport Layer]]



### References
1. https://www.techradar.com/opinion/dns-over-quic-becomes-proposed-standard-why-it-is-good-news-for-your-privacy