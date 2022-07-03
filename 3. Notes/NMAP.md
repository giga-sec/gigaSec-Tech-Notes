[[MOC Networking]]

# NMAP
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Abstract:
- What is ports
- How is ports used in NMAP

---
[[PORTS 101]]

### How Nmap works
Nmap will connect to each port of the target in turn. Depending on how the port responds, it can be determined as being open, closed, or filtered (usually by a firewall)
Once we know which ports are open, we can then look at enumerating which services are running on each port.

Switches of NMAP

`-sU` for UDP Scan

`-sS` for TCP Syn Scan

`-O` determines the operating system that's running on the host

`-sV` detect the version of the services running on the target

`-v` increase verbosity to display more information
`-vv` for even greater verbosity


We should always save the output of our scans -- this means that we only need to run the scan once (reducing network traffic and thus chance of detection)

`-oA` save scan results in normal, XML and grepable formats at once.

`-oN` saving scan results into normal format

`-oG` saving scan results into greppable format



`-A` aggressive mode for when results aren't enough and that we don't care how loud we are.  A shorthand switch that activates service detection, operating system detection, a traceroute and common script scanning.


  
Nmap offers five levels of "timing" template. These are essentially used to increase the speed your scan runs at. Be careful though: higher speeds are noisier, and can incur errors!
`-T<0-5>`


Specify to only scan port 85
`-p 80`


`-p-` scan _all_ ports


Activate a script from the nmap scripting library
`--script`

Activate all scripts in vuln category
`--script=vuln`







### References
1. 