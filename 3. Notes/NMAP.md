

# NMAP
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Abstract:
- What is ports
- How is ports used in NMAP

---
[[PORTS 101]]






65535 available ports for every computer. 
Many are registered as standard ports. 
For example, 
a HTTP Webservice can nearly always be found on port 80 of the server. 
A HTTPS Webservice can be found on port 443. 
Windows NETBIOS can be found on port 139  
SMB can be found on port 445. 




Say we have been given an IP to perform a security audit on. Before we do anything else, we need to get an idea of services running on the targets. (e.g running a webserver, or a Windows Active Directory Domain Controller). Which will be answered at the end of reading this note

The first stage in establishing this “map” of the landscape is something called port scanning. When a computer runs a network service, it opens a networking construct called a “port” to receive the connection.


It is important to note; however, that especially in a CTF setting, it is not unheard of for even these standard ports to be altered, making it even more imperative that we perform appropriate enumeration on the target.

If we do not know which of these ports a server has open, then we do not have a hope of successfully attacking the target; thus, it is crucial that we begin any attack with a port scan


### How Nmap works
Nmap will connect to each port of the target in turn. Depending on how the port responds, it can be determined as being open, closed, or filtered (usually by a firewall)
Once we know which ports are open, we can then look at enumerating which services are running on each port.












### References
1. 