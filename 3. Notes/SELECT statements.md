[[Week 7 - SQL]]

# SELECT statements
Created:  [[2022-07-29]]
Tags: #fleeting 

---
Retrieves data from SQL database 
Often refered to as _queries_. [[query in sql explained]]

Think of SQL table as a type of an entity (ie. Dogs), 
    each row in SQL table as a specific _instance_ of that type (pug, bulldog, etc...) 
    each columns represents common properties shared by all instances of that entity (ie. Color of fur, length of tail, etc).

### SELECT ALL Columns
```SQL
SELECT * 
FROM movies; 
```
translates to 
```SQL
SELECT "all_columns" 
FROM "the table named movies";
```
The `*` means all columns

### SELECT specific columns
Result of this query will be\  
A copy of table, but only with columns that we requested.
```SQL
SELECT director, title 
FROM movies;`
```
translates to
```SQL
SELECT "director column and title column" 
FROM "the table named MOVIES"`
```













## References
1. 