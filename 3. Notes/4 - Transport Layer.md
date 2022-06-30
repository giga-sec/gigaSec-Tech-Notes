### [[5 - Session Layer]]

# 4 - Transport Layer
Created:  [[2022-06-30]]
Tags: #permanent 

---
### 4. Transport Layer
It chooses the protocol to use for the data to be transmitted

#### Two common protocols in the transport layer 
- TCP (**T**ransmission **C**ontrol **P**rotocol)
A TCP connection allows **two computers to remain in constant communication**. It ensures that data sent is at an acceptable speed, and **==any lost data is re-sent==**.

- UDP (**U**ser **D**atagram **P**rotocol)
With UDP, packets of data are essentially thrown at the receiving computer, **==if the receiving computer can't keep up then that's not his problem==** 
(e.g. a pixelated skype call)


#### TCP vs UDP, What protocol to choose in Transport Layer
TCP, when ACCURACY is favoured over speed (e.g. file transfer, or loading a webpage) 

UDP where SPEED is more important (e.g. video streaming).


With a protocol selected, 
The ==**transport layer then divides the transmission== to bite-sized pieces** which makes it easier to transmit the message successfully. 
(over **TCP** these are called **_segments_**,) 
(over **UDP** they're called **_datagrams_**)


### [[3 - Network Layer]]












### References
1. 