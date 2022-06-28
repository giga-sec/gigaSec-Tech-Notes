[[+Home]]

# HTTP in Detail, HyperText Transfer Protocol
Created:  [[2022-04-17]]
Tags: #fleeting 

---
[[HTTP Status Codes]]

[[Web server and different ways we make request to it]]


---
HTTP is the **set of rules** used for **==communicating with [[Web server and different ways we make request to it|web servers]] for the sending of webpage data==, whether that is HTML, Images, Videos, etc**.


**We make a request**
You'll want to send some data to the web server and this data are called "headers". 


[[URL or Uniform Resource Locator]]



## Headers
Common headers sent by client to the web servers
Host: tells web servers which website is being requested
User-Agent: Browser Software and its version
Content-Length: Shows up when client sents data (i.e user forms)
Accept-Encoding: Tells what compression method is used
Set-Cookie: Allows server to remember client's information


Common response 
Set-Cookie: 
Cache-Control: how to store cache before it requests again
Content-Length: It helps us verify if there's no missing data. Basically, it tells us how long the response is.

Content-Type Header
This tells us what information is being sent, (pdf, html, txt and etc)













### References
1. https://tryhackme.com/room/httpindetail