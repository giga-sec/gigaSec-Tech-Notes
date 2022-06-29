[[How communication happens between webserver and client-user]]

# Request sent by client to webserver
Created:  [[2022-06-28]]
Tags: #fleeting 

---
Requests is you basically sending data to the web server.  

Example of a request:
```http
GET / HTTP/1.1
Host: tryhackme.com
User-Agent: Mozilla/5.0 Firefox/87.0
Referer: https://tryhackme.com/

```
### Explanation of the REQUEST code above
Line 1. This request is sending the Get Method, then telling the web server we are using HTTP Protocol version 1.1

Host. We tell the web server we want the website tryhackme.com

User-Agent. We are using Firefox version 87 browser

Referer. It's the referer, that's it. 

Blank Line. Requests always leave a blank line in the end, kinda like a period in english where it signifies the end of the sentence. Here it signifies to the web server that the request has finished. 

#### The web-server will then send a response to the client.  
[[HTTPS example of RESPONSE from WEBSERVER to client-user]]



##### More details about headers being used in this Request Code
[[HEADER REQUEST by CLIENT to web servers]]




###### Could probably interest you
[[Web server and different ways we make request to it]]










### References
1. 