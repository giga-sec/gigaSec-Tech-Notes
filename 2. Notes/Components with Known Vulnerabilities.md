[[OWASP (Open Web Application Security Project)]]


# Components with Known Vulnerabilities
Created:  [[2022-07-13]]
Tags: #fleeting 

---
## Severity 9

Some own outdated version of apps
- already have their own well documented bugs and exploits

For instance, 
Company hasn't updated wordpress for years
-> You use wpscan to find its version `4.6`
-> `Wordpress 4.6` is vulnerable to RCE Exploit
-> There's already a public downloadable exploit in here https://www.exploit-db.com/exploits/41962 


Meaning, version number and software name aren't explicitly public. 
Note: https://www.exploit-db.com is incredibly useful, and for all you beginners you're gonna be using this a lot so it's best to get comfortable with it. 


Most public scripts only tells you what arguments you need to provide
Exploit devs rarely make you read hundreds of lines of codes just to figure out how to read the script



### TryHackMe Lab 9
- PHP with MYSQL (Procedure Functions)
- Bootstrap

Check for recent unauthenticated bookstore app rce's.
`2017`, was the site created in this year?

- [x] Let's first download wpscan to find the version of services used
- [x] Let's first determine what wpscan can do

Wpscan: The website is up but doesn't seem to be running wordpress


Question
How many characters are in /etc/passwd (use wc -c /etc/passwd to get the answer)





