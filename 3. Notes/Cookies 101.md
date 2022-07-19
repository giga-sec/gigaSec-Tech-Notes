

# Cookies 101
Created:  [[2022-07-13]]
Tags: #fleeting 

---
[[Why are cookies used in HTTP]]


[[How are cookies saved on your computer]]




Additional Attributes of a Cookie
Cookie Name -> 
Cookie Value -> 
Secure Only -> Cookie set for [[HTTP in Detail|HTTPS]] Connections
Expiry -> Uses TTL and functions the same as [[TTL (Time-to-live) in Networking]]
Path -> Cookie will only be sent if specified URL is within the request
Example: 
If path is set to `webapp.com/login`, 
then cookies will only be sent if user enters `webapp.com/login`

### Decoding Cookies
In Firefox, press F10
Storage -> Cookies


Sometimes, data you can find in cookies are on 
-> plaintext encoded
-> base64 encoded



### Creating Cookies
Programming languanges are used to create cookies
![[Pasted image 20220713192432.png]]
Python's Flask ^










## References
1. 