[[MOC Programming]]

# Kata
Created:  [[2022-07-20]]
Tags: #fleeting 

---
## Is a number prime?
1. Understand the Problem
Takes in an intiger
returns `True` or `False`

Prime number ( or a prime ) 
- is a natural number greater than `1` 
- that has no positive divisors other than `1` and itself.
Basically, a number that can't be further reduced to a natural number when dividing it.
Like `7`, because the least number to get a natural number is `1` so `7/1`
This is not a prime number, `8`, because we can still divide it further `8/2 = 4`  


Assumptions
-   you will be given integer input.
-   You may be given negative numbers as well ( or `0` ).
-   **NOTE on performance**: There are no fancy optimizations required, but still _the_ most trivial solutions might time out. Numbers go up to 2^31 ( or similar, depending on language ). Looping all the way up to `n`, or `n/2`, will be too slow.

My plan:
We divide the `num` with 2

Okay, this is not easy as it seems. 
Numbers can go up to `2147483648`, so dividing it simply by 1 isn't sufficient, neither is going up to all prime numbers to 1,000. 
But hmm, efficiency might not be the problem here

Okay, so let's try putting all values of prime numbers to 1000?
Then we use that to divide the `number` and see if its prime?
https://www.factmonster.com/math-science/mathematics/prime-numbers-facts-examples-table-of-all-up-to-1000


