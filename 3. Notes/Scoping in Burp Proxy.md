[[What is Burp Proxy]]

# Scoping in Burp Proxy
Created:  [[2022-07-08]]
Tags: #fleeting 

---
Problem:
Allowing Burp to capture _everything_ can quickly become a massive pain.
- Can get extremely tedious having Burp capturing all of our traffic. When it logs everything (including traffic to sites we aren't targeting), it muddies up logs we may later wish to send to clients.

The solution is scoping
Alows us to define what gets proxied and logged. 
We can restrict Burp Suite to _only_ target the web application(s) that we want to test. 
To do this is 
"Target" tab, 
right-clicking our target from our list on the left, 
then choosing "Add To Scope". 
Burp will then ask us whether we want to stop logging anything which isn't in scope -- most of the time we want to choose "yes" here.















### References
1. 