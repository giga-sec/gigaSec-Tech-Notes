[[Difference between User Options  and Project Options in Burp Suite]]

# Project Options Tab
Created:  [[2022-07-08]]
Tags: #fleeting 

---
Some options here overwrites the defaults in [[User Options and their sub tabs in Burp Suite explained]]


-   **Connections** options can be used to override *User Options*. There _are_ a ==Few differences between this sub-tab and that of the User options==, 
    - "Hostname Resolution" 
        ->(allows you to map domains to IPs directly within Burp Suite as can 
    - "Out-of-Scope Requests" 
        -> determine whether Burp will send requests to anything you aren't explicitly targeting 
-  **HTTP** defines how Burp handles various aspects of the HTTP protocol: for example, whether it follows redirects or how to handle unusual response codes.
-   **TLS** allows override application-wide TLS options, as well as showing us a list of public server certificates for sites that we have visited.
-   **Sessions** provides options for handling sessions. 
    -> Allows us to define how Burp obtains, saves, and uses session cookies that it receives from target sites. 
    -> Allows us to define macros which we can use to automate things such as logging into web applications (giving us an instant authenticated session, assuming we have valid credentials).
-  **Misc** Options for logging and the embedded browser












### References
1. 