Okay, so we can also do factors.
Like this
`36` can be written as 2 × 3 × 2 × 3. 
So, the factors of 36 here are 1, 2, 3, 4, 6, 9, 12, 18, and 36. 
Since the number of factors of 36 is more than 2, it is not a prime number but a [composite number](https://byjus.com/maths/composite-numbers/).

We could also set up rules,
We're gonna have to temporarily transform `int` to `str` so that we can use splices
1. **“**Numbers ending with 0, 2, 4, 6 and 8 are never prime numbers.**”**
2. **“**Numbers whose sum of digits are divisible by 3 are never prime numbers.**”**
    Transform the numbers into a list of digits
        Turning it into a string is good (actually bad idea since I can't use sum with it because it's a char, not an int)
    Then use sum on that list of digits
    Then check if that sum is divisible by 3, hmm
        Maybe go with `(sum % 3) != 0`
1. **If a large number is ending with 5, then it is always divisible by 5. Hence, it is not a prime number**

```python
def is_prime(num):
    str_num = str(num)
    len_num = len(str_num)

    not_prime_indicator = [0, 2, 4, 5, 6, 8]  # ends with
    if (len_num >= 2):
        if (str_num[-1] in not_prime_indicator):
            return False
    else:  # Assumes digit length is 1
        if (num % 2) == 0
            return True
         
    # Turn each digit into list and sum all of digits
    sum_digits = sum([int(x) for x in str(num)])  
    if ((sum_digits % 3) != 0):
        return False

    # Assumes integer is a prime
    return True
```
Problem: 
It can't handle negative numbers
`5` is a prime, my program detects the last number, however if there's only 1 digit, then it detects that as a last number. `5` is in not_prime_indicator. We could use len to check if it has more than 2 digits, if it's just a single digit, we just modulo it by 2

New Code
```python
def is_prime(num):
    str_num = str(num)
    len_num = len(str_num)

    not_prime_indicator = [0, 2, 4, 5, 6, 8]  # ends with
    if (len_num >= 2):
        if (str_num[-1] in not_prime_indicator):
            return False
    else:  # Assumes digit length is 1
        if (num % 2) != 0
            return True
         
    # Turn each digit into list and sum all of digits
    sum_digits = sum([int(x) for x in str(num)])  
    if ((sum_digits % 3) != 0):
        return False

    # Assumes integer is a prime
    return True
```
Another Problem:
It doesn't detect 2 as prime number
It still doesn't detect if a number is negative

New Code
```python
def is_prime(num):
    str_num = str(num)
    len_num = len(str_num)

    not_prime_indicator = [0, 2, 4, 5, 6, 8]  # ends with
    if (len_num >= 2):
        if (str_num[-1] in not_prime_indicator):
            return False
    else:  # Assumes digit length is 1
        if (num % 2) != 0
            return True
         
    # Turn each digit into list and sum all of digits
    sum_digits = sum([int(x) for x in str(num)])  
    if ((sum_digits % 3) != 0):
        return False

    # Assumes integer is a prime
    return True
```

Maybe, let's try the factors.
```python
def print_factors(x):
   print("The factors of",x,"are:")
   for i in range(1, x + 1):
       if x % i == 0:
           print(i)

num = 320
```


4. find the square root of the given number.
     Divide the given number by all the prime numbers below its square root value.
     If the number is divisible by **any of the prime numbers less than its square root**, it is not a prime number; otherwise, it is prime.
- [ ] I want to test my understanding of 4
- [ ] Also how do we do square root in python?
- [ ] We'd also have to teach the code to identify the prime numbers less than its square root
- [ ] Hmmm, I think i'll skip this one, as its gonna complicate things.




## Equal Sides Of An Array
1. Understand the Problem
You are going to be given an array of integers.
The length of the array will be `0 < arr < 1000`
Use that array and
- find an index N
    - where the sum of the integers to the left of N
    - is equal to the sum of the integers to the right of N.
    - IF -> no index that would make this happen
    - THEN -> `return -1`
All in all, we want to return the index of where the scenario above can happen
Example: Index is at the `middle`
array `{1,2,3,4,3,2,1}`:  
function will return the index `3`, 
because at the `3rd` position of the array, 
    sum of left side of the index (`{1,2,3}`) 
    and sum of the right side of the index (`{3,2,1}`) 
    both equal `6`.

More Example: Index is at `1`
array `{1,100,50,-51,1,1}`:  
function will return the index `1`, 
because at the `1st` position of the array, 
    sum of left side of the index (`{1}`) 
    and the sum of the right side of the index (`{50,-51,1,1}`) 
    both equal `1`.

More Example: Index is at `0`
You are given the array `{20,10,-80,10,10,15,35}`  
At index 0 the left side is `{}`  
The right side is `{10,-80,10,10,15,35}`  
They both are equal to `0` when added. (Empty arrays are equal to 0 in this problem)  
Index 0 is the place where the left side and right side are equal.


My question:
is it possible to have multiple answers?
Ans: I think not, we'd scan the thing from left to right and if we found the correct index, then we just straight up exit the program. 

Yeah confirmed
If you are given an array with multiple answers, return the lowest correct index.
Just stop the program to the correct index


2. My Plan:
```Python
for i in array:
    
```

Let's test the slicing feature of python first
Specifically, I want to find out what numbers will be included on a specific splice
```python
list[include:exclude]
```
Translate to, include this index value here till before the excluded index 
When we want to include the last value also
```python
list = [1, 2, 3, 4, 5]
list[3:]
```
Start at `3 index` till the end
We just leave it empty to include the last index which is number `5`


Rare Cases:
Sometimes, the index is at `0`
because, when we sum one side, it's equal to `0` and the left side of `0` is `[]` meaning empty, therefore `zero`

Global Variables:
This is to consider the empty variable may exist when index at first and last
`left_side = []`
`right_side = []`
`len_arr = len(arr)`  So that we wont have to len() again, making program faster 
```python
def find_even_index(arr):
    left_side = []
    right_side = []
    len_arr = len(arr)

    i = 0  # Also acts as an index
    while (i < len_arr):
        left_side = arr[0:i]
        right_side = arr[i+1:]  # +1 to skip the current_index
        left_sum = sum(left_side)
        right_sum = sum(right_side)
        if (left_sum == right_sum):
            return i
        i += 1
    return -1
```

Better Solution in Kata
```python
def find_even_index(arr):
    for i in range(len(arr)):
        if sum(arr[:i]) == sum(arr[i+1:]):
            return i
    return -1
```


Okay, so we're gonna use the splice feature 
    to help us make a list for each side
How do we detect the end point of list, and starting point of list for each side
    `left_side[0:current_index]`
    `right_side[current_index+1:-1]` +1 to skip the current_index 

We're gonna use sum() function to
    to add all the list of each sides
    Then we compare the sum,
    IF -> sum is the same
    THEN -> return `index`


We're gonna use while loop so that we can have an `i` increment variable, 
    allows us to scan the current index of an array
    allows us to return the `index` as well
    the while loop ends with length of given_list


How are we gonna handle indices out of array?
I don't think there will be indices out of array

When no match is found, we just `return -1` at the end




## Find the Parity Outlier
Function gets `arg1` that's an array with size 3 or more, it contains integers
The array either  
- entirely comprised of odd integers  
- entirely comprised of even integers 
- EXCEPT for a single integer `N`. 
returns the "outlier" `N`.

My understanding:
outlier = The goal is to find this outcast of integer that doesn't belong to the comprised odd/even
It's like "What number that doesn't belong here?" 


Assumptions:
There's only `one` outcast


My plan:
- [x] How to detect if a number is odd or even
Ans: `n % 2` where in `n` is each numbers of the `array`

Scan each every number in the array
We determine each number if its an odd or even
`1, 2` Still not determined
`2, 2` Even
`1, 1` Odd

Maybe have a variable that counts how many even or odd there are
IF -> even are greater than 1
THEN ->  scan each number 
    IF -> number is an odd number
    THEN -> we return that odd number
ELIF -> odd are greater than 1
THEN -> scan each number
    IF -> number is an even number
    THEN -> we return that even number

```python
count_odd = 0
count_even = 0
array = [1, 2, 3, 5]
# First determine which one is has more numbers, odd or even

i = 0
array_len = len(array)
while (i < array_len):
    odd_even = array[i] % 2
    if (odd_even == 0):  # if number is even
        count_even += 1
    elif (odd_even == 1):
        count_odd += 1

    i += 1
    if (count_even > 1):
        while (i < array_len):
            odd_even = array[i] % 2
            if (odd_even == 1):  # number even
                return array[i]
    elif (count_odd > 1):
        while (i < array_len):
            odd_even = array[i] % 2
            if (odd_even == 0):  # number odd
                return array[i]
```
Problem with my plan: 
If the outlier value is at first, then it doesn't detect it because my algo detects only the not scanned values.


2nd Plan:
- [ ] Determine what plans we will retain on 1st plan
https://www.codewars.com/kata/5526fc09a1bbd946250002dc/train/python
A variable that counts how many odds and even there are
We could store each number to different list which represents the number of odds/even
```python
list_even = [2, 4, 6]
list_odd = [1]
```
Then, which ever list has a length of 1, that will be returned

Scan all the digits
Make a decision to whether to store it in even list or odd list
After scanning all digits
Compare the length of each two lists
The smallest number will return the number of that list

```python
list_even = []
list_odd = []
for i in numbers:
    if ((i % 2) == 0):  # Even
        list_even.append(i)
    elif ((i % 0) == 1):  # Odd
        list_odd.append(i)
if (len(list_even) > len(list_odd)):
    return list_odd[0]  # There's an odd outlier
else:  # Assumes there's an even outlier
    return list_even[0]
```

We managed to easily solve that in 2nd try. That works! :D





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