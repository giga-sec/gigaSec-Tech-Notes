[[OWASP (Open Web Application Security Project)]]

# Cross-Site Scripting (or XSS)
Created:  [[2022-07-08]]
Tags: #fleeting 

---
Allows attacker to execute malicious Javascript on victim's machine.
XSS is possible in Javascript, VBScript, Flash and CSS

### Types of Cross-Site Scripting
Stored XSS (MOST DANGEROUS)
-> Malicious string originates from the website
-> Happens when website allows _unsanitised user input_ to be in database
    -> _unsanitised user input_ means input contains malicious parts


Reflected XSS
-> Attacker needs to trick a victim into clicking a URL to execute their malicious payload


DOM-Based XSS
-> DOM (Document Object Model)
-> DOM is Programming interface for HTML and XMl docs
-> THE ROOM JUST EXPLAINED WHAT DOM IS!






### References
1. 