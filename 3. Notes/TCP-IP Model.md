[[MOC Networking]]

# TCP-IP Model
Created:  [[2022-07-01]]
Tags: #fleeting 

---
Abstract:


---
Application
Transport
Internet
Network Interface


_**Note:** Some recent sources split the TCP/IP model into five layers -- breaking the Network Interface layer into Data Link and Physical layers (as with the OSI model). This is accepted and well-known; however, it is not officially defined (unlike the original four layers which are defined in RFC1122). It's up to you which version you use -- both are generally considered valid._


You would be justified in asking why we bother with the OSI model if it's not actually used for anything in the real-world. The answer to that question is quite simply that the OSI model (due to being less condensed and more rigid than the TCP/IP model) tends to be easier for learning the initial theory of networking.

The OSI Model and TCP/IP model actually are kind of the same

 OSI MODEL                        TCP/IP Model
Layer 7 Application     \
Layer 6 Presentation   |-> Application
Layer 5 Session          /


Layer 4 Transport        ->  Transport 
Layer 3 Network          ->   Internet


Layer 2 Data Link        |---  Network Interface
Layer 1  Physical         |--------^



The processes of encapsulation and de-encapsulation work in exactly the same way with the TCP/IP model as they do with the OSI model. At each layer of the TCP/IP model a header is added during encapsulation, and removed during de-encapsulation.


Protocols -- sets of rules that define how an action is to be carried out

**T**ransmission **C**ontrol **P**rotocol, controls the flow of data between two endpoints
- Stable connection must be formed first before sending any data. It's a process named "Three-way Handshake"
- The protocol type of TCP is Connection-Based Protocol

### Three-Way Handshake
The process of forming a stable connection between computers. 

When attempting to make a connection using TCP. Three-way handshake must be carried out before a connection can be established using TCP.


Computer first sends a special request to the remote server indicating that it wants to initialise a connection. The special request contains SYN bit (Synchronise bit), which essentialy makes first contact in starting the connection process.

The server will then respond with a packet containing the SYN bit, as well as ACK bit (Acknowledge Bit)

Finally, computer will send a packet that contains the ACK bit by itself, confirming that the connection has been setup successfully.

And that's how you form a reliable transmittion of data between two computers. Any data that is lost or corrupted on transmission will be re-sent.
![[image-2.png|400]]




**I**nternet **P**rotocol, which controls how packets are addressed and sent



History as to why TCP/IP and OSI Model were created

**History:**

It's important to understand exactly _why_ the TCP/IP and OSI models were originally created. To begin with there was no standardisation -- different manufacturers followed their own methodologies, and consequently systems made by different manufacturers were completely incompatible when it came to networking. The TCP/IP model was introduced by the American DoD in 1982 to provide a standard -- something for all of the different manufacturers to follow. This sorted out the inconsistency problems. Later the OSI model was also introduced by the International Organisation for Standardisation ([ISO](https://www.iso.org/home.html)); however, it's mainly used as a more comprehensive guide for learning, as the TCP/IP model is still the standard upon which modern networking is based.


### References
1. 