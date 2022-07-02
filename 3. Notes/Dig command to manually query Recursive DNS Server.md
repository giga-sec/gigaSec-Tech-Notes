[[MOC Networking]]

# Dig
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Dig allows us to **manually query [[Recursive DNS Server]]** of our choice for information about domains. Incredibly helpful when troubleshooting networks.
`dig <domain> @<dns-server-ip>`




### Useful info Dig gives
Dig gives [[What is TTL in Networking|TTL (Time To Live)]] of the queried DNS record. When your computer queries a domain name, it stores the results in its local cache and gives a TTL to it. 




### Where can TTL be found in Dig
The **TTL can be found in the ==second column of the answer section==**. 
Also **TTL** (in the context of DNS caching) ==**is measured in _seconds==_.**
![[TTL.png]]




### References
1. 