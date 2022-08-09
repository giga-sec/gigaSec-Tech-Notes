[[MOC Networking]]

# HTTP in Detail, HyperText Transfer Protocol
Created:  [[2022-04-17]]
Tags: #literature 

---
[[URL or Uniform Resource Locator]]

[[HTTP Status Codes]]

[[How communication happens between webserver and client-user]]

---
[[HTTPS in detail]]


What is an HTTP  
- It's a protocol, [[What is protocol in networking]]
- rules about how web browsers and web servers should talk to each other. 
- It uses TCP/IP packets as a way to talk to each other
[[Ways we can send request to webserver - Get-Post-Put-Delete]]

Features of HTTP
- **stateless (doesn't keep track of previous requests)** 
    therefore can't remember who you are 
    thus [[Why are cookies used in HTTP|cookies]] are used to remember you .
Two commands supported by HTTP include **GET** and **POST**. 
Both of these are **requests** we can make to a server, 
[[Ways we can send request to webserver - Get-Post-Put-Delete]]
[[example of RESPONSE from WEBSERVER]]


### [[How communication happens between webserver and client-user]]
To access a website, 
You send a [[example of HTTP reQUEST by CLIENT|request]] to the webserver. 
Webserver will give a [[example of RESPONSE from WEBSERVER|response]] to you 
If webserver's response `OK`, 
-> files required to display website will be sent to your computer. 


[[Cookies 101]]
[[Why are cookies used in HTTP]]


## Useful articles to read
https://robertheaton.com/2014/03/27/how-does-https-actually-work/







