[[Week 7 - SQL]]

# IS NULL to check if VALUE is EMPTY
Created:  [[2022-07-30]]
Tags: #fleeting 

---
Test a column for NULL or empty values in WHERE clause by using either the 
`IS NULL` or `IS NOT NULL` constraint.
Select query with constraints on NULL values.
```SQL
SELECT column, another_column, …
FROM mytable
WHERE column IS/IS NOT NULL
    AND/OR another_condition
    AND/OR …;
```












## References
1. 