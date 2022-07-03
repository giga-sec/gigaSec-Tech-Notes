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


## How TCP Connect Scan Works (-sT)
By ==**performing the [[The steps of Three-Way Handshake|three-way handshake]] with each target port in turn**==.
Nmap tries to connect to each specified TCP port, and determines whether the service is open by the response it receives.

For example, if a port is closed, [RFC 793](https://tools.ietf.org/html/rfc793) states that:
>"... If the connection does not exist (CLOSED)  -> then a reset is sent in response to any incoming segment except another reset.  
>In particular, SYN addressed to a non-existent connection are rejected by this means."

In other words
We send a TCP request with SYN flag to a specified port, 
That port will either reply a RST flag or SYN/ACK flag or no reply at all. 

These can be the replies of a target server when nmap sends TCP request w/ SYN flag
RST flag for a port closed. 
SYN/ACK for a port that's open. 
No reply for when port is behind firewall


SYN scans requires sudo permission to work in linux

For this single reason above
If run **==WITH SUDO==** permission
SYN scans are the default scans used by Nmap _if run with sudo permissions_. 
Nmap defaults so **SYN scans**

If run **==WITHOUT== sudo** permissions, 
Nmap defaults to the **TCP Connect scan**.



### Nmap sends a TCP request w/ SYN flag 
to a specified port in the target server.

#### If sent to a CLOSED port 
The target server 
- responds **TCP packet with ==RST flag set==**. 
- Nmap then marks the port as **closed**.
![[Pasted image 20220703150554.png|150]]
RST means ReSeT

#### If sent to an OPEN port
Basically, it will act as if doing a [[The steps of Three-Way Handshake|three-way handshake]]

The target server will respond a TCP packet w/ SYN/ACK flags set. 
Completes the handshake by sending back a TCP packet w/ ACK set.
Nmap then marks this port as being **open**. 


#### If behind FIREWALL
What if port is open, but hidden behind a firewall?
Many **firewalls are configured to ==drop incoming packets==**. 

-> Nmap sends a TCP SYN request, 
-> Receives nothing back. 
This indicates that the port is being protected by a firewall
Thus the port is considered to be ==**filtered**==.

##### The PROBLEM if pocket is behind FIREWALL
It can be extremely difficult (if not impossible) to get an accurate reading of the target(s).


In IPtables for Linux, if we run this command: 
`iptables -I INPUT -p tcp --dport <port> -j REJECT --reject-with tcp-reset`

When the command is executed,  
**any requests of ports behind the ==firewall will respond `RST TCP packet`**==. 
In other words, the command allows the firewall 
- **==to act as if it's an open port with no firewall behind it==**.
 



### [[How SYN Scan works (-sS)]]





How Nmap UDP Scan determines if a port is open or closed
### [[UDP Scan (-sU) by nmap explained]]








### References
1. https://nmap.org/book/nse-usage.html#nse-categories. Categories for NMAP