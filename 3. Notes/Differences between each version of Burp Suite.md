[[Burp Suite Basics]]

# Different versions of Burp Suite
Created:  [[2022-07-07]]
Tags: #fleeting 

---
-   **Burp Suite Professional** is an unrestricted version of Burp Suite Community. It comes with features such as: 
    -   An automated vulnerability scanner
    -   A fuzzer/bruteforcer that isn't rate limited
    -   Saving projects for future use; report generation
    -   A built-in API to allow integration with other tools
    -   Unrestricted access to add new extensions for greater functionality
    -   Access to the Burp Suite Collaborator (effectively providing a unique request catcher self-hosted or running on a Portswigger owned server)
    
    In short, Burp Pro is an _extremely_ powerful tool -- which is why it comes with a £319/$399 price tag per user for a one-year subscription. For this reason, Burp Pro is usually only used by professionals (with licenses often being provided by employers).
-   **Burp Suite Enterprise** is slightly different. Unlike the community and professional editions, Burp Enterprise is used for continuous scanning. It provides an automated scanner that can periodically scan webapps for vulnerabilities in much the same way as software like [Nessus](https://tryhackme.com/room/rpnessusredux) performs  automated infrastructure scanning. Unlike the other editions of Burp Suite which allow you to perform manual attacks from your own computer, Enterprise sits on a server and constantly scans target web apps for vulnerabilities.

### Burp Suite Community
-   **Proxy:** Burp Proxy allow us to intercept and modify requests/responses when interacting with web applications.
- **Repeater**: allows us to capture, modify, then resend the same request numerous times. This feature can be absolutely invaluable, especially when we need to craft a payload through trial and error (e.g. in an SQLi -- Structured Query Language Injection) or when testing the functionality of an endpoint for flaws.
- **Intruder**: Although harshly [[rate limiting]] in Burp Community, It allows us to **spray an endpoint** with requests. This is often used for bruteforce attacks or to fuzz endpoints. #myquestion What do you mean by **"spray an endpoint with requests"**?
- **Decoder:** Provides a valuable service when transforming data -- either in terms of decoding captured information, or encoding a payload prior to sending it to the target. Whilst there are other services available to do the same job, doing this directly within Burp Suite can be very efficient. 
- **Compaper:** allows us to compare two pieces of data at either word or byte level. Again, this is not something that is unique to Burp Suite, but being able to send (potentially very large) pieces of data directly into a comparison tool with a single keyboard shortcut can speed things up considerably.
- **Sequencer:** when assessing the randomness of tokens such as session cookie values or other supposedly random generated data. If the algorithm is not generating secure random values, then this could open up some devastating avenues for attack.

[[Extensions in Burp Suite]]





### References
1. 