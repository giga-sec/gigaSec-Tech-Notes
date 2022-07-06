[[Port scanning with NMAP]]

# NMAP Scripting Engine (NSE)
Created:  [[2022-07-04]]
Tags: #literature 

---
Abstract:
- Multiple Scripts can be run in single command
- Built-in help for each scripts
- Arguments in Scripts
- Finding Nmap Scripts

---
Uses LUA programming languange


Many categories exists
-   `safe`:- Won't affect the target
-   `intrusive`:- Not safe: likely to affect the target  
-   `vuln`:- Scan for vulnerabilities
-   `exploit`:- Exploit a vulnerability
-   `auth`:- Bypass authentication for running services 
-   `brute`:- Bruteforce credentials for running services
-   `discovery`:- Query running services for further info about a network.
A more exhaustive list can be found [here](https://nmap.org/book/nse-usage.html).


## Multiple Scripts can be run in single command
We use `,` to separate commands
#### `--script=<script_name1>, <script_name2>`
```Lua
--script=smb-enum-users, smb-enum-shares
```

## Built-in help of scripts
#### `nmap --script-help <script-name>``
It will have a website link that leads you to more info


## Arguments in scripts
#### `<script-name>.<argument>`


## Finding nmap scripts
### Through the official website
https://nmap.org/nsedoc/



### Or the local copy
#### `/usr/share/nmap/scripts`
^ Directory above contains `script.db`

---> You could grep `script.db`
`grep "ftp" /usr/share/nmap/scripts/script.db`
`grep "safe" /usr/share/nmap/scripts/script.db`

---> Or search the folder with this syntax
`ls -l /usr/share/nmap/scripts/*script_name*`







### References
1. 