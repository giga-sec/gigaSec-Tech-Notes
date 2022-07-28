[[MOC CS50]]

# Week 7 - SQL
Created:  [[2022-07-26]]
Tags: #fleeting 

---
[[CSV - Explained]]
[[CSV in Python]]


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

```csv
.schema
```
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




SQL  in Python
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




