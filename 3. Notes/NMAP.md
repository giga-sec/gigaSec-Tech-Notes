

# NMAP
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Abstract:
- What is ports
- How is ports used in NMAP

---
Ports
- These are used to point traffic to the right application on a server


Say we have been given an IP to perform a security audit on. Before we do anything else, we need to get an idea of services running on the targets. (e.g running a webserver, or a Windows Active Directory Domain Controller). Which will be answered at the end of reading this note

The first stage in establishing this “map” of the landscape is something called port scanning. When a computer runs a network service, it opens a networking construct called a “port” to receive the connection.

## Ports are necessary for 
- making multiple network requests
- or having multiple services available. 

-> Loading several webpages at once in a web browser, 
The program must have some way of determining which tab is loading which web page. It's done by making connections to remote webservers using different ports on your local machine. 

For instance, 
`tryhackme.com` server's port is 443 
and is connecting to your `computer's` open port at 62534
![[3XAfRpI.png|500]]

-> Server be able to run more than one service 
(like using HTTP and HTTPS versions of the site), 
Then you need some way to direct the traffic to the appropriate service. Once again, ports are the solution to this. 



Network connections are made between TWO ports 
- an open port listening on the server  
- and a randomly selected port on your own computer. 

For example, 
when you connect to a web page, 
your computer may open port 49534 to connect to the server’s port 443.




Every computer has a total of 65535 available ports; however, many of these are registered as standard ports. 
For example, 
a HTTP Webservice can nearly always be found on port 80 of the server. 
A HTTPS Webservice can be found on port 443. 
Windows NETBIOS can be found on port 139  
SMB can be found on port 445. 

It is important to note; however, that especially in a CTF setting, it is not unheard of for even these standard ports to be altered, making it even more imperative that we perform appropriate enumeration on the target.


If we do not know which of these ports a server has open, then we do not have a hope of successfully attacking the target; thus, it is crucial that we begin any attack with a port scan


### How Nmap works
Nmap will connect to each port of the target in turn. Depending on how the port responds, it can be determined as being open, closed, or filtered (usually by a firewall)
Once we know which ports are open, we can then look at enumerating which services are running on each port.












### References
1. 