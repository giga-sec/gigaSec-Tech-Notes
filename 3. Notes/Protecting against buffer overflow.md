[[Buffer Overflow]]

# Protecting against buffer overflow
Created:  [[2022-07-07]]
Tags: #fleeting 

---
#### Abstract
- Applications used in web dev that are at risk of Buffer Overflow
- How to prevent Buffer Overflow Attack
---
## Buffer overflows in c and c++

Arise when you use unsafe functions that do not check the length of data being written to a buffer. 
If you write C or C++ code, make sure to use the following secure equivalent functions:

Insecure Function     Secure Alternative

`gets()`                          `fgets()`

`strcpy()`                      `strncpy()`

`strcat()`                      `strncat()`

`sprintf()`                    `snprintf()`



It’s pretty rare for web-developers to write low-level code in languages like C or C++, so the biggest risk of buffer overflows for must of us in the applications we use.

## Applications that are at risk for buffer overflow

### Web Servers

Most websites are deployed using a _web server_ to serve static content. (This is distinct from the _application server_ that executes dynamic content.) The three most common web-servers are:

-   Apache HTTP Server
-   Microsoft Internet Information Services (IIS)
-   Nginx

Each of these has been found to be vulnerable to buffer overflows at different times. Web-server vendors are very quick to patch vulnerabilities, so the key to keeping yourself secure is deploying security patches as soon as they become available.


### Operating Systems and Language Runtimes

Buffer overflow attacks have been launched against websites by taking advantage of vulnerabilities in operating systems and language runtimes. The [Heartbleed](http://heartbleed.com/) attack took advantage of a serious vulnerability in the OpenSSL cryptographic software library that Linux-based web-servers use to encrypt SSL/TLS traffic. Similarly, security researchers have discovered vulnerabilities in various functions in the PHP runtime which allow attackers to launch buffer overflow attacks remotely by crafting malicious input.


## How to prevent Buffer Overflow attacks

To avoid being exposed to buffer overflow vulnerabilities in the applications you use, you need to keep them up-to-date with the latest security patches. These are the key things to need to do:

-   **Automate your build and deployment process.** You need to know which versions of each application your are running on each server. This means writing deployment scripts for web-servers and language runtimes, and retaining copies of deployment logs.
    
-   **Keep on top of security bulletins.** Make sure your team is on the lookout for security announcements for the applications you use. Sign up for mailing lists, join forums, and follow software vendors on social media.
    
-   **Deploy security patches as soon as they become available!** Hackers will find ways to take advantage of security vulnerabilities as soon as they are made public, so make sure you are not amongst the target audience.





### References
1. 