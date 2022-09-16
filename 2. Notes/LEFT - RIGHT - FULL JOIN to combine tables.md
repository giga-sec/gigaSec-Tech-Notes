[[JOIN clause to combine tables]]

# LEFT - RIGHT - FULL JOIN to combine tables
Created:  [[2022-07-30]]
Tags: #fleeting 

---
[[Example SQL query that uses LEFT JOIN clause]]

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












## References
1. 