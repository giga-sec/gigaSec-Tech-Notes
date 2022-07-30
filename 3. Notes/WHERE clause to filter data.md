[[Week 7 - SQL]]

# WHERE clause
Created:  [[2022-07-29]]
Tags: #fleeting 

---
Problem: If you had a table with a hundred million rows of data, 
...reading through all rows to find the specific column you want to
...would be inefficient and perhaps even impossible.
Solution: We need to filter results

```SQL
SELECT column, another_column, …
FROM mytable
WHERE condition
    AND/OR another_condition
    AND/OR …;
```

## Constraint for `WHERE` clause 

### Standard numerical operators
```SQL
=, !=, <, <=, >, >=

WHERE col_name = 4
```
Means, if column name is equal to `4`

### `BETWEEN AND` Constraint 
Number is within range of two values (inclusive)
```SQL
BETWEEN … AND …

WHERE col_name BETWEEN 1.5 AND 10.5
```
Where col_name's value is in between 1.5 and 10.5

### `IN` Constraint 
Number exists in a list
```SQL
IN (Numbers here)

WHERE col_name IN (2, 4, 6)
```
Where col_name's value is in the numbers 2, 4, 6


### `LIKE` Constraint 
Case insensitive exact string comparison
```SQL
LIKE

WHERE col_name LIKE "ABC"
```

#### `%` 	Condition
Used anywhere in a string to match a sequence of zero or more characters 
(only with LIKE or NOT LIKE) 	
```SQL
LIKE "%AT%"

WHERE col_name LIKE "%TOY STORY%"
```
Results -> matches "Toy Story 3", "Toy Story", "Toy Story asdkjaslkd"


Full-text search is best left to libraries designed specifically to do full text search
Apache Lucene or Sphinx. 
As a result are 
-> more efficient
-> support a wider variety of search features 
    including internationalization and advanced queries.


#### `_` Condition
Used anywhere in a string to **match a single character** 
(only with LIKE or NOT LIKE)
```SQL
col_name LIKE "AN_"  
```
Results -> matches "AND", but not "AN"


###  `NOT`  Constraint
Number is not within range of two values (inclusive)
```SQL
NOT BETWEEN … AND …

WHERE col_name NOT BETWEEN 1 AND 10
```
Where col_name's value is not in between 1 and 10


Number does not exist in a list
```SQL
NOT IN (…)

WHERE col_name NOT IN (1, 3, 5)
```


Case insensitive exact string inequality comparison
```SQL
NOT LIKE

col_name NOT LIKE "ABCD"
```



## `IS NULL` constraint
Test a column for NULL or empty values
`IS NULL` or `IS NOT NULL` constraint.
Select query with constraints on NULL values.
```SQL
SELECT column, another_column, … FROM mytable
WHERE column IS/IS NOT NULL
    AND/OR another_condition
    AND/OR …;
```
[[IS NULL to check if VALUE is EMPTY]]





