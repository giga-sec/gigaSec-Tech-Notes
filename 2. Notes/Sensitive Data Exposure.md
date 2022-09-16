[[OWASP (Open Web Application Security Project)]]

# Sensitive Data Exposure
Created:  [[2022-07-09]]
Tags: #fleeting 

---
## Severity 3
#### Abstract:
- Explanation of Databases and technologies used by it
- Example of Sensitive Data Exposure on Flat File Database
---
**==When webapp accidentally makes sensitive data known==**

Often techniques used such as
"The man in the middle of attack"
- Attacker **takes advantage of weak encryption** on any transmitted data. 
- **sometimes,  sensitive data is found directly on webserver itself**
![[man_in_the_middle_attack.png|300]]

### Quick Explanation of Databases and technologies used by it
Database engines uses 
- **SQL syntax**  
- or **NoSQL**

Databases set up on dedicated servers, **COMMON TO SEE** 
- **MySQL**
- or **MariaDB**

For small webapps, **COMMON TO SEE**
- **FLAT FILE DATABASE** 
    ^-> Databases stored as file on computer disk  
    ^-> Common format is **sqlite database**
        ^-> can be accessed with `sqlite3` on cli
sqlite3 commands
.tables


### Example of Sensitive Data Exposure on Flat File Database
-> sensitive data exposure happens
-> on Flat-File Database
Because database is stored underneath root directory of the website 
(.e a folder that a user can access when they are connected to website)

#### Expectation from a sensitive data exposure of flat-file database
![[Pasted image 20220709182603.png]]
^-> the passwords above are in hashes

Crack Hashing
Hash Checker -> https://crackstation.net
^ Extremely good for cracking weak password hashes ^

https://crackstation.net uses a massive wordlist. 
If the password is not in the wordlist 
then Crackstation will not be able to break the hash.













### References
1. 