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









### References
1. https://nmap.org/book/nse-usage.html#nse-categories. Categories for NMAP