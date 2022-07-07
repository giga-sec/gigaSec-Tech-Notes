[[MOC Hacking]]

# Buffer Overflow
Created:  [[2022-07-07]]
Tags: #fleeting 

---
Abstract:


---
For instance, in C languange. If you were to type Hello World on a variable that only accepts 5 characters. Then the extra data that overflows a buffer will be written into nearby memory space. An attacker will be able to sneak their own code into the overflowed data and have this shellcode executed within the vulnerable application. 
![[Pasted image 20220707082319.png]]


Most languanges used to write web-code like Python, Ruby, Node, Java and .Net has a feature managing their memory and are immune to buffer overflow attacks




However web-servers, language runtimes, and operating systems are frequently written in low-level languages, and can exhibit the vulnerability. The fact that 80% of the web is running on one of the four web-servers means anytime a vulnerability is discovered, it can be widely exploited!
(https://www.hacksplaining.com/exercises/buffer-overflows#finish)
![[Pasted image 20220707082509.png]]
![[Pasted image 20220707082519.png]]
![[Pasted image 20220707082530.png]]


[[Protecting against buffer overflow]]




### References
1. 