[[Burp Suite Basics]]

# Burp Suite Repeater
Created:  [[2022-07-21]]
Tags: #fleeting 

---
We can take a request captured in the Proxy, 
- edit and resend same request multiple times
- ideal for any kind of manual poking around at an [[endpoint]]




[[Repeater Interface Explained - Burp Suite]]

[[Inspector Interface Explained - Burp Suite]]


## Curl
Alternatively, we could craft requests by hand to build and send requests 
much as we would from the CLI (**C**ommand **L**ine **I**nterface), using a tool such as [cURL](https://curl.se/)
- `curl`, to see the response headers for a request as well
```SHELL
$ curl -I -X GET http://harvard.edu/

HTTP/1.1 301 Moved Permanently
Retry-After: 0
Content-Length: 0
Server: Pantheon
Location: https://www.harvard.edu/
1```

