[[When is Three-way handshake used in networking]]

# What are the steps of Three-Way Handshake
Created:  [[2022-07-01]]
Tags: #permanent 

---
The 3 step process of **==forming a stable connection between computers==**. 


1. Computer first sends a special request to the remote server indicating that it wants to initialise a connection. The special request contains **SYN bit** (Synchronise bit), which essentialy makes first contact in starting the connection process.


2. The server will then respond with a packet containing the **SYN bit, as well as ACK bit** (Acknowledge Bit). Meaning it acknowledges the sync request of the computer and wants to sync back.


3. Finally, computer will send a packet that contains the **ACK bit** by itself, confirming that the connection has been setup successfully. 


And that's how you form a reliable transmittion of data between two computers. Any data that is lost or corrupted on transmission will be re-sent.
![[image-2.png|400]]

![[threewayhandshake.png]]














### References
1. 