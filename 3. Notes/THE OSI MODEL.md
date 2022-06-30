

# THE OSI MODEL
Created:  [[2022-06-30]]
Tags: #fleeting 

---
Abstract:


---
The OSI (**O**pen **S**ystems **I**nterconnection) Model is a standardised model which we **use to demonstrate the theory behind computer networking**. In practice, **it's actually the more compact TCP/IP model that real-world networking is based off**


The OSI Model has seven layers
7. Application
6. Presentation
5. Session
4. Transport
3. Network
2. Data Link
1.  Physical 


### 7. Application 
Gives networking options to programs running on a computer
It provides them the ability to transmit data.

When data is given to application layer, it's passed down to presentation layer.

### 6. Presentation
The data received from application layer tends to be in a format that the application understands, but it's not necessarily in a standardised format that could be understood by the application layer in the _receiving_ computer. 

The presentation layer translates the data into a standardised format, as well as handling any encryption, compression or other transformations to the data.

### 5. Session
When data is correctly formated by presentation layer, there will be a decision making from session layer.

Session layer sees if it can set up a connection with the other computer across the network. 
-> Fail: If a session CAN'T be establised, it sends back an error and the **==process goes no further==**
-> Success: If a session CAN be established then it's the **==job of the session layer to maintain the established connection==**, as well as ==**co-operate with the session layer of the remote computer**== in **order ==to synchronise communications.**==

The session layer is particularly important as the session that it creates is unique to the communication in question. This is what allows you to make multiple requests to different endpoints simultaneously without all the data getting mixed up (think about opening two tabs in a web browser at the same time)!

When the session layer has successfully logged a connection between the host and remote computer the data is passed down to transport layer


### 4. Transport Layer
It chooses the protocol to use for the data to be transmitted

Two common protocols in the transport layer 
- TCP (**T**ransmission **C**ontrol **P**rotocol) 
- UDP (**U**ser **D**atagram **P**rotocol)


A TCP connection allows **two computers to remain in constant communication**. It ensures that data sent is at an acceptable speed, and **==any lost data is re-sent==**.


With UDP, packets of data are essentially thrown at the receiving computer -- **==if it can't keep up then that's not his problem==** 
(e.g. a pixelated skype call)


#### TCP vs UDP, What protocol to choose in Transport Layer
TCP, when ACCURACY is favoured over speed (e.g. file transfer, or loading a webpage) 

UDP where SPEED is more important (e.g. video streaming).



With a protocol selected, 
The transport layer divides the transmission to bite-sized pieces which makes it easier to transmit the message successfully. 
(over **TCP** these are called **_segments_**,) 
(over **UDP** they're called **_datagrams_**)





### References
1. 