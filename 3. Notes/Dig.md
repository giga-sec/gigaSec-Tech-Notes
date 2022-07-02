

# Dig
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Ever wondered how a URL gets converted into an IP address that your computer can understand? 
The answer is a [[TCP-IP Model|TCP/IP Protocol]] called [[DNS in detail|DNS (Domain Name System)]]


Dig allows us to manually query [[Recursive DNS Server]] of our choice for information about domains
`dig <domain> @<dns-server-ip>`


Dig gives the TTL (**T**ime **T**o **L**ive) of the queried DNS record. When your computer queries a domain name, it stores the results in its local cache. The TTL of the record tells your computer when to request the data again, rather than relying on the cached copy. 


The **TTL can be found in the ==second column of the answer section==**. It's important to remember that TTL (in the context of DNS caching) **is measured in _seconds_.**
![[TTL.png]]




### References
1. 