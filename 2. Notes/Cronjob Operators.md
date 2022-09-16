[[CronJob - Task Scheduler but on Linux]]

# Cronjob Operators
Created:  [[2022-08-09]]
Tags: #fleeting 

---
### `*` means all possible values in a field
Example: 
IF -> run a task every minute, 
THEN -> write `*` in `Minute Field`

### `,` to list multiple values
Example
IF -> run a task every Monday and Friday
THEN -> write `1, 5` in `Day of the Week Field`
 
### `-` range of values
Example:
IF -> run task every June TO September
THEN -> write `6-9` in `Month Field`

### `/` divide a value
Example:
IF -> run script every 12 hours
THEN -> write `*/12` in `Hour Field` 
I don't understand ;-;

### `L` means anything that's on Last
This can only be used in fields: `day-of-month`  and `day-of-week`
Example:
IF -> Last wednesday of the month
THEN -> write `3L` in `day-of-week field`

### `?` No specific value
Used in `day of the month` and `day of the week` fields.


## CONFUSING OPERATORS
Means, I don't fully understand them yet

### `W`  Use this operator to determine the closest weekday from a given time. 
For example, 
if the **1st** of a month is a Saturday,
writing **1W** in the `day-of-month field` 
will run the command on the closest weekday, which is Monday (the **3rd**).
#myquestion What if its `3W`, 3 means 3rd of month which is Monday, will the closest weekday will be `4` which is Tuesday??? 

### `#` Determine the day of the week
Number only accepts  from 1 to 5
IF -> Run the job at the second Monday of the month
THEN -> `1#2`
#myquestion Why does it only accept 1 to 5? Does that mean the weekdays?













