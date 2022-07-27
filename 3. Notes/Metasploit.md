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
This `msfconsole` helps us to interact with different modules of Metasploit Framework. 
[[What is a Module in Metasploit]]


[[Exploit]] - A code that takes advantage of existing [[vulnerability]] in the system
[[Vulnerability]]: A logical, code, or design flaw in a program
[[Payload]] - A code that helps us do what we want in a target system

## [[Exploit Modules and categories of Metasploit]]
Each exploit module has a ranking system
Look her efor always updated info -> https://docs.metasploit.com/docs/using-metasploit/intermediate/exploit-ranking.html



## The MSFconsole
It will support most Linux commands, including `clear`, `ls`, `cd` 
but not all like (e.g. output redirection), as seen below.
```     
msf6 > help > help.txt
[-] No such command
msf6 >
```
MSFconsole supports tab completion



### Msfconsole is managed by context; 
Context is like what exploit we're currently in
this means that unless set as a global variable, 
all parameter settings will be lost if you change the module you have decided to use. 

In the example below, we used `ms17_010_eternalblue exploit`, 
and we set parameters such as `RHOSTS`. 
If we were to switch to another module like `port scanner`,
we would need to set the `RHOSTS` value again 
as all changes we made remained in context of `ms17_010_eternalblue exploit`

Once you type the command
-> `use exploit/windows/smb/ms17_010_eternalblue`  
-> you will see cli prompt change...
    from `msf6` to `msf6 exploit(windows/smb/ms17_010_eternalblue)`
[[Quick Info about EternalBlue]]

```
msf6 > use exploit/windows/smb/ms17_010_eternalblue 
[*] No payload configured, defaulting to windows/x64/meterpreter/reverse_tcp
msf6 exploit(windows/smb/ms17_010_eternalblue) >
```


`info` command .
- More info about the exploit within its context 


`back` command
- Leave the current context


`use` command
- To go into a certain context
- You can use the Exploite Modules to browse context. [[Exploit Modules and categories of Metasploit]]


`show options` 
Idk, it shows you options I guess?


`search command`
Syntax: `search <CVE numbers, exploit names, target system>`
Example ->`search ms7-010`. 
You can conduct searches using   
-> CVE numbers, 
-> exploit names (eternalblue, heartbleed, etc.) 
-> target system.

It uses Metasploit Framework Database to give the results of the searches

