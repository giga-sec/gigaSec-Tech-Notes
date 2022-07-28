[[MOC CS50]]

# Week 6 - Python
Created:  [[2022-07-14]]
Tags: #fleeting 

---
[[CSV in Python]]

---
https://stackoverflow.com/questions/10712002/create-an-empty-list-with-certain-size-in-python

[[Looping in Python]]



In Python2, `maketrans` is a function belongs to the `string` module. 
However in Python3, `maketrans` is a static method of the `str` type.
`str.maketrans`

Turn number into a list of digits
```python
list_of_digits = [int(x) for x in str(num)]
```

---
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



[[Python Dictionaries - Dictionary]]

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


Floor Division
When doing arithmetic with large numbers, use floor Division
`3534564675464565464564564 // 10`



[[Python - File Handling]]
    Opening csv file


## Caching in Python
When Running a python program
-> `Source Code` is compiled into `Bytecode`
-> `Bytecode` is cached and stored in `.pyc` file. (runs faster after the first execution of file)

 
When source code is being modified, 
Will be recompiled and new bytecode files will be created again. 
**HOWEVER** in some occasions this may not be true --^
**Problem:** Python will execute the code using cached files causing you some troubles. 
                For instance, you fixed a bug but Python runs the buggy cached version













## References
1. https://towardsdatascience.com/pycache-python-991424aabad8