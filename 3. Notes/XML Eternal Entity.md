

# XML Eternal Entity
Created:  [[2022-07-09]]
Tags: #fleeting 

---
#### Abstract:


---
Abuses features of XML parsers/data
Allows an attacker to 
- interact w/ backend/external systems that the application itself can access
- cause Denial of Service attack
- or could use XXE to perform Server-Side Request Forgery(SSRF)

### XXE
- enable port scanning and lead to remote code execution

#### 2 types of XXE

-> In band XXE Attack
- Attack receives immediate response to XXE payload

-> Out of Band XXE Attack
 - Also called (blind XXE)
 - no immediate response from web app
 - attacker has to reflect output of XXE payload to some other file or their own server.











### References
1. 