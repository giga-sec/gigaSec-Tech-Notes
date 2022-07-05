[[MOC Networking]]

# Encapsulation
Created:  [[2022-07-01]]
Tags: #literature  

---
Abstract:
- Encapsulation
- De-encapsulation
- [[Why Encapsulation and De-encapsulation are important]]

---
![[image.jpeg]]
## Encapsulation happens when sending a message
The **current layer will be covered with the headers of the next layer and repeats the process till Layer 1**. 

After the data is processed in layer 1. Then, it's ready to be sent to the receiving computer.


## De-encapsulation happens when receiving a message
**When message is received** by the second computer, **it reverses the process -- starting at the physical layer and working up until it reaches the application layer, stripping off the added information as it goes.** 




## [[Why Encapsulation and De-encapsulation are important]]







### References
1. https://tryhackme.com/room/introtonetworking