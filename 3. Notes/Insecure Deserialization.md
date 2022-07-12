

# Insecure Deserialization
Created:  [[2022-07-12]]
Tags: #fleeting 

---
## Severity 8
Occurs when untrusted data is used to abuse the logic of an application


Replacing data processed by an application with malicious code
This malicious code can allow
- DOS (Denial of Service)
- RCE (Remote Code Execution)


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



OOP (Object Oriented Programming) are made up of an object
Object must have these two things
- State
- Behavior

A lamp would be a good object
State -> Lamps have different types of bulbs
Behavior -> They can be turned off/on

Rather than having a list of different types of bulb
You can just use OOP to simply 
-> Change the type of bulb
-> Change the behavior of the bulb


Serialization and Deserialization

Serialization
Converts objects used in prog languange into compatible formatting for transmitting data between systems or networks. 

Deserializaztion
Converts serialised info to their complex form -- an object that application will understand. 








### References
1. 