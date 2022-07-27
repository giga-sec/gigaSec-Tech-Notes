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


Further information on any module can be obtained by typing the `info` command within its context.

If used from the msfconsole prompt, the `show` command will list all modules.
The `use` and `show options`
You can leave the context using the `back` command.
`info` command within its context.


`search ms7-010`. 
will search the Metasploit Framework database for modules relevant to the given search parameter. You can conduct searches using CVE numbers, exploit names (eternalblue, heartbleed, etc.), or target system.

Each exploit module has a ranking syste
Look her efor always updated info -> https://docs.metasploit.com/docs/using-metasploit/intermediate/exploit-ranking.html

