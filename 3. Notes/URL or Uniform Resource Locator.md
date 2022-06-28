[[HTTP in Detail]]

# URL or Uniform Resource Locator
Created:  [[2022-06-28]]
Tags: #fleeting 

---
Abstract:
- Parts of a URL (Doesn't need to use all of its parts for url to work)
- Making request to a webserver
- The response of a webserver to the  

---
URL (Uniform Resource Locator)
It's an instruction on how to access a resource on the internet.  

Myquestion: ?? What does "resource" exactly mean here ?? 

These are all the features of a url. Note that it doesn't need to use all of them for the url to work
[[Scheme]] --- [[Host-Domain]] --- [[Path]] --- [[Fragment]]

![[newurl.png]]
[[User]] --- [[Port]] --- [[Query String]]



To access a website, you give a [[request]] to the webserver and the webserver will give a reply to you, if the reply is Ok, the files that's required to display the website will be sent to your computer. 


![[line.png|350]]


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









### References
1. 