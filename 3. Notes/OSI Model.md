[[MOC Networking]]

# THE OSI MODEL
Created:  [[2022-06-30]]
Tags: #literature 

---
The **OSI Model** (**O**pen **S**ystems **I**nterconnection) is a standardised model which we **use to demonstrate the theory behind computer networking**. In practice, **it's actually the ==more compact TCP/IP model that real-world networking is based off**==


The OSI Model has seven layers
7. Application
6. Presentation
5. Session
4. Transport
3. Network
2. Data Link
1.  Physical 


### [[7- Application Layer]] 
- **Gives networking options to programs** running on a computer


### [[6 - Presentation Layer]]
- **Translates data received** from application layer to standardised format 
- Handles **encryption, compression** etc..


### [[5 - Session Layer]]
- Set-ups a connection between other computer across network


### [[4 - Transport Layer]]
- **Chooses the protoco**l on how data will be delievered. 
- These is where [[TCP - Transmission Control Protocol|TCP]] and [[UDP - User Datagram Protocol|UDP]] happens.


### [[3 - Network Layer]]
- Locates the destination of your request


### [[2 - Data Link Layer]]
- Receives packet from network layer and adds in MAC Address at endpoint


### [[1 - Physical Layer]]
- Converts electrical pulses into binary data and vice versa






[[Layers often name their data differently]].







### References
1. 