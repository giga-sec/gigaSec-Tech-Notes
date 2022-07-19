[[Port scanning with NMAP]]

# How UDP (-sU) Scan works
Created:  [[2022-07-03]]
Tags: #literature  


---
Abstract
- How Nmap UDP Scan determines if a port is CLOSED/OPEN
- UDP scans are slow but there could be a fix
---
Every packet is sent to a port of the target server and depending of the reply will determine if the port is OPEN or CLOSED.  It is not that easy to identify if a port is behind the firewall.



## Every packet is sent to a port
#### If packet is received by an OPEN UDP port
Should be **NO RESPONSE**. 
Then **request is sent a second time** as a double check.
- Thus Nmap refers the port as `open|filtered`.  
- Meaning **Port is open but could be firewalled**. 
 
If there's UDP RESPONSE (which is very unusual), 
- then the port is marked as _open_.  


#### If packet is received by a CLOSED UDP Port
The target (the one who received the sent packet) 
- Responds with an ICMP packet ([[Ping command for testing a connection|ping]]) w/ a message "**port is unreachable"**.
- **Nmap marks it as closed port** and moves on.


## UDP scans are slow but there can be a fix
#### Why UDP scans are slow
UDP scans tend to be incredibly slow in comparison to the various TCP scans (in the region of 20 minutes to scan the first 1000 ports, with a good connection). 
The difficulty whether a UDP port is actually open is why slowness exists. 

#### The possible fix
It's usually good practice to run an Nmap scan with 
`--top-ports <number>` . 
For example, scanning with  `nmap -sU --top-ports 20 <target>`. 
Will scan the top 20 most commonly used UDP ports, resulting in a much more acceptable scan time.

When scanning UDP ports, Nmap usually sends completely empty requests -- just raw UDP packets. That said, for ports which are usually occupied by well-known services, it will instead send a protocol-specific payload which is more likely to elicit a response from which a more accurate result can be drawn.












### References
1. 