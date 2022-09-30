[[Methods - defines the actions required for the web server to perform]]

# GET Method - gets a specific resource
Created:  [[2022-09-23]]

---
Create a new resource (e.g. add a new article to a wiki, add a new contact to a database).

URL parameters are inherently "insecure" as they can be changed by users and then resubmitted. 
As a result `GET` requests are not used for requests that update data on the server. [[URL or Uniform Resource Locator]]


In Get request with [[Static Web Server]]
When a user wants to navigate to a page, the browser sends an HTTP GET request specifying the URL of its HTML page. 
![[Pasted image 20220922154000.png]]








