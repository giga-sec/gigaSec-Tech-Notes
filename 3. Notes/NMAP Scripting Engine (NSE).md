[[Port scanning with NMAP]]

# NMAP Scripting Engine (NSE)
Created:  [[2022-07-04]]
Tags: #fleeting 

---
Abstract:


---
Uses LUA programming languange



Many categories exists
-   `safe`:- Won't affect the target
-   `intrusive`:- Not safe: likely to affect the target  
-   `vuln`:- Scan for vulnerabilities
-   `exploit`:- Attempt to exploit a vulnerability
-   `auth`:- Attempt to bypass authentication for running services (e.g. Log into an FTP server anonymously)
-   `brute`:- Attempt to bruteforce credentials for running services
-   `discovery`:- Attempt to query running services for further information about the network (e.g. query an SNMP server).
A more exhaustive list can be found [here](https://nmap.org/book/nse-usage.html).


    
Multiple Scripts can be run, by separating commas
Here we are running two scripts
`smb-enum-users`
`smb-enum-shares`
```Lua
--script=smb-enum-users, smb-enum-shares
```

Nmap scripts come with built-in help
`nmap --script-help <script-name>``
The built-in help will have a website that will lead you to more info such as arguments for the script


Some scripts require arguments
`<script-name>.<argument>`


Finding nmap scripts
Through the official website
https://nmap.org/nsedoc/

Or the local copy
`/usr/share/nmap/scripts`
All scripts are installed here by default

Inside of the folder contains 
This is where nmap keep tracks of the script
`script.db`


You could do this search
`grep "ftp" /usr/share/nmap/scripts/script.db`
`grep "safe" /usr/share/nmap/scripts/script.db`


Or this search
`ls -l /usr/share/nmap/scripts/*ftp*`






### References
1. 