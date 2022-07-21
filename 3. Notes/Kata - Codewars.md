

# Kata
Created:  [[2022-07-20]]
Tags: #fleeting 

---





## Array Diff
implement a difference function, 
which subtracts one list from another and returns the result.

It should remove all values from list `a`, 
which are present in list `b` keeping their order.

IF -> value is present in `b`, 
THEN -> all of its occurrences must be removed from the other:
```python
array_diff([1,2,2,2,3],[2]) == [1,3]
```

My understanding:
So, arg2 decides which numbers to remove in the arg1


My questions:
Do we expect that arg2 will only be a single number?
Ans: Nope, arg2 can have many numbers as it want

Does deleting the `i` in for loop remove its value in the original list?
Ans: Nope, 

Do we return anything?
Ans: Nope
Actually, we return the list a or the arg1


My Plan:
Scan each vlaues of arg1

```python
arg2 = []
for i in arg1:
    if i in arg2:
        delete the (i)number in arg1 
```

```python
len_arg2 = len(arg2)
while (i < len_arg2):
    if (arg1[i] in arg2):
        del arg1[i]
    i += 1
```

Since deletion of values affects the length of the index
Let's make a copy of the list to be deleted
Then the final result of that copy

Okay, so the problem is the navigation of 


## Multiples of 3 or 5
list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Returns the sum of all the multiples of 3 or 5

Constraint:
If the number is a multiple of **both** 3 and 5, only count it _once_.

My Understanding:
It takes an input of any number
That input will be a limit to how much numbers the multiples will be
The multiples must not exceed the user input
We add this multiples


**It returns the sum of all multiples of 3 or 5 
where in the multiples are lower than or equal to the  the user_input**
- [x] ==If the number is a multiple of **both** 3 and 5, only count it _once_==.


My Plan:
We put the user input into a variable
? We don't know how to reduce the user_input to 0 or something
```python
sum = 0
while (user_input > 3):
    # if number is a multiple of 3
    if (user_input % 3 == 0 or user_input % 7 == 0):
        #add the number to the sum
        sum = user_input + sum 
    user_input -= 1    
```

? We don't know how to reduce the user_input to 0 or something
- [x] Let's first understand how to get the multiples of 3 and 5 by code
```python
i = 9
if (i % 3 == 0 or i % 7 == 0):
    print("Multiples of 3 or 7")
```


We also must find a way that if multiples exists on 3 and 5, we'll only count it once
```python
if number is a multiple of 3:
    add the number to the sum
elif number is a multiple of 5:
    add the number to the sum
else:
    pass
```

We are going to add all the multiples
```python
sum = 0
multiple_num = is the multiple number of 3 or 5
sum += multiple_num + sum
```


Lastly, we are going to return the sum


## References
1. 