[[Port scanning with NMAP]]

# NULL, FIN and Xmas TCP
Created:  [[2022-07-04]]
Tags: #fleeting 

---
Abstract:
- How it idenfities closed, open, ports

---
- All of this three scans uses [[TCP - Transmission Control Protocol|TCP]]
- More stealthier than [[SYN Scan     (-sS)]]. 
- Often used for firewall evasion



#### When packet received by CLOSED ports
NULL scans (`-sN`) 
TCP request is sent with no flags set at all (meaning empty pocket) 
As per the RFC, 
target host should respond with `RST` if port is closed.


FIN scans (`-sF`) a request is sent with the FIN flag (usually used to gracefully close an active connection). 
Once again, Nmap expects a `RST` if the port CLOSED.


Xmas scans (`-sX`) send an abnormal TCP packet 
expects a `RST` response for closed ports. 
##### Why is the name xmas scan?
The flags that it sets (PSH, URG and FIN) give's the appearance of a blinking christmas tree when viewed as a packet capture in Wireshark.



#### When packet is received by OPEN/FIREWALLED ports
For _open_ ports are all identical, 
and very similar to [[UDP Scan     (-sU)]]. 

There is no response to the sent packet to OPEN and Firewalled Ports. 


NULL, FIN and Xmas scans will only ever identify ports as being 
- open|filtered
- closed
- filtered 
Filtered, usually because the target responded with ICMP unreachable packet



While RFC 793 mandates that 
For closed ports:
network hosts respond to malformed packets with a RST TCP packet

For open ports:
Don't respond at all for open ports; 

this is not always the case in practice. 
In particular Microsoft Windows (and a lot of Cisco network devices) are known to respond with a RST to any malformed TCP packet -- regardless of whether the port is actually open or not. This results in all ports showing up as being closed.



That said, the goal here is, of course, firewall evasion. 
Many firewalls are configured to drop incoming TCP packets to blocked ports which have the SYN flag set (thus blocking new connection initiation requests). 
By sending requests which do not contain the SYN flag, we effectively bypass this kind of firewall. 

Whilst this is good in theory, most modern IDS solutions are savvy to these scan types, so don't rely on them to be 100% effective when dealing with modern systems.













### References
1. 