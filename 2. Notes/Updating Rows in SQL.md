[[Week 7 - SQL]]

# Updating Rows
Created:  [[2022-12-22]]

---
**Be extra careful when constructing update statements.**
sql **==doesn't support undo==** so any mistakes are permanent


**Tip when updating rows**
-> Test the constraint (where clause) in SELECT query 
-> Lastly, use the result of `select query` as a guide on making `update query statement`

```SQL
UPDATE mytable
SET column = value_or_expr, 
    other_column = another_value_or_expr, 
    …
WHERE condition;
```

```SQL
UPDATE Customers
SET ContactName = 'Alfred Schmidt', City= 'Frankfurt'
WHERE CustomerID = 1;
```










