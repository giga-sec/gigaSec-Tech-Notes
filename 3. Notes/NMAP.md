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

### How Nmap works
Nmap will connect to each port of the target in turn. Depending on how the port responds, it can be determined as being open, closed, or filtered (usually by a firewall)
Once we know which ports are open, we can then look at enumerating which services are running on each port.


### Switches of NMAP
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


### Saving the output of scans
This means that we only need to run the scan once (reducing network traffic and thus chance of detection)

`-oA` save scan results in normal, XML and grepable formats at once.

`-oN` saving scan results into normal format

`-oG` saving scan results into greppable format


### Port Scanning with NMAP
When port scanning with Nmap, there are three basic scan types. These are:
-   TCP Connect Scans (`-sT`)
-   SYN "Half-open" Scans (`-sS`)
-   UDP Scans (`-sU`)


Additionally there are several less common port scan types.
-   TCP Null Scans (`-sN`)
-   TCP FIN Scans (`-sF`)
-   TCP Xmas Scans (`-sX`)

Most of these (with the exception of UDP scans) are used for very similar purposes, however, the way that they work differs between each scan. This means that, whilst one of the first three scans are likely to be your go-to in most situations, it's worth bearing in mind that other scan types exist.


### How TCP Connect Scan Works (-sT)
By ==**performing the [[The steps of Three-Way Handshake|three-way handshake]] with each target port in turn**==.
Nmap tries to connect to each specified TCP port, and determines whether the service is open by the response it receives.



For example, if a port is closed, [RFC 793](https://tools.ietf.org/html/rfc793) states that:
>"... If the connection does not exist (CLOSED)  -> then a reset is sent in response to any incoming segment except another reset.  
>In particular, SYN addressed to a non-existent connection are rejected by this means."

In other words, 
if Nmap sends a TCP request with _SYN_ flag to a **_closed_** port, 
The target server will respond with TCP packet with the _RST_ (Reset) flag set. By this response, Nmap can establish that the port is closed.
![[Pasted image 20220703150554.png|200]]

If, however, the request is sent to an _open_ port, 
the target will respond with a TCP packet with the SYN/ACK flags set. 
Nmap then marks this port as being _open_ 
(and completes the handshake by sending back a TCP packet with ACK set).


What if the port is open, but hidden behind a firewall?
Many firewalls are configured to simply **drop** incoming packets. Nmap sends a TCP SYN request, and receives nothing back. This indicates that the port is being protected by a firewall and thus the port is considered to be _filtered_.

myquestion: Do we also know beforehand that the port is open or close?
I think not because that defeats the functionality of determining if a port is open or not. 
We sent a TCP request with syn flag to a port, then that port will either reply a RST flag or SYN/ACK flag or no reply at all. 
RST flag for a port closed. 
SYN/ACK for a port that's open. 
No reply for when port is behind firewall



That said, it is very easy to configure a firewall to respond with a `RST TCP packet`. For example, in IPtables for Linux, a simple version of the command would be as follows:

`iptables -I INPUT -p tcp --dport <port> -j REJECT --reject-with tcp-reset`

This can make it extremely difficult (if not impossible) to get an accurate reading of the target(s).



### How SYN Scan works (-sS)
SYN scans (`-sS`) are used to scan the TCP port-range of a target or targets; however, the two scan types work slightly differently. 
SYN scans are sometimes referred to as "_Half-open"_ scans, or "Stealth" scans.


Where TCP scans perform a full three-way handshake with the target, 
SYN scans sends back a RST TCP packet after receiving a SYN/ACK from the server (this prevents the server from repeatedly trying to make the request). In other words, the sequence for scanning an **open** port looks like this:
![[Pasted image 20220703152536.png|250]]
![[stealthscan.png]]
This has a variety of advantages for us as hackers:
-   It can be used to bypass older Intrusion Detection systems as they are looking out for a full three way handshake. This is often no longer the case with modern IDS solutions; it is for this reason that SYN scans are still frequently referred to as "stealth" scans.
-   SYN scans are often not logged by applications listening on open ports, as standard practice is to log a connection once it's been fully established. Again, this plays into the idea of SYN scans being stealthy.
-   Without having to bother about completing (and disconnecting from) a three-way handshake for every port, SYN scans are significantly faster than a standard TCP Connect scan.

There are, however, a couple of disadvantages to SYN scans, namely:
-   They require sudo permissions[1] in order to work correctly in Linux. This is because SYN scans require the ability to create raw packets (as opposed to the full TCP handshake), which is a privilege only the root user has by default. [1] SYN scans can also be made to work by giving Nmap the CAP_NET_RAW, CAP_NET_ADMIN and CAP_NET_BIND_SERVICE capabilities; however, this may not allow many of the NSE scripts to run properly.
-   Unstable services are sometimes brought down by SYN scans, which could prove problematic if a client has provided a production environment for the test.


For this reason, SYN scans are the default scans used by Nmap _if run with sudo permissions_. If run **without** sudo permissions, Nmap defaults to the TCP Connect scan we saw in the previous task.


When using a SYN scan to identify closed and filtered ports, the exact same rules as with a TCP Connect scan apply.

If a port is closed then the server responds with a RST TCP packet. If the port is filtered by a firewall then the TCP SYN packet is either dropped, or spoofed with a TCP reset.

In this regard, the two scans are identical: the big difference is in how they handle _open_ ports.


### How UDP Scan works
The lack of ACK bit makes UDP significantly more difficult (and much slower) to scan.


When a packet is sent to an open UDP port, there should be no response. When this happens, Nmap refers to the port as being `open|filtered`. It suspects that the port is open, but it could be firewalled. If it gets a UDP response (which is very unusual), then the port is marked as _open_.  More commonly there is no response, in which case the request is sent a second time as a double-check.  If there is still no response then the port is marked _open|filtered_ and Nmap moves on.

When a packet is sent to a _closed_ UDP port, the target should respond with an ICMP (ping) packet containing a message that the port is unreachable. This clearly identifies closed ports, which Nmap marks as such and moves on.


Due to this difficulty in identifying whether a UDP port is actually open, UDP scans tend to be incredibly slow in comparison to the various TCP scans (in the region of 20 minutes to scan the first 1000 ports, with a good connection). For this reason it's usually good practice to run an Nmap scan with `--top-ports <number>` enabled. For example, scanning with  `nmap -sU --top-ports 20 <target>`. Will scan the top 20 most commonly used UDP ports, resulting in a much more acceptable scan time.


When scanning UDP ports, Nmap usually sends completely empty requests -- just raw UDP packets. That said, for ports which are usually occupied by well-known services, it will instead send a protocol-specific payload which is more likely to elicit a response from which a more accurate result can be drawn.







### References
1. https://nmap.org/book/nse-usage.html#nse-categories. Categories for NMAP