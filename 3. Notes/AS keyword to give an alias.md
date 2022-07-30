[[Week 7 - SQL]]

# AS keyword to give an alias
Created:  [[2022-07-30]]
Tags: #fleeting 

---
Good Stuff: Expressions save time and extra post-processing of result data, 

Problem: Expressions can make query harder to read, 
Solution: [[AS keyword to give an alias]]

---
IF -> expressions are used in SELECT part of the query, 
THEN -> must have a descriptive alias using the **`AS` keyword**.
**Select query with expression aliases**
```SQL
SELECT col_expression AS descriptive_alias, …
FROM mytable;
```

In addition to expressions, 
Stuffs that can have aliases
-  columns 
-  tables 
Example query with both column and table name aliases
```SQL
SELECT column AS better_column_name, …
FROM a_long_widgets_table_name AS mywidgets
```












## References
1. 