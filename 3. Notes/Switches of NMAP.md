[[Port scanning with NMAP]]

# Switches of NMAP
Created:  [[2022-07-03]]
Tags: #literature 

---
Abstract:
- Displaying more info
- Activating a Script
- Saving the scan results
---
`-O` determines the operating system that's running on the host


`-sV` detect the version of the services running on the target


`-T<0-5>` Increases the speed of your scans 
but higher speed means noisier and can incur errors.  


## Port scanning

`-p-` scan _all_ ports


`-p 80` Specify to only scan port 80


This option specifies which ports you want to scan and overrides the default. Individual port numbers are OK, as are ranges separated by a hyphen (e.g. `1-1023`). The beginning and/or end values of a range may be omitted, causing Nmap to use 1 and 65535, respectively. So you can specify `-p-` to scan ports from 1 through 65535. Scanning port zero is allowed if you specify it explicitly. For IP protocol scanning (`-sO`), this option specifies the protocol numbers you wish to scan for (0–255).

When scanning a combination of protocols (e.g. TCP and UDP), you can specify a particular protocol by preceding the port numbers by `T:` for TCP, `U:` for UDP, `S:` for SCTP, or `P:` for IP Protocol. The qualifier lasts until you specify another qualifier. For example, the argument `-p U:53,111,137,T:21-25,80,139,8080` would scan UDP ports 53, 111,and 137, as well as the listed TCP ports. Note that to scan both UDP and TCP, you have to specify `-sU` and at least one TCP scan type (such as `-sS`, `-sF`, or `-sT`). If no protocol qualifier is given, the port numbers are added to all protocol lists.




## Display more information
Always a good practice to increase verbosity when running a comman

`-v` increase verbosity to display more information
`-vv` for even greater verbosity
`-v3` also exists

`-A` aggressive mode 
- for when results aren't enough, 
- that we also don't care how loud we are.  
- activates service detection, operating system detection, a traceroute and common script scanning.




## Activating a Script

Activate a script from the nmap scripting library
`--script`

Activate ALL scripts in vuln CATEGORY
`--script=vuln`

More categories -> https://nmap.org/book/nse-usage.html#nse-categories. 



## Saving the output of scan results
Thus we only need to run the scan once 
(reducing network traffic and a chance of detection)

`-oA` 
saves in normal, XML and grepable formats at once.


`-oN` 
saves into **normal format**


`-oG` 
saves into **greppable format**







### References
1. 