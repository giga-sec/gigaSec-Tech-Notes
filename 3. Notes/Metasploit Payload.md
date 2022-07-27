[[Modules and categories of Metasploit]]

# Metasploit Payload
Created:  [[2022-07-27]]
Tags: #fleeting 

---
An example of a [[payload]] could be; 
-> getting a shell, 
-> loading a malware or backdoor to the target system, 
-> running a command, 

**Metasploit has ability to send different payloads that can open shells on the target system.** Shells is what gives us ability to send system commands remotely. 



![[Pasted image 20220727175256.png]]
### Three different directories under Metasploit payloads:
-   **Singles:** 
    Self-contained payloads that do not need to download an additional component to run.
    Like (add user, launch notepad.exe, etc.) 
-   **Stagers:** 
    Sets up connection channel between Metasploit and the target system. 
    Useful when working with staged payloads. “Staged payloads” will first upload a stager on the target system then download the rest of the payload (stage). This provides some advantages as the initial size of the payload will be relatively small compared to the full payload sent at once.
-   **Stages:** Downloaded by the stager. This will allow you to use larger sized payloads.





Metasploit has a subtle way to help you identify single (also called “inline”) payloads and staged payloads.

    generic/shell_reverse_tcp
    windows/x64/shell/reverse_tcp
Both are reverse Windows shells. 
The former is an inline or singles payload, as indicated by the “_” between “shell” and “reverse”. While the latter is a staged payload, as indicated by the “/” between “shell” and “reverse”.












## References
1. 