[[URL or Uniform Resource Locator]]

# request
Created:  [[2022-06-28]]
Tags: #fleeting 

---
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













### References
1. 