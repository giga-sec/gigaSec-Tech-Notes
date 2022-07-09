[[OWASP]]

# Sensitive Data Exposure
Created:  [[2022-07-09]]
Tags: #fleeting 

---
## Severity 3
#### Abstract:


---
When webapp accidentally makes sensitive data known

Often techniques used such as
"The man in the middle of attack"
- Attacker **takes advantage of weak encryption** on any transmitted data. 
- **sometimes,  sensitive data is found directly on webserver itself**
![[man_in_the_middle_attack.png|300]]


Database engines uses 
- **SQL syntax**  
- or **NoSQL**
Databases set up on dedicated servers, this is common to see 
- **MySQL**
- or **MariaDB**

For small webapps, common to see
- Flat-File Database -> Databases stored as file on computer disk

We're gonna be dealing with Flat-File Database first
Here is a scenario where sensitive data exposure happens
What if the database is stored underneath the root directory of the website (.e a file that a user connecting to the website is able to access)
Well, we can download it and query it in our own machine

Common Format of Flat-File Database
- sqlite database
can be accessed with `sqlite3` on cli

sqlite3 commands
.tables


This is what we expect from a sensitive data exposure of flat-file database
![[Pasted image 20220709182603.png]]

the passwords are in the form of hashes
Crack Hashing
Hash Checker -> https://crackstation.net
Extremely good for cracking weak password hashes ^
Crackstation works using a massive wordlist. If the password is not in the wordlist then Crackstation will not be able to break the hash.













### References
1. 