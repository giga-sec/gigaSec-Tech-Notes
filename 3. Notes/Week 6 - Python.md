

# Week 6 - Python
Created:  [[2022-07-14]]
Tags: #fleeting 

---
Python is an Interpreted Languange. [[What is an Interpreted Language]] 

`ValueError` is a type of **exception error**. 
It immediately stops the program
```Python
Traceback (most recent call last):
  File "/workspaces/20377622/calculator.py", line 1, in <module>
    x = int(input("x: "))
ValueError: invalid literal for int() with base 10: 'cat'
```

You can stop python from stopping the program after it detects error
`try` and `except` block detects **exception error**


## [[Command Line Arguments in Python]]


Import different functions from a library
Below, here we are importing `argv` and `exit` from the library `sys`
```Python
from sys import argv, exit
```



Python - File Handling
Opening csv file

Libraries Needed
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


## Caching in Python
When Running a python program
-> `Source Code` is compiled into `Bytecode`
-> `Bytecode` is cached and stored in `.pyc` file. (runs faster after the first execution of file)

 
When source code is being modified, 
Will be recompiled and new bytecode files will be created again. 
**HOWEVER** in some occasions this may not be true --^
**Problem:** Python will execute the code using cached files causing you some troubles. 
                For instance, you fixed a bug but Python runs the buggy cached version



[[Problem Set 6 - Credit]]










## References
1. https://towardsdatascience.com/pycache-python-991424aabad8