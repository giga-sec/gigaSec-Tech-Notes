[[OWASP (Open Web Application Security Project)]]

# Broken Access Control
Created:  [[2022-07-11]]
Tags: #fleeting 

---
#### Abstract:


---
Basically, attacker w/ no permission access a protected page such as admin controls
Attacker bypass authorization which allows them to view sensitive data as if they had an admin rights 


Scenario 1
Application uses unverified data in a SQL call that's accessing account info.
This is a vulnerable code below
```XML
pstmt.setString(1, request.getParameter("acct"));
ResultSet results = pstmt.executeQuery( );
```
Attacker can simply change `"acct"` parameter in url browser! 
especially if not properly verified
-> Attacker can access to any user account
-> `http://example.com/app/accountInfo?acct=notmyacct`












### References
1. 