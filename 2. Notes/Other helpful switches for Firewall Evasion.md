[[Port scanning with NMAP]]

# Other helpful switches for Firewall Evasion
Created:  [[2022-07-06]]
Tags: #fleeting 

---
Abstract:


---
Default Firewall of Windows
- block all [[ICMP - Internet Control Message Protocol|ICMP]] Packets
This presents a problem: 
not only do we often use _ping_ to manually establish the activity of a target, Nmap does the same thing by default. 
This means that Nmap will register a host with this firewall configuration as dead and not bother scanning it at all.

Fortunately Nmap provides an option for this: 
`-Pn`, 
which tells Nmap to not bother pinging the host before scanning it. 
Means Nmap will always treat the target host as being alive, effectively bypassing the ICMP block; 
However, 
it can potentially take long time to complete the scan 
(e.g if the host really is dead then Nmap will still be checking and double checking every specified port).

It's worth noting that if you're already directly on the local network, Nmap can also use ARP requests to determine host activity.


`-f`
Used to fragment the packets (i.e. split them into smaller pieces) 
making it less likely that the packets will be detected by a firewall or IDS.

Alternative to `-f`  
`--mtu <number>`, 
that provides more control over size of the packets
accepts a maximum transmission unit size to use for the packets sent. 
This _must_ be a multiple of 8.


`--scan-delay <time>ms`
used to add a delay between packets sent. 
Useful if network is unstable
Useful for evading any time-based firewall/IDS triggers 


`--badsum` 
Used to generate in invalid checksum for packets. 
Any real TCP/IP stack would drop this packet, however, firewalls may potentially respond automatically, without bothering to check the checksum of the packet. 
For reason above, 
This switch is used to determine the presence of a firewall/IDS


More info here
https://nmap.org/book/man-bypass-firewalls-ids.html












### References
1. 