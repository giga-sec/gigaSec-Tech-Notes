[[MOC Programming]]

# Shell Scripting
Created:  [[2022-08-07]]
Tags: #fleeting 

---
## Quick Facts about Shell
File extension is `.sh`
It's like [[Batch Scripting]] but for unix.

**To run the script,**
First -> [[Give execute permission to a file]] 


Break -> For stopping a code, or loop 
Continue -> you get the idea


`#!/bin/bash`
^ A line starting with `#!` tell os which [[Shell Interpreters]] to use to execute the file. 
The above line asks the system to use the bash interpreter.

```SHELL
read name   <-- Getting user input
echo "Hello $name"  <-- Printing user input
```
^ `read` receives input from user and **stores the inputted value in `name`**
`echo` keyword output strings onto the `stdout`
`$` prints the value of a variable



## Variables
**Variables in used as a pointer pointer to the actual data** 
Variables do not have to be declared, as compared to programming languages like C, 
but if you try to read from an _undeclared_ variable, then you will not get intended results.

### Naming Conventions of Variables
**-> Spaces are all underscores**
**-> No spaces when declaring variables** `a=12`

ONLY **==ALL CAPS==** `JOB_ID`, `PROCESS_NAME` 
    IF -> For exported variables and constants 
    IF -> Like when they are shared across multiple scripts


ONLY **==all lowercase==**
    IF -> variables that are only used inside of the file itself


ONLY **==__leading underscore==**
    IF -> private variables and functions `_captain`
    IF -> where functions share the same variables `debug, _debug`

### $ Special Variables
`$PWD` -> Prints Present Working Directory

Some `$` commands that I have no idea how they work
-   `$#`: This variable contains the number of arguments supplied to the script.
-   `$?`: The exit status of the last command executed. Most commands return 0 if they were successful and 1 if they were unsuccessful.

##### Command Line Arguments
**command line** can be accessed by using 
`$0`, `$1`, `$2`
```BASH
./script 1 2 3
```
`$0 = scriptname`
`$1` is the first argument, `$2` is the second argument

## Command Line Arguments
**command line** can be accessed by using 
`$0`, `$1`, `$2`
```BASH
./script 1 2 3
```
`$0 = scriptname`
`$1` is the first argument, `$2` is the second argument



## Control Flow statements

### If - else
```BASH
if [ $a == $b ]
then
    #If they are equal then print this
    echo "a is equal to b"
else
    #else print this
    echo "a is not equal to b"
fi
```

### Switch - Case
```BASh
id=1
case $id in
	#case 1
	1) echo "ID is 1";;
	#case 2
	2) echo "ID is 2";;
case
```


### Loops
while loop
```BASH
cars=10
while [ "$cars" -gt 0 ]
do
    cars=`expr $cars - 1`
    echo $cars
done
```

for loop
```BASH
for i in 1 2 3 4 5
	do
		echo $i   #prints 1 to 5
	done
```

for loop that uses range of numbers
```BASH
for i in {1..5}
	do
		echo $i 	#can be used to specify range
	done
```

for loop, c like format
```BASH
#!/bin/bash
	for (( c=1; c<=5; c++ ))	#C-style loops
	do
	   echo "Welcome $c times"
	done
```






## References
1. 