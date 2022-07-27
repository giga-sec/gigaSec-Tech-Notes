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

Metasploit has ability to send different payloads that can open shells on the target system. [[Metasploit Payload]]



**Post:** Post modules will be useful on the final stage of the penetration testing












## References
1. 