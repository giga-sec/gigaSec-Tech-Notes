[[MOC Networking]]

# Traceroute
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Abstract:
- Syntax of Traceroute
- Traceroute has different name for Windows
---
The internet is made up of many different servers and end-points that are all networked up to each other. In order to get to the content you want, you first need to go through a bunch of servers. **Traceroute allows you to see each steps of the servers visited when trying to access a resource**.


The **protocol used between different OS ==can be altered==** but they also **have their defaults**

**Windows**  `tracert`. 
Uses same ICMP protocol that [[Ping command for testing a connection to a remote resource]] utilises.

**Unix** `traceroute` 
Operates over UDP. 


### Syntax
Linux: `traceroute <destination>`















### References
1. 