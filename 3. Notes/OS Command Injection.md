[[OWASP]]

# OS Command Injection
Created:  [[2022-07-08]]
Tags: #fleeting 

---
## SEVERITY  1
- How it happens
- What it can do to the system
- Example: What's Active Command Injection

---
### How OS Command Injection happens
Occurs when server-side code (PHP) in web application makes a system call on hosting machne.


### What OS Command Injection can do
Allows attacker to take advantage of that made system commands on the server.

It opens up many options for the attacker by doing enumeration through executing commands like `whoami`

Worst thing an attacker could do is spawn [[reverse shell]] to become the user that the web server is running as. 


### Active Command Injection
When system command made to server doesn't return the response to the user in HTML document.Instead it returns response to user.

Active command injection occurs when you can see the response from the system call.

![[Pasted image 20220709151747.png|300]]
Like this pic above ^
It's suppose to be a webshell, 
but then it allowed me to see the output of it. 
Therefore I can see the files, the user info through /etc/passwd 












### References
Reverse Shells Reverse Shell
1. 