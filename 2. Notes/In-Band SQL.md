[[SQL - SQL Injection]]

# In-Band SQL
Created:  [[2022-08-22]]
Tags: #fleeting 

---
```SQL
0 UNION 
SELECT 1,2,group_concat(table_name) 
FROM information_schema.tables 
WHERE table_schema = 'sqli_one
```

There are a couple of new things to learn in this query. 
Firstly, the method **group_concat()** gets the specified column (in our case, `table_name`) from multiple returned rows and puts it into one string separated by commas. 
The next thing is the **information_schema** database; every user of the database has access to this, and it contains information about all the databases and tables the user has access to. In this particular query, we're interested in listing all the tables in the **sqli_one** database, which is article and staff_users.












## References
1. 