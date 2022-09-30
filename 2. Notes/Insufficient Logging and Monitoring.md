[[OWASP (Open Web Application Security Project)]]

# Insufficient Logging and Monitoring
Created:  [[2022-07-19]]
Tags: #fleeting 

---
Every action performed by the user should be logged.
Benefits: 
- the attackers actions can be traced 
    - helps us identify the risk and impact of their attacks

Without Logging:
- risk of further attacks as the attacker's presence will remain undetected

Info stored logs should be
- [[HTTP Response Status Codes]]
- Time Stamps #myquestion  What is timestamps??
- Usernames
- API endpoints/page locations
- IP addresses


Example of Logs
```
200 OK           12.55.22.88 jr22          2019-03-18T09:21:17 /login
200 OK           14.56.23.11 rand99        2019-03-18T10:19:22 /login
200 OK           17.33.10.38 afer11        2019-03-18T11:11:44 /login
200 OK           99.12.44.20 rad4          2019-03-18T11:55:51 /login
200 OK           67.34.22.10 bff1          2019-03-18T13:08:59 /login
200 OK           34.55.11.14 hax0r         2019-03-21T16:08:15 /login
401 Unauthorised 49.99.13.16 admin         2019-03-21T21:08:15 /login
401 Unauthorised 49.99.13.16 administrator 2019-03-21T21:08:20 /login
401 Unauthorised 49.99.13.16 anonymous     2019-03-21T21:08:25 /login
401 Unauthorised 49.99.13.16 root          2019-03-21T21:08:30 /login 
```












## References
1. 