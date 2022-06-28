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


URL (Uniform Resource Locator)
It's an instruction on how to access a resource on the internet.  These are all the features of a url. Note that it doesn't need to use all of them for the url to work
![[newurl.png]]
Myquestion: ?? What are "resource" in here ?? 

Scheme: Basically the http, https, ftp. It instructs on what protocol to use for accessing the resource.

User: You can put the username, password into the url to login.
Mythoughts: Wtf, why would these be a feature?  Anyone with the link can see your login credentials. 


Host: The [[Requesting a domain name|domain name]] or sometimes an ip address of the server you wish to access.  


Port: Port that you are going to connect to, 
Any port can be used between 1-65535. Tho usually `80` for HTTP and `443` for HTTPS


Path: File Name/Location of the resource you are trying to access


Query String: Extra Info that can be sent to requested path. 
For instance `/blog?id=1` would tell the blog path, that you want to receive the `id of 1` in the blog article. 

Fragment: Reference to a location on the actual page requested. 
Oh it's like, this long ass written article https://leananki.com/zettelkasten-method-smart-notes  There's a section there called "Tools for the Zettelkasten" but it's a long ass article so I dont want to scroll. Luckily, dev is lazy like me thus there's a content that directs through each heading. The newly added fragment is `/#Tools_for_the_Zettelkasten_Method`.
Final Result: https://leananki.com/zettelkasten-method-smart-notes/#Tools_for_the_Zettelkasten_Method



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