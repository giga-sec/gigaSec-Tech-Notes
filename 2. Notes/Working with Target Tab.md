[[What is Burp Proxy]]

# Working with Target Tab
Created:  [[2022-07-08]]
Tags: #fleeting 

---
There are three sub-tabs under _Target_:

-   **Site map** map out apps we're targeting in tree structure. 
    Every page that we visit will show up here, allowing us to automatically generate a site map for the target simply by browsing around the web app. 
    Burp Pro would also allow us to spider the targets automatically (i.e. look through every page for links and use them to map out as much of the site as-is publicly accessible using the links between pages); 
    Burp Community, we can still use this to accumulate data whilst we perform our initial enumeration steps.  
    The Site map can be especially useful if we want to map out an API, as whenever we visit a page, any API endpoints that the page retrieves data from whilst loading will show up here.

-  **Scope:** Allows us to control Burp's target scope for the project. [[Scoping in Burp Proxy]]


-   **Issue Definitions:** Whilst we don't have access to the Burp Suite vulnerability scanner in Burp Community, 
    we do still have access to a list of all the vulnerabilities it looks for. 
    The Issue Definitions section gives us a huge list of web vulnerabilities (complete with descriptions and references) which we can draw from should we need citations for a report or help describing a vulnerability.












### References
1. 