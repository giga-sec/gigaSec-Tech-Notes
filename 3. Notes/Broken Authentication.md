[[OWASP]]

# Broken Authentication
Created:  [[2022-07-09]]
Tags: #fleeting 

---
## Severity 2
#### Abstract:
- What is Authentication
- What Broken Authentication Can Do
- How to prevent Broken Authentication Attack
- Example: Re-registration of Existing User

---
### What is Authentication
Authentication
- Allows users to gain access to web apps by verifying their identities

Username and Password are most common form of Authentication
For instance
- A user enter these credentials
- Server verifies it
- If correct, server provides user's browser with session cookie
Attaching session cookies means server knows who is sending what data
Server can then keep track of user's actions. [[Why are cookies used in HTTP]]

### What Broken Authentication can do 
If attacker finds a flaw in authentication, they can gain access to other user's accounts
These can be done through
- Brute Force Attacks
- Use of weak credentials
- Weak Session Cookies -> If session cookies contains predictable values, an attacker can set their own session cookies and access user's accoutns

### How to prevent Broken Authentication Attack
- Avoid Brute Force Attack -> enforces automatic lockout after certain attempts
- Avoid password-guessing -> ensure a strong password policy
- Implement Multi-Factor Authentication




### Re-registration of an existing user.
This is the developers fault

For instance
`darren` is already registered
we could do this instead
` darren`  <- we put space on it, and use that to register
Now when system succesfully created the account, we basically have two accounts that shares one info.
Meaning the original account `darren`, whatever is on there is shared on the 
re-registered account ` darren`.








### References
1. 