[[MOC CS50]]

# Week 7 - SQL
Created:  [[2022-07-26]]
Tags: #fleeting 

---
[[CSV - Explained]]
[[CSV in Python]]

[[Lab7 - Songs]]

[[Manipulating Numbers in SQL]]

[[What is a database]]

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



Many varying SQL Databases...
- SQLite, MySQL, Postgres
- Oracle and Microsoft SQL server
...but all support the common SQL languange standard
...Differs in extra features and supported storage type


Lingo of SQL
Fields -> This is the column of table


## Selection of data

**Problem:** If you had a table with a hundred million rows of data, 
...reading through all rows to find the specific column you want to
...would be inefficient and perhaps even impossible.
**Solution:** We need to filter results -> 
[[WHERE clause to filter data]]
[[LIMIT and OFFSET to reduce data output]]
[[DISTINCT keyword to remove duplicates]]



## [[SELECT statements retrieves data from SQL database]]


## [[WHERE clause to filter data]]


## [[LIMIT and OFFSET to reduce data output]]


## [[DISTINCT keyword to remove duplicates]]


## [[ORDER BY clause to sort data in ascending or descending order]]


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

### [[Aggregate Expressions (Functions)]]


## [[SQL Query and the Order of its syntax and execution]]


## [[Insertion of new Data in SQL]]

## [[Updating Rows in SQL]]

## Deletion of Rows
**be extra careful when constructing update statements.**
sql doesn't support undo so any mistakes are permanent


**Tip when updating rows**
-> Test the constraint (where clause) in SELECT query 
-> Lastly, use the result of `select query` as a guide on making `update query statement`

Delete specific rows 
```SQL
DELETE FROM mytable
WHERE condition;
```

Delete ALL ROWS
```SQL
DELETE FROM mytable
```


## Finding Duplicates in SQL
```SQL
SELECT OrderID, COUNT(OrderID)
FROM Orders
GROUP BY OrderID
HAVING COUNT(OrderID) > 1
```
https://learnsql.com/blog/how-to-find-duplicate-values-in-sql/



## Subqueries
Inner queries or nested queries
```SQL
SELECT sub.*
  FROM (
        SELECT * FROM tutorial.sf_crime_incidents_2014_01
        WHERE day_of_week = 'Friday'
       ) sub  
 WHERE sub.resolution = 'NONE'
```
Subqueries have names, which are added after parentheses 

First, the database runs the Subquery, the part insided of parenthesis.
```SQL
(
    SELECT * FROM tutorial.sf_crime_incidents_2014_01
    WHERE day_of_week = 'Friday'
) sub
```

The result would then be like this below
```SQL
SELECT sub.*
  FROM (
       <<results from inner query go here>>
       ) sub
 WHERE sub.resolution = 'NONE'
```


SQL Formal Style
https://www.sqlstyle.guide/

