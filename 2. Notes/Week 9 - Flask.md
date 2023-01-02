[[MOC CS50]]

# Week 9 - Flask
Created:  [[2022-12-17]]

---
[[Flask]]


# Lab 9
Create a web application to keep track of friends’ birthdays.


In app.py, you’ll find the start of a Flask web application. 
The application has one route (/) 
-> that accepts both POST requests (after the if) 
-> and GET requests (after the else). 

Currently, when the / route is requested via GET, 
the index.html template is rendered. 

When the / route is requested via POST, 
the user is redirected back to / via GET.


birthdays.db is a SQLite database with 
one table, birthdays, that has four columns: 
-> id, name, month, and day. 

There are a few rows already in this table, ultimately your web application will support 
-> the ability to insert rows into this table!


---
No need to edit the CSS



<---->
When the / route is requested via GET, your web application should 
-> display, in a table, all of the people in your database 
-> along with their birthdays.

-> First, in app.py, 
1. add logic in your GET request handling to query the birthdays.db database for all birthdays. 
2. Pass all of that data to your index.html template.

-> Then, in index.html, 
3. add logic to render each birthday as a row in the table.
Each row should have two columns: 
- one column for the person’s name 
- another column for the person’s birthday.


When the / route is requested via POST, your web application should 
-> add a new birthday to your database 
-> and then re-render the index page.

-> First, in index.html, 
1. add an HTML form. 
The form should let users type in a
- name, 
- a birthday month, 
- a birthday day. 
Be sure the form submits to / (its “action”) with a method of post.

-> Then, in app.py, 
add logic in your POST request handling to INSERT a new row into the birthdays table based on the data supplied by the user.


# Problem Set 9 - Finance
Implement a website via which users can “buy” and “sell” stocks
A web app via which you can manage portfolios of stocks
- allow you to check real stocks’ actual prices and portfolios’ values, 
- let you buy (okay, “buy”) and sell (okay, “sell”) stocks by querying [IEX](https://iextrading.com/developer/) for stocks’ prices.



Table in a database is a two-dimensional set of rows and columns, 
columns = properties = columns 
rows = instances of entity in  table 

You can insert multiple rows at a time by just listing them sequentially.
Insert statement with values for all columns
```SQL
INSERT INTO mytable
VALUES (value_or_expr, another_value_or_expr, …),
       (value_or_expr_2, another_value_or_expr_2, …),
       …;
```

```SQL
INSERT INTO Customers (CustomerName, City, Country)
VALUES ('Cardinal', 'Stavanger', 'Norway');
```


Insertion of Specific Columns
```SQL
INSERT INTO mytable
(column, another_column, …)
VALUES (value_or_expr, another_value_or_expr, …),
       (value_or_expr_2, another_value_or_expr_2, …),
```



```SQL
CREATE TABLE purchase (  
id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,  
username TEXT NOT NULL,  
symbol TEXT NOT NULL,  
total_price NUMERIC NOT NULL,  
share_quantity NUMERIC NOT NULL,  
share_price NUMERIC NOT NULL  
);
```









