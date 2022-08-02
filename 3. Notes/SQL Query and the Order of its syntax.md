[[Week 7 - SQL]]

# SQL Query and the Order of its syntax
Created:  [[2022-08-02]]
Tags: #fleeting 

---
That doesn't mean that every parts must be included.
Some parts can be omitted but the order of the syntax must be followed so.
```SQL
SELECT DISTINCT column, AGG_FUNC(column_or_expression), …
FROM mytable
    JOIN another_table
      ON mytable.column = another_table.column
    WHERE constraint_expression
    GROUP BY column
    HAVING constraint_expression
    ORDER BY column ASC/DESC
    LIMIT count OFFSET COUNT;
```













## References
1. https://sqlbolt.com/lesson/select_queries_order_of_execution