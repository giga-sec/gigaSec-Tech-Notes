[[Week 6 - Python]]

# CSV in Python
Created:  [[2022-07-20]]
Tags: #fleeting 

---
[[CSV - Explained]]

Libraries Needed
```python
import csv
```

Open `.csv` file first
Then use `csv.readed` to read the contents of `.csv`
```python
opened_file = open("file_name.csv")  # Open csv file first
csvreader = csv.reader(opened_file)  #

next(csvreader)  # Skips the header
print(next(csvreader))  # Prints 1st record
```

Print everything of the csv
```python
for row in read_file_csv:
        print(row)
```


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