

# OS Command Injection
Created:  [[2022-07-08]]
Tags: #fleeting 

---
## SEVERITY  1

---
### How OS Command Injection happens
Occurs when server-side code (PHP) in web application makes a system call on hosting machne.


### What OS Command Injection can do
Allows attacker to take advantage of that made system commands on the server.

It opens up many options for the attacker by doing enumeration through executing commands like `whoami`

Worst thing an attacker could do is spawn [[reverse shell]] to become the user that the web server is running as. 















### References
Reverse Shells Reverse Shell
1. 