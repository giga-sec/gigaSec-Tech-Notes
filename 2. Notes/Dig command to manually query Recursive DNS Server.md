[[MOC Networking]]

# Dig
Created:  [[2022-07-02]]
Tags: #literature 

---
`dig <domain> @<dns-server-ip>`

**Manually query [[Recursive DNS Server]]** of our choice 
for information about domains. 
Incredibly helpful when troubleshooting networks.



### Useful info Dig gives
[[TTL (Time-to-live) in Networking|TTL (Time To Live)]] of the queried DNS record. 
When your computer queries a domain name, it stores the results in its local cache and gives a TTL to it. 


### Where can TTL be found in Dig
**==2nd column of answer section==**
==**is measured in _seconds==_** (in the context of DNS caching) 
![[TTL.png]]




### References
1. 