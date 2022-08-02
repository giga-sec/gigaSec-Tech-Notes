[[Week 7 - SQL]]

# Aggregate Expressions (Functions)
Created:  [[2022-08-02]]
Tags: #fleeting 

---
Allows you to summarize information about a group of rows of data. 

Select query with aggregate functions over all rows
```SQL
SELECT AGG_FUNC(column_or_expression) AS aggregate_description, …
```
[[AS keyword to give an alias]]

`COUNT(*)` 
Counts the number of rows in the group if no column name is specified. 

`COUNT(column)`
Count the number of rows in the group with values in the specified column.

`MIN(column)` 	
Finds the mininum num value 
-> in the specified column for all rows in the group.

`MAX(column)` 	
Finds the maximum num value 
-> in the specified column for all rows in the group.

`AVG(column)` 	
Finds the average num value 
-> in the specified column for all rows in the group.

`SUM(column)` 	
Finds the sum of all num values 
-> in the specified column for the rows in the group.


Without a specified grouping, 
    -> each aggregate function is going to run on the whole set of result rows and return a single value.

`GROUP BY` clause in aggregate expressions 
Only use this when there is an aggregate functions/expressions in query. [[query in sql explained]]
You can use `GROUP BY` to select a specific data when using functions.
Select query with aggregate functions over groups
```SQL
SELECT AGG_FUNC(column_or_expression) AS aggregate_description, …
FROM mytable
WHERE constraint_expression
GROUP BY column;
```


`HAVING` clause allows us to group the results of `GROUP BY` clause
It's just an additional way to filter an already filtered data
```SQL
WHERE condition  <- This is not entirely needed to have "having"
GROUP BY column
HAVING group_condition;
```












## References
1. 