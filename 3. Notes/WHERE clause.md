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


Standard numerical operators
```SQL
=, !=, <, <=, >, >=

WHERE col_name = 4
```
Means, if column name is equal to `4`

#### `BETWEEN AND` Condition
Number is within range of two values (inclusive)
```SQL
BETWEEN … AND …

WHERE col_name BETWEEN 1.5 AND 10.5
```
Where col_name's value is in between 1.5 and 10.5

#### `IN` Condition
Number exists in a list
```SQL
IN (Numbers here)

WHERE col_name IN (2, 4, 6)
```
Where col_name's value is in the numbers 2, 4, 6


#### `LIKE` Condition
Case insensitive exact string comparison
```SQL
LIKE

col_name LIKE "ABC"
```




####  `NOT` Condition  
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














## References
1. 