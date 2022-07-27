

# TryHackMe - Security Awareness
Created:  [[2022-07-27]]
Tags: #fleeting 

---
Based on a report from IBM, 
**human errors were the main reason for 95% of successful cyber attacks**. 
Being more security-aware will significantly help mitigate threats and risks to your organization




Cyber threat actors are 
- individuals or groups of people 
- who maliciously aim to take advantage of system security weaknesses...
- ...to compromise and gain unauthorized access to victim data, computers, or networks.


**Nation-state** threat actor are geopolotically motivated
**Cybercriminals** are financially motivated
**Hacktivists** are motivated by idelogical tings (delivering a message)
**Terrostist Groups** are terrorists
**Thrill-seekers** live on playing how good they can hide or escape from getting caught
**Insider Threats** are motivated by their own dissastisfaction
![[Pasted image 20220727222257.png]]


For example, if an attacker wishes to obtain a victim's password, they _could_ attempt to guess or brute-force the password — _or_ they could simply ask you (social engineering) -> https://www.youtube.com/watch?v=opRMrEfAIiI&t=42s

The best way to understand social engineering is to see it in action! These videos from [Defcon23](https://youtu.be/fHhNWAKw0bY?t=100) (one of the largest hacking conferences in the world) and [CNN](https://youtu.be/PWVN3Rq4gzw) demonstrate some of the immense power in social engineering. They are both well worth a watch!

Whilst direct interaction with targets is the most common style of social engineering, other examples include dropping USB storage devices in public (e.g. in company car parks) in the hope that someone (often a company employee) will pick one up and plug it into a sensitive computer. In a similar vein, attackers may leave a "charging cable" plugged into a socket in a public place. In actuality, the cable contains malicious software such as keyloggers or tools to take control of the victim's device.

Example of Social Engineering in United States vs Israel
Stuxnet was the name given to a particularly nasty computer virus (allegedly developed by the governments of the United States and Israel) that was originally used to target the Iran nuclear programme in 2009. Due to its ability as a "worm" to self-replicate (i.e. clone itself across networks — including the internet), the virus escaped and became much more widespread than was intended. Multiple variants now also exist, making Stuxnet a particularly hard-hitting and notorious weapon. You can read more about the background of Stuxnet [here](https://www.cyber.nj.gov/threat-center/threat-profiles/ics-malware-variants/stuxnet).  

What makes Stuxnet particularly interesting for this section is the original method of infection. The virus can clone itself across networks, but that doesn't help much when the target network is a nuclear weapons development facility with no access to the wider internet. The question became: how can you get a virus into a network that doesn't let anything in or out? The answer was simple: drop malicious USB devices in places where workers at companies that dealt with the facility would find them and hope that one of them plugged the device into a work computer. In this case, the gamble worked, with Stuxnet causing severe damage to the Iran nuclear programme and effectively destroying many of the nuclear centrifuges.



## References
1. https://tryhackme.com/room/securityawarenessintro