[[MOC Networking]]

# NMAP
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Abstract:
- Switches for NMAP
- Saving the outputs of Scan
- Different ways we do port scanning with NMAP

---
[[PORTS 101]]

## How Nmap works
Nmap will connect to each port of the target in turn. Depending on how the port responds, it can be determined as being open, closed, or filtered (usually by a firewall)
Once we know which ports are open, we can then look at enumerating which services are running on each port.


## Switches of NMAP
`-O` determines the operating system that's running on the host

`-sV` detect the version of the services running on the target

#### Display more information
`-v` increase verbosity to display more information
`-vv` for even greater verbosity
`-v3` also exists

`-A` aggressive mode 
- for when results aren't enough, 
- that we also don't care how loud we are.  
- activates service detection, operating system detection, a traceroute and common script scanning.


Increasing the speed of your scans 
but higher speed means noisier and can incur errors.  
`-T<0-5>`


`-p-` scan _all_ ports

`-p 80` Specify to only scan port 80

#### Activating a Script
Activate a script from the nmap scripting library
`--script`

Activate ALL scripts in vuln CATEGORY
`--script=vuln`

More categories -> https://nmap.org/book/nse-usage.html#nse-categories. 


## Saving the output of scans
This means that we only need to run the scan once (reducing network traffic and thus chance of detection)

`-oA` save scan results in normal, XML and grepable formats at once.

`-oN` saving scan results into normal format

`-oG` saving scan results into greppable format


## Port Scanning with NMAP
When port scanning with Nmap, there are three basic scan types. These are:
-   TCP Connect Scans (`-sT`)
-   SYN "Half-open" Scans (`-sS`)
-   UDP Scans (`-sU`)


Additionally there are several less common port scan types.
-   TCP Null Scans (`-sN`)
-   TCP FIN Scans (`-sF`)
-   TCP Xmas Scans (`-sX`)

Most of these (with the exception of UDP scans) are used for very similar purposes, however, the way that they work differs between each scan. This means that, whilst one of the first three scans are likely to be your go-to in most situations, it's worth bearing in mind that other scan types exist.




### SYN scans requires sudo permission to work in linux
For this single reason above. 
There are defaults run by Nmap 

If run **==WITH SUDO==** permission
Default Scan: **SYN scans** 

If run **==WITHOUT== sudo** permissions, 
Default Scan: **TCP Connect scan**.




How TCP Connect identifies if port is CLOSED/OPEN or behind firewall
### [[How TCP Connect Scan Works (-sT)]]


 


How Nmap SYN Scan determines if a port is open, closed or behind firewall
### [[How SYN Scan works (-sS)]]





How Nmap UDP Scan determines if a port is open or closed
### [[UDP Scan (-sU) by nmap explained]]








### References
1. https://nmap.org/book/nse-usage.html#nse-categories. Categories for NMAP