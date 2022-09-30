[[Methods - defines the actions required for the web server to perform]]

# HEAD Method - gets metadata info
Created:  [[2022-09-23]]

---
- An alternative for [[GET Method - gets a specific resource]]
- Saves you bandwidth as it targets only a specific resource w/out getting the body 

Example:
1. use a `HEAD` request to find out the last time a resource was updated,  
2. then only use the (more "expensive") `GET` request to download the resource if it has changed. 












