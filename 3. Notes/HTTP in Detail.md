[[MOC Networking]]

# HTTP in Detail, HyperText Transfer Protocol
Created:  [[2022-04-17]]
Tags: #literature 

---
[[URL or Uniform Resource Locator]]

[[HTTP Status Codes]]

[[How communication happens between webserver and client-user]]

[[Why are cookies used in HTTP]]

---
https://robertheaton.com/2014/03/27/how-does-https-actually-work/

HTTP  
**set of rules** for **==communicating with [[Web server and different ways we make request to it|web servers]] for the sending of webpage data==, whether that is HTML, Images, Videos, etc**. 


HTTP
**stateless (doesn't keep track of previous requests)** 
therefore can't remember who you are 
thus [[Why are cookies used in HTTP|cookies]] are used to remember you .


### [[How communication happens between webserver and client-user]]
To access a website, 
You send a [[example of HTTP reQUEST by CLIENT|request]] to the webserver. 
Webserver will give a [[example of HTTP reSPONSE from WEBSERVER|response]] to you 
If webserver's response `OK`, 
-> files required to display website will be sent to your computer. 


[[Cookies 101]]











### References
1. https://tryhackme.com/room/httpindetail