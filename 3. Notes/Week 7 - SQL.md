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


## [[JOIN clause]] 
To combine two separate tables into one temporary table 