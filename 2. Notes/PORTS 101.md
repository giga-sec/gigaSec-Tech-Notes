[[MOC Networking]]

# PORTS 101
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Abstract:
- What does ports do
- Ports are necessary for making multiple network req/services available
- Network connections are made between two ports
---
## What does ports do?
- These are used to point traffic to the right application on a server



## Ports are necessary for 
- making multiple network requests
- or having multiple services available. 


#### -> Server be able to run more than one service 
(like using HTTP and HTTPS versions of the site), 
Then you need some way to direct the traffic to the appropriate service. Once again, ports are the solution to this. 

#### -> Loading several webpages at once in a web browser, 
Program must have a way determining which tab is loading which web page. 
It's done by making connections to remote webservers using different ports on your local machine.  
![[3XAfRpI.png|450]]
## Network connections are made between TWO ports 
- an open port listening on the server  
- and a randomly selected port on your own computer. 

For instance, 
`tryhackme.com` server's port is 443 
Connecting to your `computer's` open port at 62534






### 65535 available ports for every computer.
#### Many are registered as standard ports.  
For example:
- HTTP Webservice can be found on port 80 of the server. 
- HTTPS Webservice can be found on port 443. 
- Windows NETBIOS can be found on port 139  
- SMB can be found on port 445. 












### References
1. 