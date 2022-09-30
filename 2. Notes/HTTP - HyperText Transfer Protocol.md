[[Lists of Protocols]]

# HTTP in Detail, HyperText Transfer Protocol
Created:  [[2022-04-17]]
Tags: #literature 

---
[[URL or Uniform Resource Locator]]

[[HTTP Response Status Codes]]

[[How communication happens between webserver and client-user]]
Usually only clients make HTTP requests, and only to servers. Servers respond to a client's HTTP request. A server can also populate data into a client cache, in advance of it being requested, through a mechanism called a server push.
When requesting a file via HTTP, clients must provide the file's URL.
The [[web server]] must answer every HTTP request, at least with an error message.

---
[[HTTPS - A secure version of HTTP]]


HTTP specifies how to transfer hypertext (linked web documents) between two computers.


What is an HTTP  
- It's a protocol, [[What is protocol in networking]]
- rules about how web browsers and web servers should talk to each other. 
- It uses [[TCP-IP Model]] packets as a way to talk to each other

Features of HTTP
- **stateless (doesn't keep track of previous requests)** 
    therefore can't remember who you are 
    thus [[Why are cookies used in HTTP|cookies]] are used to remember you .
    Neither the server nor the client remember previous communications. For example, relying on HTTP alone, a server can't remember a password you typed or remember your progress on an incomplete transaction. You need an application server for tasks like that.


[[Ways we(client) can send request to webserver - Get-Post-Put-Delete]]


Two commands supported by HTTP include **GET** and **POST**. 
Both of these are **requests** we can make to a server, 
[[Ways we(client) can send request to webserver - Get-Post-Put-Delete]]
[[example of RESPONSE from WEBSERVER]]


### [[How communication happens between webserver and client-user]]
To access a website, 
You send a [[example of HTTP reQUEST by CLIENT|request]] to the webserver. 
Webserver will give a [[example of RESPONSE from WEBSERVER|response]] to you 
If webserver's response `OK`, 
-> files required to display website will be sent to your computer. 


[[Cookies 101]]
[[Why are cookies used in HTTP]]


## Useful articles to read
https://robertheaton.com/2014/03/27/how-does-https-actually-work/







