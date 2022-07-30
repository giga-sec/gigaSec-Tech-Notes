[[MOC CS50]]

# Week 7 - SQL
Created:  [[2022-07-26]]
Tags: #fleeting 

---
[[CSV - Explained]]
[[CSV in Python]]

[[Lab7 - Songs]]
[[Manipulating Numbers in SQL]]


SQL is a Relational Database, [[Relational Database explained]]
It's basically much better than Flat-File Database but not that simple compared to it


SQL takes in the principles of CRUD and in a better way as well
`CREATE`, `INSERT`
`READ`, `SELECT`
`UPDATE`
`DELETE`, `DROP`

```sql
sqlite3 <filename>.db
```
If the filename doesn't exist, it will automatically be created

```sql
.mode csv
.import <filename>.csv filename
```
This will transfer any data from `.csv` to the created sql `.db` file

`.schema`
To show the design of your database


```sql
SELECT DISTINCT(UPPER(title)) FROM favorites;
```
Forces every output to be in uppercase and remove redundancy of similar outputs


Data types of SQL
`BLOB`  Binary Large OBject
`INTEGER`
`NUMERIC` 
`REAL`
`TEXT`


`CREATE INDEX name ON table (column, ...);`
`INDEX` in SQL is a data structure that allow us to do better in searching than the default linear search


Learn SQL here
https://sqlbolt.com/



Many varying SQL Databases...
- SQLite, MySQL, Postgres
- Oracle and Microsoft SQL server
...but all support the common SQL languange standard
...Differs in extra features and supported storage type



**Problem:** If you had a table with a hundred million rows of data, 
...reading through all rows to find the specific column you want to
...would be inefficient and perhaps even impossible.
**Solution:** We need to filter results -> 
[[WHERE clause to filter data]]
[[LIMIT and OFFSET to reduce data output]]
[[DISTINCT keyword to remove duplicates]]



## [[SELECT statements]]


## [[WHERE clause to filter data]]


## [[LIMIT and OFFSET to reduce data output]]


## [[DISTINCT keyword to remove duplicates]]


## [[ORDER BY clause to sort data]]


## [[JOIN clause to combine tables]] 





## [[IS NULL to check if VALUE is EMPTY]]
```SQL
SELECT column, another_column, … FROM mytable
WHERE column IS/IS NOT NULL
    AND/OR another_condition
    AND/OR …;
```


## [[AS keyword to give an alias]]
Good Stuff: Expressions save time and extra post-processing of result data, 

Problem: Expressions can make query harder to read, 
Solution: [[AS keyword to give an alias]]


## Expressions
Expressions are what we call to queries with
-> mathematical, string functions, or basic arithmetic  
**Example query with expressions**
```SQL
SELECT particle_speed / 2.0 AS half_particle_speed
FROM physics_data
WHERE ABS(particle_position) * 10.0 > 500;
```

Good Stuff: Expressions save time and extra post-processing of result data, 

Problem: Expressions can make query harder to read, 
Solution: [[AS keyword to give an alias]]

### Aggregate Expressions (Functions)
Allows you to summarize information about a group of rows of data. 

Select query with aggregate functions over all rows
```SQL
SELECT AGG_FUNC(column_or_expression) AS aggregate_description, …
```


`COUNT(*)` 
Counts the number of rows in the group if no column name is specified. 

`COUNT(column)`
Count the number of rows in the group with non-NULL values in the specified column.

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


`GROUP BY` clause in aggregate expressions 
Without a specified grouping, 
    -> each aggregate function is going to run on the whole set of result rows and return a single value.

You can use `GROUP BY` to select a specific data when using functions.
Select query with aggregate functions over groups
```SQL
SELECT AGG_FUNC(column_or_expression) AS aggregate_description, …
FROM mytable
WHERE constraint_expression
GROUP BY column;
```



