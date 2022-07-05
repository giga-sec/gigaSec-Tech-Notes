### [[5 - Session Layer]]

# 4 - Transport Layer
Created:  [[2022-06-30]]
Tags: #permanent 

---
**Chooses the protocol to use** for the data to be transmitted. 
Also **divides the transmission of data to make it easier to transmit data**. 


## A protocol will be selected  
### [[TCP - Transmission Control Protocol]]
Allows **2 computers to remain in constant communication**. 
**==Any lost data is re-sent==**.


### [[UDP - User Datagram Protocol]]
**Packets of data are essentially thrown at the receiving computer,** 
**==if receiving computer can't keep up then that's not his problem==** 
(e.g. a pixelated skype call)

[[TCP vs UDP, Which protocol to choose in Transport Layer]]




## When a protocol is now selected 
The ==**transport layer divides the transmission to bite-sized pieces**== **which makes it easier to transmit the message successfully.** 

(**TCP** bite pieces are called **_segments_**) 

(**UDP** they're called **_datagrams_**)




### [[3 - Network Layer]]












### References
1. 