[[MOC Networking]]

# DNS (Domain Name System)
Created:  [[2022-06-22]]
Tags: #literature  

---
Abstract:
[[What is an IP Address]]

[[Parts of a DNS]]

[[Requesting a domain name]]

---
**A way for us to communicate with devices on internet
==without remembering complex numbers==.** 

**It's unconvenient to remember `104.26.10.299` 
We use DNS `tryhackme.com` instead**  


**DNS isn't just for websites, 
==Multiple types of DNS record exist**==. 
These are the common one
- A Record - for IPv4 Addresses
- AAAA Record - for IPv6 Addresses
[[More DNS Record Types]]


DNS records all come with a **[[TTL (Time-to-live) in Networking|TTL]] value. ==Time value represented in seconds that should be saved for locally== until you have to look it up again**. Caching saves on having to make a DNS request every time you communicate with a server. 




[[Parts of a DNS]]
TLD, Second Level Domain or Subdomain


[[Requesting a domain name]]
Machines don't understand human readable domain names, so they have to send a special request to a DNS resolver to translate the human languange into a machine readable [[What is an IP Address|IP Address]] for them.













### References
1. 