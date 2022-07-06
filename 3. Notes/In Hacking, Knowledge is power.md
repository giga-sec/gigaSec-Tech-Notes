[[MOC Hacking]]

# In Hacking, Knowledge is power
Created:  [[2022-07-03]]
Tags: #fleeting 

---
### When it comes to hacking, knowledge is power. 

Hacking requires a _vast_ knowledge base because how are you supposed to break into something if you don't know how it works? 

The more knowledge you have about a target system or network, the more options you have available. This makes it imperative that proper enumeration is carried out before any exploitation attempts are made.




[[Intro To Research]]


### Example
Say we have been given an IP to perform a security audit on. \
Before we do anything else, we need to get an idea of services running on the targets. (e.g running a webserver, or a Windows Active Directory Domain Controller). 

The first stage in establishing this “map” of the network infrastructure is something called port scanning. In other words, we want to see which IP addresses contain active hosts, and which do not. One way to do this is by using [[nmap - ping sweep (-sn)]]

When a computer runs a network service, it opens a networking construct called a “port” to receive the connection.

If we do not know which of these ports a server has open, then we do not have a hope of successfully attacking the target; thus, it is crucial that we begin any attack with a port scan. Once we know which ports are open, we can then look at enumerating which services are running on each port.


#### Note for CTF setting
It is important to note; however, that especially in a CTF setting, it is not unheard of for even the standard ports to be altered, making it even more imperative that we perform appropriate enumeration on the target.














### References
1. 