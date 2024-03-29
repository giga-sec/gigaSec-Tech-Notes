[[How communication happens between webserver and client-user]]

# Request sent by client to webserver
Created:  [[2022-06-28]]
Tags: #fleeting 

---
[[Ways we(client) can send request to webserver - Get-Post-Put-Delete|Requests]] is the browser sending data to the [[web server]].  

### Example of a request:
```http
GET / HTTP/1.1
Host: tryhackme.com
User-Agent: Mozilla/5.0 Firefox/87.0
Referer: https://tryhackme.com/

```
### Explanation of the REQUEST body above
Line 1. This request is sending the Get Method, then telling the [[web server]] we are using HTTP Protocol version 1.1

Host. We tell the [[web server]] we want the website tryhackme.com

User-Agent. We are using Firefox version 87 browser

Referer. It's the referer, that's it. 

Blank Line. Requests always leave a blank line in the end, kinda like a period in english where it signifies the end of the sentence. Here it signifies to the web server that the request has finished. 

### The web-server will then send a response to the client.  
[[example of RESPONSE from WEBSERVER]]






## Different ways we can make request to a web server
[[Ways we(client) can send request to webserver - Get-Post-Put-Delete]]



## More details about headers used in Request 
[[HEADERS used when CLIENT reQUESTS to web servers]]














### References
1. 