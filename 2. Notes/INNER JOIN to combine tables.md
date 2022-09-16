[[JOIN clause to combine tables]]

# INNER JOIN to combine tables
Created:  [[2022-07-30]]
Tags: #fleeting 

---
Select query with INNER JOIN on multiple tables
```SQL
SELECT column, another_table_column, …
FROM mytable
INNER JOIN another_table 
    ON mytable.column = another_table.another_table_column;
```
With this, the tables are finally joined together. 

Explanation of SQL query above
`INNER JOIN `
-> matches rows from the first table and the second table...
-> ...which have the same key (as defined by the ON constraint) 
to create a result row with the combined columns from both tables. 


The overall idea of `JOIN` 
is to create two separate tables and merge them together temporarily to do something with the data


Did you know?
You might see queries where 
-> INNER JOIN is written simply as a JOIN. 
^ These two are equivalent. `INNER JOIN` is just use for readability especially to beginners












## References
1. 