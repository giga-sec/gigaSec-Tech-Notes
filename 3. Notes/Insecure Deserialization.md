[[OWASP (Open Web Application Security Project)]]
# Insecure Deserialization
Created:  [[2022-07-12]]
Tags: #fleeting 

---
## Severity 8
Occurs when untrusted data is used to abuse the logic of an application


Replacing data processed by an application with malicious code
This malicious code can allow
- DOS (Denial of Service)
- [[RCE (Remote Code Execution)]]


OWASP rank this as 8 out of 10 because
- Low Exploitability
    -> No reliable tool/framework for it
    -> Attackers need to have good understanding of inner-workings of ToE


What services are vulnerable to this?
Ultimately, application that stores or fetches data
-> Generally, no validations/integrity checks of stored/fetched data
Like
- E-Commerce Sites
- Forums
- API's
- Application Runtimes (Tomcat, Jenkins, Jboss, etc)


## First understand what serialization and deserialization is
[[Serialization and Deserialization]]

Insecure Deserialization happens 
When data gets executed because there's no filtering/input validation.










