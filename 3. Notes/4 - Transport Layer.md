### [[5 - Session Layer]]

# 4 - Transport Layer
Created:  [[2022-06-30]]
Tags: #permanent 

---
When [[5 - Session Layer]] SUCCESSFULLY made connection between host and remote computer, data's passed down to transport layer

A protocol will be selected 
Received data will be divided for easier transmission.

(**TCP** pieces are called **_segments_**) 
(**UDP** pieces are called **_datagrams_**)

---
## A protocol will be selected  
### [[TCP - Transmission Control Protocol]]
Allows **2 computers to remain in constant communication**. 
**==Any lost data is re-sent==**.


### [[UDP - User Datagram Protocol]]
**Packets of data are essentially thrown at the receiving computer,** 
**==if receiving computer can't keep up then that's not his problem==** 
(e.g. a pixelated skype call)

[[TCP vs UDP, Which to choose for Transport Layer]]



## When a protocol is now selected 
==**Transport layer divides the transmission to bite-sized pieces**== **which makes easier transmission of message.** 

(**TCP** bite pieces are called **_segments_**) 
(**UDP** they're called **_datagrams_**)


### [[3 - Network Layer]]












### References
1. 