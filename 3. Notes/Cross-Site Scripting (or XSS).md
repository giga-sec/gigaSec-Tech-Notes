[[OWASP (Open Web Application Security Project)]]

# Cross-Site Scripting (or XSS)
Created:  [[2022-07-08]]
Tags: #fleeting 

---
## Severity 8

Allows attacker to execute malicious Javascript on victim's machine.
XSS is possible in Javascript, VBScript, Flash and CSS


### Types of Cross-Site Scripting
Stored XSS (MOST DANGEROUS)
-> Malicious string originates from the website
-> Happens when website allows _unsanitised user input_ to be in database
    -> _unsanitised user input_ means input contains malicious parts


Reflected XSS
-> Attacker needs to trick a victim into clicking a URL to execute their malicious payload
Your payload (string in this case) gets inputted directly into the page
No Jscript is loaded before hand, neither is anything processed in DOM before hand.


DOM-Based XSS
-> DOM (Document Object Model)
-> DOM is Programming interface for HTML and XMl docs
-> THE ROOM JUST EXPLAINED WHAT DOM IS!


Common Payload Types used
- Popup
- Override the website's HTML to add the malicious ting
- XSS Keylogger
- Port Scanning


website that has XSS related Payloads, Tools, Documentation and more
http://www.xss-payloads.com








### References
1. 