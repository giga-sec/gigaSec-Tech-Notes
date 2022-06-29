[[HTTP in Detail]]

# HTTP Status Codes
Created:  [[2022-06-10]]
Tags: #permanent 

---
Abstract:
For instance 2## means 200-299

2## = Request Succesful
3## = Redirect clients request to another location
4## = Error Request
5## = Server Side Errors 

---
### 2##    Request Successful
200 - **Ok**, Request Completed Successfully
201 - **Created**, A new data has been created (new user or new blog)


### 3##   Redirect clients request to another location
301 - **Permanent Redirect**, page has moved to somewhere else and go there 
302 - **Temporary Redirect**, the redirected page may change in the future


### 4##   Error Request
400 - ==**Bad Reques**t== -> when web server complains that a required parameter wasn't sent by the client.

401 - ==**Not Authorized**== -> can't view webpage until you've met certain requirements.
Example: 
- If you try to edit your profile without logging in first
- Can't view the webpage without logging in

403 - ==**Forbidden**== -> absolutely not allowed to view the webpage

404 - ==**Page not Found**== -> the webpage doesn't exist

405 - ==**Method not Allowed**== -> for instance you sent a GET request when the webpage only accept PUT request


### 5##   Server Side Errors
500 - **Internal Service Error**, The web server doesn't know how to handle your request

503 - **Service Unavailable**, Down for maintenance or overloaded
Example: Web server cannot access its database and the application crashes?















### References
1. 