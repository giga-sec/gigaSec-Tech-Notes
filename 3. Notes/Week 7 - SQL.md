[[MOC CS50]]

# Week 7 - SQL
Created:  [[2022-07-26]]
Tags: #fleeting 

---
[[CSV - Explained]]
[[CSV in Python]]


```python
def get_value(num):
    return num + 1
```
Translated into `lambda` function
```python
final_num = lambda num: num + 1
```
the left side of `:` indicates the input
the right side of `:` indicates what value it will return to

A `lambda` function is basically a one liner function that



SQL introduction
Relational Database
- closer to proper spreadsheet program
It's basically much better than Flat-File Database but not that simple compared to it

All relational database has at least have CRUD principles
`CREATE`
`READ`
`UPDATE`
`DELETE`


SQL takes in the principles of CRUD and in a better way as well
`CREATE`, `INSERT`
`READ`, `SELECT`
`UPDATE`
`DELETE`, `DROP`

```sql
sqlite3 <filename>.db
```
If the filename doesn't exist, it will automatically be created

```sql
.mode csv
.import <filename>.csv filename
```
This will transfer any data from `.csv` to the created sql `.db` file

```csv
.schema
```
To show the design of your database


```sql
SELECT DISTINCT(UPPER(title)) FROM favorites;
```
Forces every output to be in uppercase and remove redundancy of similar outputs



```sql
SELECT title FROM favorites LIMIT 10;
```
```sql
SELECT title FROM favorites WHERE title LIKE "%friends"
```
We can also add more phrases to our command:
-   `WHERE`, adding a Boolean expression to filter our data
-   `LIKE`, filtering responses more loosely
-   `ORDER BY`
-   `LIMIT`
-   `GROUP BY`







SQL  in Python




Problems with SQL










## References
1. 