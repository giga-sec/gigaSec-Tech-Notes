[[Port scanning with NMAP]]

# nmap - ping sweep
Created:  [[2022-07-04]]
Tags: #fleeting 

---
Abstract:


---
192.168.0.x
`nmap -sn 192.168.0.1-254`

CIDR Notation
-   `nmap -sn 192.168.0.0/24`


The `-sn` switch tells Nmap not to scan any ports -- forcing it to rely primarily on ICMP echo packets (or ARP requests on a local network, if run with sudo or directly as the root user) to identify targets. 
In addition to the ICMP echo requests,
the `-sn` switch will also cause nmap to send a TCP SYN packet to port 443 of the target, 
as well as a TCP ACK (or TCP SYN if not run as root) packet to port 80 of the target.



Nmap sends an ICMP packet to each possible IP address for the specified network.

When it receives a response, it marks the IP address that responded as being alive. This is not always accurate; however, it can provide something of a baseline and thus is worth covering.













### References
1. 