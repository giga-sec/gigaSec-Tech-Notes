[[How communication happens between webserver and client-user]]

# Response from the webserver to client-user
Created:  [[2022-06-29]]
Tags: #fleeting 

---
Abstract:
- Explanation of the RESPONSE code
- To get a response, client must request first 
- More header responses by web-server
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

Before getting a response above, 
Client must first request to webserver [[example of HTTP reQUEST by CLIENT]]


### Explanation of the RESPONSE code above
Line 1: HTTP 1.1 is the version of the HTTP protocol the server is using
Followed by the [[HTTP Response Status Codes]], "200 Ok" which tells us the request has completed successfully.


Blank Line: HTTP response contains a blank line to confirm the end of the HTTP response.


Line 7-14: The info itself is now displayed


### More header responses by web-server
[[HEADERS used when WEB-SERVER reSPOND to client]]







