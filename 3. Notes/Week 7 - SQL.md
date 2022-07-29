[[MOC CS50]]

# Week 7 - SQL
Created:  [[2022-07-26]]
Tags: #fleeting 

---
[[CSV - Explained]]
[[CSV in Python]]

[[Lab7 - Songs]]


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



```sql
SELECT title FROM favorites LIMIT 10;
```
```sql
SELECT title FROM favorites WHERE title LIKE "%friends"
```
We can also add more phrases to our command:
-   `WHERE`, adding a Boolean expression to filter our data
-   `LIKE`, filtering responses more loosely
-   `ORDER BY`
-   `LIMIT`
-   `GROUP BY`

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


## [[SELECT statements]]



**Problem:** If you had a table with a hundred million rows of data, 
...reading through all rows to find the specific column you want to
...would be inefficient and perhaps even impossible.
**Solution:** We need to filter results -> 
[[WHERE clause to filter data]]
[[LIMIT and OFFSET to reduce data output]]
[[DISTINCT keyword to remove duplicates]]


## [[WHERE clause to filter data]]


## [[LIMIT and OFFSET to reduce data output]]


## [[DISTINCT keyword to remove duplicates]]


ORDER BY clause to sort data
```SQL
SELECT column, another_column, … FROM mytable
ORDER BY column ASC/DESC;
```


Real world data is often 
    -> broken down into pieces stored across multiple tables.
    -> It's a process known as normalization, [[Database Normalization explained]]



Multi-table queries with JOINs

**Primary Key**
Sharing tables must have primary key that identifies an info uniquely across the database. 
Primary key type examples 
-> auto-incrementing integer (which is space efficient), 
-> but can be a string, 
-> a hashed value, 
-> The important trait of primary key is it's unique


JOIN clause 
we can combine row data across two separate tables using this unique key. 
The first of the joins that we will introduce is the INNER JOIN.

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


If two tables have [[asymmetric]] data, 
which can easily happen when data is entered in different stages, 
then we would have to use a 
-> `LEFT JOIN`,  or
-> `RIGHT JOIN` or 
-> `FULL JOIN` 
This ensures that data you need is not left out of results.

```SQL
SELECT column, another_column, …
FROM mytable
INNER/LEFT/RIGHT/FULL JOIN another_table 
    ON mytable.id = another_table.matching_id
WHERE condition(s)
ORDER BY column, … ASC/DESC
LIMIT num_limit OFFSET num_offset;
```
Like the `INNER JOIN` 
These three new joins have to specify which column to join the data on.  
When joining table A to table B, 
-> a `LEFT JOIN`  includes rows from `A` regardless of whether a matching row is found in `B`.
My understanding tells me that it includes everything from `A` but also includes any matching data from `A` to `B`

-> The `RIGHT JOIN` keeps rows in `B` regardless of whether a match is found in `A`. 

-> The `FULL JOIN` rows from both tables are kept, regardless of whether a matching row exists in the other table.

When using `LEFT/RIGHT/FULL JOIN`
you will likely have to write additional logic to deal with `NULL`s in the result and constraints (more on this in the next lesson).


Did you know?
You might see queries with these joins written as 
`LEFT OUTER JOIN`, 
`RIGHT OUTER JOIN`,  
`FULL OUTER JOIN`, 
but the `OUTER` keyword is kept for `SQL-92` COMPATABILITY 
these queries are simply equivalent to `LEFT JOIN`, `RIGHT JOIN`,  and `FULL JOIN