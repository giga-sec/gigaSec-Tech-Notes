

# How SYN Scan works (-sS)
Created:  [[2022-07-03]]
Tags: #fleeting 

---
Abstract:
- 
- Advantage/Disadvantage of SYN Scan

---
It is used to scan the TCP port-range of a target
Sometimes SYN scan is referred to as 
- "_Half-open"_ scans 
- "Stealth" scans.

Why it's called "Stealth" scans
SYN scans are often not logged by applications listening on open ports, as standard practice is to log a connection once it's been fully established.


When sending TCP request w/ SYN flag 
- Basically the same as how TCP w/ SYN flag request
In this regard, the two scans are identical: the big difference is in how they handle _open_ ports.


When receiving an open port
-> After receiving a SYN/ACK from the server
-> SYN scan sends back a RST TCP packet (prevents the server from repeatedly trying to make the request). 
![[Pasted image 20220703152536.png|250]]
![[stealthscan.png]]

### Advantages of SYN Scan (-sS) for us hackers:
-   Bypasses older Intrusion Detection systems as they are looking out for a full three way handshake. (This is often no longer the case with modern IDS solutions; it is for this reason that SYN scans are still frequently referred to as "stealth" scans).
-  **==SYN scans are often not logged by applications==** listening on open ports, as standard practice is to log a connection once it's been fully established. 
-  ==**SYN scans are significantly faster== than a standard TCP Connect scan**. It **doesn't have to bother about completing/disconnecting from a three-way handshake** for every port thus making it faster.

### Disadvantages to SYN scans (-sS)
- **They require sudo permissions to work in Linux** [1]. This is because SYN scans requires creating raw packets (as opposed to the full TCP handshake), which is a privilege only the root user has by default. [1] SYN scans can also be made to work by giving Nmap the CAP_NET_RAW, CAP_NET_ADMIN and CAP_NET_BIND_SERVICE capabilities; however, this may not allow many of the NSE scripts to run properly.
- Unstable services are sometimes brought down by SYN scans, which could prove problematic if a client has provided a production environment for the test.












### References
1. 