[[MOC Networking]]

# Encapsulation
Created:  [[2022-07-01]]
Tags: #literature  

---
Abstract:
- [[Why Encapsulation and De-encapsulation are important]]
- [[Each Layer often name their data differently]]

[[TCP-IP Model]] and [[OSI Model]] follow the same method
- a **header is ADDED during encapsulation**
-  a **header is REMOVED during DE-encapsulation**.
---
![[image.jpeg]]

## Encapsulation happens when sending a message
**Current layer will be covered with headers of the next layer
Then next layer, then next layer 
Process repeats till [[1 - Physical Layer]]**. 

After data is encapsulated in [[1 - Physical Layer]]. 
Then, it's READY TO BE SENT TO RECEIVING computer.



## De-encapsulation happens when receiving a message
==**When message is received**== by the second computer, 
It strips information off as each passes each layer
starting at [[1 - Physical Layer]] 
working up til it reaches [[7- Application Layer]], 











### References
1. https://tryhackme.com/room/introtonetworking