[[Manipulating Numbers in SQL]]

# SUM function in SQL
Created:  [[2022-07-30]]
Tags: #fleeting 

---
`SUM` is an aggregate function. It will calculate the total for each group. `+` is used for calculating two or more columns in a row.

Consider this example,

```sql
ID  VALUE1  VALUE2
===================
1   1       2
1   2       2
2   3       4
2   4       5
```

```sql
SELECT  ID, SUM(VALUE1), SUM(VALUE2)
FROM    tableName
GROUP   BY ID
```

will result

```sql
ID, SUM(VALUE1), SUM(VALUE2)
1   3           4
2   7           9
```

```sql
SELECT  ID, VALUE1 + VALUE2
FROM    TableName
```

will result

```sql
ID, VALUE1 + VALUE2
1   3
1   4
2   7
2   9
```

```sql
SELECT  ID, SUM(VALUE1 + VALUE2)
FROM    tableName
GROUP   BY ID
```

will result

```sql
ID, SUM(VALUE1 + VALUE2)
1   7
2   16
```












## References
1. https://stackoverflow.com/questions/14877797/how-to-sum-two-fields-within-an-sql-query