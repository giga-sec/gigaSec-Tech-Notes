[[MOC Cybersecurity]]

# Buffer Overflow
Created:  [[2022-07-07]]
Tags: #fleeting 

---
#### Abstract
- Who are immune to buffer overflow attack
- Protecting Against Buffer Overflow

---
For instance, in C languange. 
If you were to type `Hello World` on variable that only accepts 5 characters. Then the extra data causes buffer overflows and will be written into nearby memory space. 
An attacker will be able to sneak their own code into the overflowed data and have this shellcode executed within the vulnerable application. 
![[Pasted image 20220707082319.png]]

### Who are immune to buffer overflow attacks?
Most languanges used to write web-code like Python, Ruby, Node, Java and .Net has a feature managing their memory and are immune to buffer overflow attacks



## [[Protecting against buffer overflow]]
However web-servers, language runtimes, and operating systems are frequently written in low-level languages, and can exhibit the vulnerability. 80% of the web is running on one of the four web-servers means anytime a vulnerability is discovered, it can be widely exploited!
![[Pasted image 20220707082509.png|300]]
![[Pasted image 20220707082519.png|300]]
![[Pasted image 20220707082530.png|300]]






### References
1. 