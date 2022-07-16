

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


## Command Line Arguments in Python
[[C - Command line arguments --argc and argv]]


Libraries needed below
```Python
from sys import argv
```

`argv` means "argument vector", this is where we store the arguments. 
`argv[0]` is the code execution itself (i.e `./filename`) 
`len()` counts in 1. So there are two arguments here (`filename` and `arg1`)
```Python
if len(argv) == 2:
    print(f"hello, {argv[1]}")
```


Execution of the Script below
```Python
python file_name.py arg1 arg2 ...
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














## References
1. https://towardsdatascience.com/pycache-python-991424aabad8