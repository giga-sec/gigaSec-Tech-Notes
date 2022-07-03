[[MOC Networking]]

# PORTS 101
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Abstract:


---
## What does ports do?
- These are used to point traffic to the right application on a server




## Ports are necessary for 
- making multiple network requests
- or having multiple services available. 


-> Server be able to run more than one service 
(like using HTTP and HTTPS versions of the site), 
Then you need some way to direct the traffic to the appropriate service. Once again, ports are the solution to this. 

-> Loading several webpages at once in a web browser, 
The program must have a way of determining which tab is loading which web page. It's done by making connections to remote webservers using different ports on your local machine.  
![[3XAfRpI.png|500]]
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




Say we have been given an IP to perform a security audit on. Before we do anything else, we need to get an idea of services running on the targets. (e.g running a webserver, or a Windows Active Directory Domain Controller). Which will be answered at the end of reading this note

The first stage in establishing this “map” of the landscape is something called port scanning. When a computer runs a network service, it opens a networking construct called a “port” to receive the connection.


It is important to note; however, that especially in a CTF setting, it is not unheard of for even these standard ports to be altered, making it even more imperative that we perform appropriate enumeration on the target.

If we do not know which of these ports a server has open, then we do not have a hope of successfully attacking the target; thus, it is crucial that we begin any attack with a port scan







### References
1. 