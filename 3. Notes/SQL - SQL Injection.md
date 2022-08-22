[[Web App Security Fundamentals]]

# SQLI - SQL Injection
Created:  [[2022-08-02]]
Tags: #fleeting 

---
Web application communicates the input of user to database. [[What is a database]]
IF -> input form user hasn't been properly validated
THEN -> attacker can steal, delete or do anything with the database

SQLi, is also one of the oldest web vulnerability out there

[[How to do SQL Injection]]

## Several Types of SQL Injection Attack
**Union-based SQL Injection**  
Union-based SQL Injection represents the most popular type of SQL injection. It uses the UNION

**Error-Based SQL Injection** – this method can only be run against MS-SQL Servers. 
In this attack, the malicious user causes an application to show an error. 
Usually, you ask the database a question and it returns an error message which also contains the data they asked for.

**[[Blind SQL Injection]]** – in this attack, no error messages are received from the database; 
We extract the data by submitting queries to the database. 
Blind SQL injections can be divided into 
        boolean-based SQL Injection and 
        time-based SQL Injection. _Learn more in our guide to_ [_Blind SQL injection_](https://brightsec.com/blog/blind-sql-injection/)_._


[[In-Band SQL]]

## Methods used to inject malicious data
**SQL injection based on user input** – 
Web apps accept inputs through forms, which pass that user’s input to the database for processing. 
If the web app accepts these inputs without sanitizing them, an attacker can inject malicious SQL statements.

**SQL injection based on cookies** – 
another approach to SQL injection is modifying cookies to “poison” database queries. 
Web applications often load cookies and use their data as part of database operations. 
A malicious user, or malware deployed on a user’s device, could modify cookies, to inject SQL in an unexpected way.

**Second-order SQL injection** – these are possibly the most complex SQL injection attacks, 
because they may lie dormant for a long period of time. A second-order SQL injection attack delivers poisoned data, which might be considered harmless in one context, but is malicious in another context. 
Even if developers sanitize all application inputs, they could still be vulnerable to this type of attack.






[[Week 7 - SQL]]











## References
https://brightsec.com/blog/sql-injection-attack/#real-life-examples