[[MOC Cybersecurity]]

# Metasploit
Created:  [[2022-07-16]]
Tags: #fleeting 

---
Metasploit supports
- information gathering to post-exploitation.
- scanning, exploitation, exploit development, post-exploitation


## [[Metasploit Versions]]


Launch Metasploit with `msfconsole`
This `msfconsole` helps us to interact with different modules of Metasploit Framework. [[What is a Module in Metasploit]]


[[Exploit]] - A code that takes advantage of existing [[vulnerability]] in the system
[[Vulnerability]]: A logical, code, or design flaw in a program
[[Payload]] - A code that helps us do what we want in a target system

## [[Modules and categories of Metasploit]]



## The MSFconsole
It will support most Linux commands, including `clear`, `ls`, `cd` 
but not all like (e.g. output redirection), as seen below.
```     
msf6 > help > help.txt
[-] No such command
msf6 >
```
MSFconsole supports tab completion



Msfconsole is managed by context; this means that unless set as a global variable, all parameter settings will be lost if you change the module you have decided to use. In the example below, we have used the ms17_010_eternalblue exploit, and we have set parameters such as `RHOSTS`. If we were to switch to another module (e.g. a port scanner), we would need to set the RHOSTS value again as all changes we have made remained in the context of the ms17_010_eternalblue exploit.