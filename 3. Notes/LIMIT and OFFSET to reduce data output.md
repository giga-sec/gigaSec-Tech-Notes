[[Week 7 - SQL]]

# LIMIT and OFFSET to reduce data output
Created:  [[2022-07-29]]
Tags: #fleeting 

---
`LIMIT` will reduce the number of rows to return, 
the optional `OFFSET` will specify where to begin counting the number rows from.
```SQL
SELECT column, another_column, FROM mytable
LIMIT num_limit OFFSET num_offset;
```
> Websites like Reddit or Pinterest,  
 front page is a list of links sorted by popularity and time, and each subsequent page can be 
 represented by sets of links at different offsets in the database. 
 Using these clauses, the database can then execute queries faster and more efficiently by 
 processing and returning only the requested content.













## References
1. 