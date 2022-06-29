[[URL or Uniform Resource Locator]]

# Communication between webserver and the client-user
Created:  [[2022-06-29]]
Tags: #fleeting 

---
Abstract:
- Example of REQUEST sent by client to webserver
- Example of RESPONSE by webserver to client

---
To access a website, you give a [[request]] to the webserver and the webserver will give a [[response]] to you, if the reply is Ok, the files that's required to display the website will be sent to your computer. 


## Example of a request: 
sent by client to webserver:

```http
GET / HTTP/1.1
Host: tryhackme.com
User-Agent: Mozilla/5.0 Firefox/87.0
Referer: https://tryhackme.com/

```

Requests is you basically sending data to the web server.  

### Explanation of the request code above
Line 1. This request is sending the Get Method, then telling the web server we are using HTTP Protocol version 1.1

Host. We tell the web server we want the website tryhackme.com

User-Agent. We are using Firefox version 87 browser

Referer. It's the referer, that's it. 

Blank Line. Requests always leave a blank line in the end, kinda like a period in english where it signifies the end of the sentence. Here it signifies to the web server that the request has finished. 





## Example of a response from the webserver:
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
### Explanation of the response code above
Line 1: HTTP 1.1 is the version of the HTTP protocol the server is using and then followed by the HTTP Status Code, "200 Ok" which tells us the request has completed successfully.

Server: The web server software and version number

Date: Date, time and timezone of the web server

Content-Type: tells client what file is webserver sending, like HTML, images, videos, XML

Content-Length: Tells client how long the response is, we can also confirm that no data is missing.

Blank Line: HTTP response contains a blank line to confirm the end of the HTTP response.

Line 7-14: The info itself is now displayed






### References
1. 