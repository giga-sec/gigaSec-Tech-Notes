[[NMAP]]

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


`-p-` scan _all_ ports


`-p 80` Specify to only scan port 80



## Display more information

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