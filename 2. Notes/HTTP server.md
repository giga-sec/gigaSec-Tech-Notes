[[HTTP - HyperText Transfer Protocol]]

# HTTP server
Created:  [[2022-09-22]]
Tags: #fleeting 

---
**An HTTP server is software** that understands 
- [[URL or Uniform Resource Locator]] (web addresses) 
- [[HTTP - HyperText Transfer Protocol]] (the protocol your browser uses to view webpages). 


An HTTP server can be accessed through the domain names of the websites it stores, and it delivers the content of these hosted websites to the end user's device.

What happens When a server receives a "dynamic request" from a browser. [[Dynamic Web Server]]

The browser sends an [[HTTP request helps user send instructions to web-server|HTTP Request]] to the server if you do the following:
- click a link on a web page 
- submit a form
- run a search
[[HTTP request helps user send instructions to web-server]]



At the most basic level, 
Whenever a browser needs a file that's hosted on a web server, 
1. Browser requests the file via HTTP. 
2. When request reaches the correct (hardware) web server, it will do the following:
    1. The (software) [[HTTP server]] accepts the request, 
    2. Finds the requested document inside of [[Hardware Web Server]]
    2.1 (If server doesn't find the requested document, it returns a 404 response instead.)
    2.2 Else, sends requested file back to the user's browser, through HTTP. 
