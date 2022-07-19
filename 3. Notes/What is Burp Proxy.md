[[Burp Suite Basics]]

# What is Burp Proxy
Created:  [[2022-07-08]]
Tags: #fleeting 

---
Allows us to capture requests and responses between ourselves and target.
Can then be manipulated/sent to other tools before being allowed to continue their destination.

For example, 
Make request to `https://tryhackme.com` 
through the Burp Proxy, 
- **==request will be captured and won't be allowed to continue to the TryHackMe servers until we explicitly allow it through==**. 
- can do the same with response from the server, but isn't active by default. 

We can take complete control over our web traffic -- 
an invaluable ability when it comes to testing web applications.


### [[Working with Proxy Tab]]


Problem: Allowing Burp to capture _everything_ can quickly become a massive pain.
Solution: [[Scoping in Burp Proxy]]

### [[Working with Target Tab]]


### Real-world web app pentest
In a real-world web app pentest, we would test this for a variety of things: 
- [[Cross-Site Scripting (or XSS)]]








### References
1. 