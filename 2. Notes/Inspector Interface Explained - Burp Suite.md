[[Burp Suite Repeater]]

# Inspector Interface Explained - Burp Suite
Created:  [[2022-07-26]]
Tags: #fleeting 

---
Request sections can nearly always be altered, 
- allowing us to add, edit, and delete items. 


Request Sections such as
 - **Request Atrributes**, 
     we can edit parts of request like 
     -> location, method and protocol; 
     
     Example: 
     Changing the resource we are looking to retrieve, 
     altering the request from GET to another HTTP method, 
     or switching protocol from HTTP/1 to HTTP/2:


-   **Query Parameters**, 
    refers to data being sent to server in URL.
    Allows us to modify the parameters before re-sending

    Example:
    in a GET request to `https://admin.tryhackme.com/?redirect=false`, 
    there is a query parameter called `redirect` with a value of `false`  


-   **Body Parameters**, 
    does same as **Query Parameters**, but for **POST requests**. 
    Allowing us to modify the parameters before re-sending.


-   **Request Cookies** 
    a modifiable list of the cookies which are being sent with each request.


-   **Request Headers** 
    allow us to view, access, and modify any of the headers being sent with our requests. 
    Editing these can be very useful when attempting to see how a webserver will respond to unexpected headers.  


-   **Response Headers** 
    show us the headers that the server sent back in response to our request. 
    These cannot be edited (as we can't control what headers the server returns to us!). 












## References
1. 