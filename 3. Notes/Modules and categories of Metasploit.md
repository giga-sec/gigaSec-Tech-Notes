[[Metasploit]]

# Modules and categories of Metasploit
Created:  [[2022-07-27]]
Tags: #fleeting 

---
Auxiliary: modules, such as 
- scanners, crawlers and fuzzers, can be found here.


Encoders: Allows you to encode exploit and payload 
- in hope that a signature-based antivirus solution may miss them.
[[What is a signature-based antivirus and why encoders have less success on them]]


Evasion: This will try to evade antivirus software with no guarantee of success. 


NOPs: NOPs (No OPeration) do nothing, literally.
Represented in Intel x86 CPU family 
Represented with 0x90, 
Following which the CPU will do nothing for one cycle. 
-> **often used as a buffer to achieve consistent payload sizes**.


[[Payload]]: Payloads are codes that will run on the target system.
Exploits will take advantage of vulnerability on the target system, 
but to achieve the desired result, we will need a payload. 

Examples could be; 
-> getting a shell, 
-> loading a malware or backdoor to the target system, 
-> running a command, 
Metasploit has ability to send different payloads that can open shells on the target system. Shells is what gives us ability to send system commands remotely. 

In Metasploit Payload
Three different directories under payloads:
-   **Singles:** 
    Self-contained payloads that do not need to download an additional component to run.
    Like (add user, launch notepad.exe, etc.) 

-   **Stagers:** 
    Sets up connection channel between Metasploit and the target system. 
    Useful when working with staged payloads. “Staged payloads” will first upload a stager on the target system then download the rest of the payload (stage). This provides some advantages as the initial size of the payload will be relatively small compared to the full payload sent at once.

-   **Stages:** Downloaded by the stager. This will allow you to use larger sized payloads.
![[Pasted image 20220727175256.png]]
Metasploit has a subtle way to help you identify single (also called “inline”) payloads and staged payloads.

    generic/shell_reverse_tcp
    windows/x64/shell/reverse_tcp

Both are reverse Windows shells. 
The former is an inline (or single) payload, as indicated by the “_” between “shell” and “reverse”. While the latter is a staged payload, as indicated by the “/” between “shell” and “reverse”.


**Post:** Post modules will be useful on the final stage of the penetration testing












## References
1. 