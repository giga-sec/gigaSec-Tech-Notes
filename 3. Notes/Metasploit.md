[[MOC Cybersecurity]]

# Metasploit
Created:  [[2022-07-16]]
Tags: #fleeting 

---
Metasploit supports
- information gathering to post-exploitation.
- scanning, exploitation, exploit development, post-exploitation


## [[Metasploit Versions]]



## Main Compenents of Metasploit
`Tools`: Stand-alone tools that help vuln research, vuln assessment, or pen testing
            msfvenom, pattern_create and pattern_offset.


Launch Metasploit with `msfconsole`
This `msfconsole` helps us to interact with different modules of Metasploit Framework. [[What is a Module in Metasploit]]


[[Exploit]] - A code that takes advantage of existing [[vulnerability]] in the system
[[Vulnerability]]: A logical, code, or design flaw in a program
[[Payload]] - A code that helps us do what we want in a target system


### Modules and categories
Auxiliary: modules, such as 
- scanners, crawlers and fuzzers, can be found here.


Encoders: Allows you to encode exploit and payload 
- in hope that a signature-based antivirus solution may miss them.
[[What is a signature-based antivirus and why encoders have less success on them]]


Evasion: This will try to evade antivirus software with no guarantee of success. 

NOPs: NOPs (No OPeration) do nothing, literally.

They are represented in the Intel x86 CPU family they are represented with 0x90, following which the CPU will do nothing for one cycle. They are often used as a buffer to achieve consistent payload sizes.