[[Week 7 - SQL]]
# CSV in Python
Created:  [[2022-07-20]]
Tags: #fleeting 

---
[[CSV - Explained]]

`set()`
A data structure built-in, `set`, 
which ensures that all values are unique:



Libraries Needed
```python
import csv
```

Open `.csv` file first
Then use `csv.reader` to read contents of `.csv`
```python
opened_file = open("file_name.csv")  # Open csv file first
csv_reader = csv.reader(opened_file)  #
```


Depends on your program
You can store the header in a variable or just skip it 
```python
header = []
header = next(csv_reader) # store header in variable
```

Then the next iteration will be the 1st record 
```python
rows = []
for row in csvreader:
        rows.append(row)
```


Print everything of the csv
```python
for row in read_file_csv:
    print(row)
```

## `csv.reader()` vs `csv.DictReader()`


## CS50 Guide
```Python
import csv
```

Syntax to open a file
```Python
file = open("file_name.csv", "method_used")
file.close()  # Always close file
```

More syntax to open a file
```Python
with open("phonebook.csv", "a") as file:
    writer = csv.writer(file)
    writer.writerow((name, number))
    # with automatically closes file for us
```










## References
1. 