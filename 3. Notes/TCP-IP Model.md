[[MOC Networking]]

# TCP-IP Model
Created:  [[2022-07-01]]
Tags: #fleeting 

---
Abstract:
- Difference/Similarities between TCP/IP Model and OSI Model
- History of why TCP-IP Model was created
- Some variations of TCP-IP Model

---
## Similarities between OSI and TCP/IP Model

 OSI MODEL                           TCP/IP Model
7 Application                         \
6 Presentation                       |-> ==Application==
5 Session                               /


4 Transport                          ->  ==Transport== 
3 Network                            ->   ==Internet==


2 Data Link                            |---  ==Network Interface==
1 Physical                              |--------^



TCP-IP Model



## Difference between OSI Model and TCP/IP Model
#### **OSI Model** is mainly used for learning 
#### **TCP/IP model** is standard of what modern networking is based at.


[[Why bother learning OSI Model then]]
Your question is justified about why we bother with OSI model if **it's not even actually used for anything in the real-world**






## History on why TCP/IP and OSI Model were created

**Summary:**
Basically, every manufacturers have their own methodologies and were incompatible for each other. Thus TCP/IP Model was born for it to be standardized and allow easier communication between different networks despite having different machines, os or manufacturers.

**Full Context:**
It's important to understand exactly _why_ the TCP/IP and OSI models were originally created. To begin with there was no standardisation -- different manufacturers followed their own methodologies, and consequently systems made by different manufacturers were completely incompatible when it came to networking. The TCP/IP model was introduced by the American DoD in 1982 to provide a standard -- something for all of the different manufacturers to follow. This sorted out the inconsistency problems. Later the OSI model was also introduced by the International Organisation for Standardisation; however, it's mainly used as a more comprehensive guide for learning, as the TCP/IP model is still the standard upon which modern networking is based.

_**Note:** Some recent sources split the TCP/IP model into five layers -- breaking the Network Interface layer into Data Link and Physical layers (as with the OSI model). This is accepted and well-known; however, it is not officially defined (unlike the original four layers which are defined in RFC1122). It's up to you which version you use -- both are generally considered valid._





### References
1. 