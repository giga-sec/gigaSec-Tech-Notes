[[MOC Networking]]

# HTTP in Detail, HyperText Transfer Protocol
Created:  [[2022-04-17]]
Tags: #fleeting 

---
[[URL or Uniform Resource Locator]]

[[HTTP Status Codes]]

[[How communication happens between webserver and client-user]]

---
HTTP is the **set of rules** used for **==communicating with [[Web server and different ways we make request to it|web servers]] for the sending of webpage data==, whether that is HTML, Images, Videos, etc**. Also HTTP is stateless (doesn't keep track of previous requests) therefore can't remember who you are, thus cookies are used to remember who you are like personal settings for website or whether you've visited the website before.  Cookies are also used for website authentication, I think so that users no longer need to type their username and password out. 



### [[How communication happens between webserver and client-user]]
To access a website, you send a [[HTTPS example of REQUEST by CLIENT to webserver|request]] to the webserver. It will give a [[HTTPS example of RESPONSE from WEBSERVER to client-user|response]] to you and if the response is Ok, the files that's required to display the website will be sent to your computer. 


Cookies are saved when you receive a `set-cookie header` from a web-server. From then on, any request sent to that web-server, you'll send the cookie data back to web-server. 

Example of the usage of cookies to communciate between client and web-server.
![[cookie_flow.png|500]]











### References
1. https://tryhackme.com/room/httpindetail