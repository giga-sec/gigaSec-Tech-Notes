[[Week 7 - SQL]]

# Insertion of new Data
Created:  [[2022-12-22]]

---
Table in a database is a two-dimensional set of rows and columns, 
columns = properties = columns 
rows = instances of entity in  table 

You can insert multiple rows at a time by just listing them sequentially.
Insert statement with values for all columns
```SQL
INSERT INTO mytable
VALUES (value_or_expr, another_value_or_expr, …),
       (value_or_expr_2, another_value_or_expr_2, …),
       …;
```

```SQL
INSERT INTO Customers (CustomerName, City, Country)
VALUES ('Cardinal', 'Stavanger', 'Norway');
```


## Insertion of Specific Columns
```SQL
INSERT INTO mytable
(column, another_column, …)
VALUES (value_or_expr, another_value_or_expr, …),
       (value_or_expr_2, another_value_or_expr_2, …),
```














