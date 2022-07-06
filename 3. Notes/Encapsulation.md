[[MOC Networking]]

# Encapsulation
Created:  [[2022-07-01]]
Tags: #literature  

---
Abstract:
- Encapsulation
- De-encapsulation
- [[Why Encapsulation and De-encapsulation are important]]
- [[Each Layer often name their data differently]]

---
![[image.jpeg]]
## Encapsulation happens when sending a message
**Current layer will be covered with headers of the next layer
Repeats process above till Layer 1**. 

After data is processed in layer 1. 
Then, it's READY TO BE SENT TO RECEIVING computer.


## De-encapsulation happens when receiving a message
==**When message is received**== by the second computer, 
**==it reverses the process== -- starting at [[1 - Physical Layer]] & working up til it reaches [[7- Application Layer]], stripping off informations as it goes.** 




## [[Why Encapsulation and De-encapsulation are important]]


[[Each Layer often name their data differently]]




### References
1. https://tryhackme.com/room/introtonetworking