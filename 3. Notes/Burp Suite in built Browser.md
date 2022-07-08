[[Burp Suite Basics]]

# Burp Suite Browser
Created:  [[2022-07-08]]
Tags: #fleeting 

---
If we are running on Linux as the root user (as we are with the AttackBox), Burp Suite is unable to create a sandbox environment to start the Burp Browser in, causing it to throw an error and die:
![[Pasted image 20220708153455.png]]
![The Burp Browser Error indicating that our current configuration can't run without a sandbox](https://tryhackme-images.s3.amazonaws.com/user-uploads/5d9e176315f8850e719252ed/room-content/4b2aa73df84e146040d49cca1ba5dbfe.png)  
There are two simple solutions to this:

-   **The smart option:** We could create a new user and run Burp Suite under a low privilege account.
-   **The easy option:** We could go to `Project options -> Misc -> Embedded Browser` and check the `Allow the embedded browser to run without a sandbox` option. Checking this option will allow the browser to start, but be aware that it is disabled by default for security reasons: if we get compromised using the browser, then an attacker will have access to our entire machine. On the training environment of the AttackBox this is unlikely (and isn't a huge issue even if it _does_ happen), but keep it in mind if you try this on a local installation of Burp Suite.












### References
1. 