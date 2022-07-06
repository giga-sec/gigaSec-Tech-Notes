[[MOC Networking]]

# NMAP
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Abstract:
- [[Switches of NMAP]]  <- Saving the outputs of Scan
- Different port scanning methods with NMAP
- Default scanning of NMAP and why they're default

---
### [[PORTS 101]]

## How Nmap works
Nmap will connect to each port of the target in turn. 
Depending on how the port responds, it can be determined as being open, closed, or filtered by a firewall.
Once we know which ports are open, we can then look at enumerating which services are running on each port.


### [[Switches of NMAP]]




## Different Port Scanning types of NMAP
Three basic scan types in NMAP
-   [[TCP Connect Scan   (-sT)]] 
-   [[SYN Scan                  (-sS)]] 
-   [[UDP Scan                  (-sU)]]


Additionally there are several less common port scan types.
-   TCP Null Scans (`-sN`)
-   TCP FIN Scans (`-sF`)
-   TCP Xmas Scans (`-sX`)

Most of these (with the exception of UDP scans) are used for very similar purposes, however, the way that they work differs between each scan. 
This means that, whilst one of the first three scans are likely to be your go-to in most situations, it's worth bearing in mind that other scan types exist.


## Defaults of NMAP when scanning
#### SYN scans requires SUDO permission TO WORK in linux
This single reason above. 
Make the defaults run by Nmap 

#### If run **==WITH SUDO==** permission
Default Scan: **SYN scans** 

#### If run **==WITHOUT== sudo** permissions, 
Default Scan: **TCP Connect scan**.




How TCP Connect identifies if port is CLOSED/OPEN or behind firewall
### [[TCP Connect Scan   (-sT)]]


How Nmap SYN Scan determines if a port is open, closed or behind firewall
### [[SYN Scan                  (-sS)]]


How Nmap UDP Scan determines if a port is open or closed
### [[UDP Scan                  (-sU)]]


More common port scan types 
### [[NULL, FIN and Xmas TCP]]


[[NMAP Scripting Engine (NSE) ]]




Firewall Evasion
Stealth Scans
NULL
FIN
XMAS


### Other helpful switches for Firewall Evasion
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
1. https://nmap.org/book/nse-usage.html#nse-categories. Categories for NMAP