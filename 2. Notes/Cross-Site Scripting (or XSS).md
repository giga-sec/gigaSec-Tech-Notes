[[OWASP (Open Web Application Security Project)]]

# Cross-Site Scripting (or XSS)
Created:  [[2022-07-08]]
Tags: #fleeting 

---
## Severity 8

Allows attacker to execute malicious Javascript on victim's machine.
XSS is possible in Javascript, VBScript, Flash and CSS

The risk of XSS is that the malicious code is usually injected directly into the vulnerable application and not a redirect site that the user might watch out for. 
So if you often go to `example.com` and someone sends you a link of one of their articles like
`example.com/this-article-is-good?id=%3Cscript%3Ealert%281%29%3C%2Fscript%3E` 
you’ll probably click it because it’s something you’re really used to. 
What you’re not aware of is that there was some code injected in the site without your or the site’s approval and that code might steal your session, take some screenshots, activate a keylogger, etc…

XSS vulnerability can be dangerous where you don’t even have to click on a link to execute the code, You just browse to some page and an attackers comment containing malicious code that was saved in the database is displayed on the site. 
Then suddenly you and everyone who visits that page is triggering something they really don’t want to trigger.


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


### Common Payload Types used
- Popup
- Override the website's HTML to add the malicious ting
- XSS Keylogger
- Port Scanning


website that has XSS related Payloads, Tools, Documentation and more
http://www.xss-payloads.com








### References
1. 