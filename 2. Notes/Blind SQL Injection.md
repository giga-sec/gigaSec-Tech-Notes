[[SQL - SQL Injection]]

# Blind SQL Injection
Created:  [[2022-08-22]]
Tags: #fleeting 

---
Authentication Bypass
Blind SQLi is when we get little to no feedback to confirm whether our injected queries were success or not
^ because the error messages have been disabled, but the injection still works regardless.

Authentication Bypass to Login Forms
Login forms that are connected to a database of users are 
    often developed in such a way that web app isn't interested in the content of the username and password but more whether the two make a matching pair in the users table. 
In basic terms, the web app asks the database `do you have a user with the username bob and the password bob123?"`, and the database replies with either `yes` or `no` `(true/false)` and, depending on that answer, dictates whether the web application lets you proceed or not.

For instance
if the sql query for password form is 
```SQL
select * from users where username='' and password='' LIMIT 1;
```
Then we can input the password with `' OR 1=1;--`
So, the sql query transform to like this below
```SQL
select * from users where username='' and password=''OR 1=1;--' LIMIT 1;
```

Why this works?
Because the sql query has an Or command in which `1=1` is true, it always return true and therefore satisfies the logic of the query.













## References
1. 