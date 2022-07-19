[[Port scanning with NMAP]]

# How TCP Connect Scan Works (-sT)
Created:  [[2022-07-03]]
Tags: #literature 

---
Abstract:
- How TCP Connect identify if port is CLOSED/OPEN or behind firewall
- Must read: Problems if pocket is behind the firewall

---
TCP SYN Scan (-st) 
**==is DEFAULT without SUDO permission.==**



==**Performs [[The steps of Three-Way Handshake|three-way handshake]] with each target port in turn**==.
## We **send TCP request w/ SYN flag to a port**,
### Target server will either 

- reply RST flag                      -> port CLOSED


- reply SYN/ACK flag             -> port OPEN


- no reply at all.                      -> port behind FIREWALL



**Detailed explanation below**
## How TCP Connect identifies if port is CLOSED/OPEN or behind firewall
### Nmap sends TCP request w/ SYN flag 
to a specified port in the target server.

#### If received by CLOSED port 
The target server 
- responds **TCP packet with ==RST flag set==**.  rst means "reset"
- Nmap then **marks the port as closed**.
![[Pasted image 20220703150554.png|150]]

#### If received by OPEN port
Basically, it will act as if doing a [[The steps of Three-Way Handshake|three-way handshake]]
- We send a **TCP request w/ SYN flag**
- Target **server will respond** a TCP packet w/ **SYN/ACK flags**. 
- We complete the handshake by **sending back** a TCP packet w/ **ACK**.
Nmap then marks this port as being **open**. 


#### If received by a port behind FIREWALL
Many **firewalls are configured to ==drop incoming packets==**. 

##### How it determines if behind FIREWALL
-> TCP SYN Scan **sends TCP SYN request**, 
-> Receives nothing back. 
This indicates that the port is being protected by a firewall
Thus the port is considered to be ==**filtered**==.

##### The PROBLEM if pocket is behind FIREWALL
Can be difficult/impossible to get an accurate reading of target.

In IPtables for Linux, if we run this command: 
`iptables -I INPUT -p tcp --dport <port> -j REJECT --reject-with tcp-reset`
When the command is executed above ^  
**Any requests of ports behind the ==firewall will respond  RST TCP packet**==. 

^ In other words, the command allows the firewall 
- **==to act as if it's an open port with no firewall behind it==**.












### References
1. For example, if a port is closed, [RFC 793](https://tools.ietf.org/html/rfc793) states that:
>"... If the connection does not exist (CLOSED)  
>-> then a reset is sent in response to any incoming segment except another reset.  
>In particular, SYN addressed to a non-existent connection are rejected by this means."