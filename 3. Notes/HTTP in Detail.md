[[+Home]]

# HTTP in Detail, HyperText Transfer Protocol
Created:  [[2022-04-17]]
Tags: #fleeting 

---
[[HTTP Status Codes]]

[[Web server and different ways we make request to it]]


---
HTTP is the **set of rules** used for **==communicating with [[Web server and different ways we make request to it|web servers]] for the sending of webpage data==, whether that is HTML, Images, Videos, etc**.


[[URL or Uniform Resource Locator]]
**We make a request**
You'll want to send some data to the web server and this data are called "headers".  

Entirely possible for a link to be just `GET / HTTP/1.1`
![[line.png|350]]
Example of a request:
```http
GET / HTTP/1.1
Host: tryhackme.com
User-Agent: Mozilla/5.0 Firefox/87.0
Referer: https://tryhackme.com/

```

These requests, you are basically sending data to the web server.  

Line 1. This request is sending the Get Method, then telling the web server we are using HTTP Protocol version 1.1

Host. We tell the web server we want the website tryhackme.com

User-Agent. We are using Firefox version 87 browser

Referer. It's the referer, that's it. 

Blank Line. Requests always leave a blank line in the end, kinda like a period in english where it signifies the end of the sentence. Here it signifies to the web server that the request has finished. 


Example of a response from the webserver:
```http
HTTP/1.1 200 OK
Server: nginx/1.15.8
Date: Fri, 09 Apr 2021 13:34:03 GMT
Content-Type: text/html
Content-Length: 98

<html>
<head>
    <title>TryHackMe</title>
</head>
<body>
    Welcome To TryHackMe.com
</body>
</html>
```

Line 1: HTTP 1.1 is the version of the HTTP protocol the server is using and then followed by the HTTP Status Code, "200 Ok" which tells us the request has completed successfully.

Server: The web server software and version number

Date: Date, time and timezone of the web server

Content-Type: tells client what file is webserver sending, like HTML, images, videos, XML

Content-Length: Tells client how long the response is, we can also confirm that no data is missing.

Blank Line: HTTP response contains a blank line to confirm the end of the HTTP response.

Line 7-14: The info itself is now displayed




## Headers
Common headers sent by client to the web servers
Host: tells web servers which website is being requested
User-Agent: Browser Software and its version
Content-Length: Shows up when client sents data (i.e user forms)
Accept-Encoding: Tells what compression method is used
Set-Cookie: Allows server to remember client's information


Common headers that are responses by the web servers
Set-Cookie: 
Cache-Control: how to store cache before it requests again
Content-Length: It helps us verify if there's no missing data. Basically, it tells us how long the response is.

Content-Type:
This tells us what information is being sent, (pdf, html, txt and etc)













### References
1. https://tryhackme.com/room/httpindetail