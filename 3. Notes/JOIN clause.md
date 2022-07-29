[[Week 7 - SQL]]

# JOIN clause
Created:  [[2022-07-29]]
Tags: #fleeting 

---
we can combine row data across two separate tables using this unique key. 
The first of the joins that we will introduce is the INNER JOIN.

## Inner Join

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

## Other Joins (Left / Right / Full)
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
```SQL
FROM mytable LEFT JOIN another_table
    ON mytable.column = another_table.matching_column
```
-> a `LEFT JOIN`  includes rows from `A` regardless of whether a matching row is found in `B`.
Basically, it includes everything about the table on the `LEFT`. 
Since the table of the `LEFT` is `FROM mytable`, 
    everything on `mytable` will be included regardless if it exist on another_table or not.

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
these queries are simply equivalent to `LEFT JOIN`, `RIGHT JOIN`,  and `FULL JOIN`



[[Example SQL query that uses LEFT JOIN clause]]