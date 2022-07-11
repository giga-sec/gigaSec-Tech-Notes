[[OWASP (Open Web Application Security Project)]]

# Injection
Created:  [[2022-07-08]]
Tags: #permanent 

---
## SEVERITY 1
- How it happens
- Types of Injection Attack
- What it can do
- Defence of Injection Attack
---
### How Injection Attack happens
`user input`  is interpreted as ACTUAL COMMANDS or PARAMETERS by application.


### Types of Injection Attacks
Injection attacks depends on technologies used and how input is interpreted 
- SQL Injection
    -> Occurs when `user input` is passed to SQL queries. 
    -> Attacker can pass in SQL queries to manipulate outcome of queries.

- Command Injection
    -> Occurs when `user input` is passed to system commands
    -> Attacker can execute system commands to application servers.


### What Injection Attack can do
If attacker successfully passed input and interpreted correctly
- If input passed in SQL Database
    -> Access, Modify, Delete Info
    -> Can steal sensitive info
- If input passed in Server
    -> Allow an attacker to gain access to users’ systems
    -> Steal sensitive data and more attacks to infrastructure linked to server


### Defence for Injection Attacks
`user input` must NOT INTERPRET as queries/commands
Different ways we can do it and is shown below
- Using an allow list
    -> Input is sent to server then compared to list of safe input(allow list)
    -> If Input is marked as safe, safely proceed. 
    -> Otherwise, rejected and throw application error
- Stripping Input
    -> If input contains dangerous characters, these characters are removed 
















### References
1. 