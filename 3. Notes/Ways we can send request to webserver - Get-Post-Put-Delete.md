[[How communication happens between webserver and client-user]]

# Web server and different ways we make request to it
Created:  [[2022-06-10]]
Tags: #permanent 

---
### Downloading Info
GET Request - Getting information from web server
Requests can be seen on URL

`https://www.google.com/search?q=cats`
The `/search?q=cats` is what will be in GET request
```HTTP
GET /search?q=cats HTTP/1.1
Host: www.google.com
```


### Data Manipulation
POST Request - Submitting data to create new Info to web server
Requests are hidden from url

PUT Request - Submitting data to UPDATE an info

DELETE Request - Deleting data to a web sever


[[example of HTTP reQUEST by CLIENT]]














### References
1. 