[[How communication happens between webserver and client-user]]

# Response from the webserver to client-user
Created:  [[2022-06-29]]
Tags: #fleeting 

---
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

### Explanation of the RESPONSE code above
Line 1: HTTP 1.1 is the version of the HTTP protocol the server is using
Followed by the [[HTTP Status Codes]], "200 Ok" which tells us the request has completed successfully.

Server: The web server software and version number

Date: Date, time and timezone of the web server

Content-Type: tells client what file is webserver sending, like HTML, images, videos, XML

Content-Length: Tells client how long the response is, we can also confirm that no data is missing.

Blank Line: HTTP response contains a blank line to confirm the end of the HTTP response.

Line 7-14: The info itself is now displayed

#### In order to get the response above, the client must request first. Here is an example
[[HTTPS example of REQUEST by CLIENT to webserver]]


##### More details about header response in web-server
[[HEADER RESPONSE by WEB-SERVER to client]]








### References
1. 