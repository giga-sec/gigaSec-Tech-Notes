[[JOIN clause]]

# Example SQL query that uses LEFT JOIN clause
Created:  [[2022-07-29]]
Tags: #fleeting 

---
`-> a `LEFT JOIN`  includes rows from `A` regardless of whether a matching row is found in `B`.
My understanding tells me that it includes everything from `A` but also includes any matching data from `A` to `B`

```SQL
SELECT DISTINCT building_name, role
FROM buildings
LEFT JOIN employees
    ON buildings.building_name = employees.building;
```
https://sqlbolt.com/lesson/select_queries_with_outer_joins
```SQL
FROM buildings
LEFT JOIN employees
    ON buildings.building_name = employees.building;
```
```SQL
SELECT DISTINCT building_name, role
FROM buildings 
LEFT JOIN employees
    ON employees.building = buildings.building_name;
```
BOTH TWO sql query above produces the same resulting data

Translates to
FROM table named "buildings"
Include everything from the left table "buildings"
Then JOIN the table named employees  


Resulting Data
```Table-Result
building_name	role
1e	            Engineer
1e	            Manager
1w	
2e	
2w	            Artist
2w	            Manager
```


```Table-Buildings
building_name	capacity
1e	            24
1w	            32
2e	            16
2w	            20
```


```Table-Employees
role	    name	building	years_employed
Engineer	Becky A.	1e	    4
Engineer	Dan B.	    1e	    2
Engineer	Sharon F.	1e	    6
Engineer	Dan M.	    1e	    4
Engineer	Malcom S.	1e	    1
Artist	    Tylar S.	2w	    2
Artist	    Sherman D.	2w	    8
Artist	    Jakob J.	2w	    6
Artist	    Lillia A.	2w	    7
Artist	    Brandon J.	2w	    7
Manager	    Scott K.	1e	    9
Manager	    Shirlee M.	1e	    3
Manager	    Daria O.	2w	    6
```












## References
1. 