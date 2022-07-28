[[MOC Programming]]

# Kata
Created:  [[2022-07-20]]
Tags: #fleeting 

---
## Roman Numerals Encoder
1. Understand the Problem
Function parameter -> positive integer 
Function return -> string containing Roman Numeral representation of that positive integer.

Okay, this seems easy

Information about Roman Numerals
Written by... 
...expressing each digit separately 
    starting with the left most digit 
    skipping any digit with a value of zero. 
    
In Roman numerals 1990 is rendered: 1000=M, 900=CM, 90=XC; resulting in MCMXC. 2008 is written as 2000=MM, 8=VIII; or MMVIII. 1666 uses each Roman symbol in descending order: MDCLXVI.




## Where my anagrams at?
1. Understand the Problem
What is an anagram?  
IF -> two words contain the same letters. 
For example:
```
'abba' & 'baab' == true
'abba' & 'bbaa' == true

'abba' & 'abbba' == false
'abba' & 'abca' == false
```

How the function willl work
Given two inputs 
- a word and 
- an array with words. 
Return -> an array of all the anagrams or an empty array if there are none. 

Overall Goal: Write a function that will find all the anagrams of a word from a list. 

Example:
```javascript
anagrams('abba', ['aabb', 'abcd', 'bbaa', 'dada']) 
=> ['aabb', 'bbaa']
```

```javascript
anagrams('laser', ['lazing', 'lazy',  'lacer']) 
=> []
```


My understanding:
So the arg1 is use to compare each element on the arg2, and we determine it if it has the same set of letters, 
If it has the same set of letters, then we put it into a list and we repeat the process until we are at the end of the arg2 list.
Now we just return the whole list of words that we found.

My Algo:
Loop this until the end of the arg2 list
IF -> arg1 has the same set of letters of the specific element on arg2
THEN -> we put it into a separate list
When the loop ends, we just return the separate list


My Plan:
`baba` , `aabb`
- [ ] So, how do we teach python if it is an anagram to it?
Ans: 
Well maybe we could count each specific letter of arg1
We're also gonna count the specifc element of each specific letter on arg2
We compare it, and if both have the same values, then its an anagram to it?
- [ ] Okay, that might work, but is there an efficient way of solving this problem?
Ans:
I can't think of anything. So we're going with plan A


Count each specific letter of arg1
We're also gonna count the specifc element of each specific letter on arg2
We compare it, and if both have the same values, then its an anagram to it?

The count is unique to each letter in the alphabet
So how are we gonna categorize the counts?
Also, we're gonna create two lists, 
    one is to track the arg1's counts of letters
    the other one is the arg2's counts of letters

- [ ] We can order them base on the position of the alphabet
Problem: It will leave us with lots of useless memory
- [ ] We could use a dictionary 
Question: But then, for instance if a specific letter doesn't exist on the arg1's "key" cause we're gonna use the "key" to assign the letter. Okay, so will it give us an error if we do that? We could use a try:except block to do something with the error. 

Okay, I got an idea
What if, we're just going to add this values as an ASCII.
I'm pretty sure it will all be just the same
Okay let's try lol
`baba`, `aabb`
- [ ] How do we transform a letter into an ascii in python
[How to get the ASCII value of a character](https://stackoverflow.com/questions/227459/how-to-get-the-ascii-value-of-a-character)

My Algo:
Scan each letter
Transform the letter into an ascii value
Make it so that its possible to add existing values

```python
word = "baba"
ascii_sum = 0
for letter in word:
    val = ord(letter)
    ascii_sum += val
```

Okay so it works! :D 


Loop this until the end of the arg2 list
IF -> arg1 has the same set of letters of the specific element on arg2
THEN -> we put it into a separate list
When the loop ends, we just return the separate list

My Algo:
We're also gonna initalize `anagram_words` list for the ting
First we're gonna determine the overall ascii sum of the arg1
Then we're gonna iterate over the arg2 list
    Then we take the overall ascii sum of each element of arg2 list
    Compare it to overall ascii sum of arg1
        IF -> the same 
        THEN -> we append it to the `anagram_words` list
We return the `anagram_words` list 

We're gonna make it so that it make sense with the current problem
```python
def ascii_sum(word) -> list:
    ascii_sum = 0
    for letter in word:
        val = ord(letter)  # Make it into an ascii ting
        ascii_sum += val

def anagrams(word, words):
    anagram_words = []
    ascii_sum_one = ascii_sum(word)
    
    for word in words:
        ascii_sum_two = ascii_sum(word)
        if (ascii_sum_one == ascii_sum_two):
            anagram_words.append(word)
    
    return anagram_words
```

That was easy



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

First plan:
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

Second plan
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
Problem of 2nd plan:
It doesn't detect 2 as prime number
It still doesn't detect if a number is negative

Third Plan
```python
def is_prime(num):
    len_num = len(str(num))

    not_prime_indicator = [0, 2, 4, 5, 6, 8]  # ends with
    if (len_num >= 2):
        if (str_num[-1] in not_prime_indicator):
            return False
    else:  # Assumes digit length is 1
        if (num % 2) != 0:
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
^ Problem of Third Plan:
So I'm assuming here that a prime has only two factors
Problem: The added thing with print_factors takes a very long time! This is because numbers can go up to millions and it scans every digit with `print_factors` function
Wait but I only made it so that only less than numbers will go through that 

Fifth Plan:
Okay so I came back to third plan and revised it a lil bit.
```python
def is_prime_for_smallNumbers(x):
    temp = []
    for i in range(1, x + 1):
        if x % i == 0:
            temp.append(x)
    if 1 in temp:
        return True
    return False


def is_prime(num):
    str_num = str(num)
    len_num = len(str_num)

    not_prime_indicator = [0, 2, 4, 5, 6, 8]  # ends with
    if (len_num >= 2):
        if (int(str_num[-1]) in not_prime_indicator):
            return False
    else:  # Assumes digit length is 1
        if (is_prime_for_smallNumbers) == 0:
            return True

    # Turn each digit into list and sum all of digits
    sum_digits = sum([int(x) for x in str(num)])
    if ((sum_digits % 3) != 0):
        return False

    # Assumes integer is a prime
    return True


is_prime(234234)
```

The thing is, every number has a `1 * the number itself` factor

Sixth Plan
We're just going to remove the function and just tell the computer what single digits that's not a prime
```python
not_prime_digit = [0, 4, 6, 8, 9]
```

```python
def is_prime(num):
    if num < 0:
        return False
    
    str_num = str(num)
    len_num = len(str_num)

    not_prime_indicator = [0, 2, 4, 5, 6, 8]  # ends with
    prime_digit = [2, 3, 5, 7]
    not_prime_digit = [0, 1, 4, 6, 8, 9]
    if (len_num >= 2):
        last_digit = int(str_num[-1])
        if (int(str_num[-1]) in not_prime_indicator):
            return False
    else:  # Assumes digit length is 1
        if num in prime_digit:
            return True
        elif num in not_prime_digit:
            return False

    # Turn each digit into list and sum all of digits
    sum_digits = sum([int(x) for x in str(num)])
    if ((sum_digits % 3) == 0):
        return False

    # Assumes integer is a prime
    return True
```


Okay, so we have solve the first digits
Problems;
73 is prime: False should equal True
41 is prime: False should equal True
5099 is prime: False should equal True
And it doesn't recognize negative numbers
- [ ] find more ways to recognize a prime

Seventh Plan
Okay, we're almost there! :D
We have solved, excluding negative numbers, the small numbers

Now big numbers are having inaccuracy.
such as this
```python
Incorrect answer for n=1760751331: True should equal False
Incorrect answer for n=4670413: True should equal False
```
What's interesting is my code returns `True` for all big numbers. 

Okay, so we're going to go get some scratch of our old plan
- take out the square root of the number.
-   List all the prime numbers below this square root value 
    How do we find the prime numbers below the square root value?
    Will it be memory friendly? Since we're dealing with large numbers
        I guess note, the square root number of the highest number I got is `41961`, that's a lot of prime numbers to compare and divide. ==NOT A GOOD IDEA PLAN==
- divide the given number by all these listed prime numbers.
    - Is the given number the original number and not the square root of the numbeR?
-  If the number is divided by any of the prime numbers less than its square root value, then it is not a prime number; otherwise, it is prime.
```python

```


Okay, this is where I view solutions. It seems like large numbers just doesn't work with my code. 
Final Code:
```python
def is_prime(num):
    if num < 0:
        return False
    
    str_num = str(num)
    len_num = len(str_num)

    not_prime_indicator = [0, 2, 4, 5, 6, 8]  # ends with
    prime_digit = [2, 3, 5, 7]
    not_prime_digit = [0, 1, 4, 6, 8, 9]
    if (len_num >= 2):
        if (int(str_num[-1]) in not_prime_indicator):
            return False
    else:  # Assumes digit length is 1
        if num in prime_digit:
            return True
        elif num in not_prime_digit:
            return False

    # Turn each digit into list and sum all of digits
    sum_digits = sum([int(x) for x in str(num)])
    if ((sum_digits % 3) == 0):
        return False

    # Assumes integer is a prime
    return True
```

A code solution I view
```python
from math import sqrt

def is_prime(num):
    if num <= 1:
        return False
    i = 2
    while i <= sqrt(num):    
        if num%i == 0:
            return False
        i += 1
    return True 
```
Comments: This is much cleaner and shorter than my code wtf. Fuckin amazing
My analysis:
```python
if num <= 1:
    return False
```
^ Yeah definetly makes sense as 1, 0 and negative numbers are not prime.

```python
i = 2
while i <= sqrt(num):
    mod = num % i
    if mod == 0:
        return False  # Not Prime
    i += 1
return True  # Prime
```
1. He set the `i` with `2`
2. The condition to end the loop is when `i` is greater than square rooted number  
3. Inside the loop, the original number is `moduled` by `i`
4. If `mod` is equals to `0`, then return False
5. otherwise, increment `i` by 1

1. Why is the `i` set to `2`?
Ans: Probably because the first prime number is `2`
2. No comment yet
3. Why do we `mod` the original num by `i`?
Ans: 
4. Why is it that when `mod` is equal to `0`, it's not a prime?
5. Also why the hell do we increment `i` by 1?

Maybe the purpose of the loop is to get the listed prime numbers, then check if any of those prime numbers is divisible by the given number. But then 

Maybe it uses this 
- take out the square root of the number.
-   List all the prime numbers below this square root value 
- divide the given number by all these listed prime numbers.
-  If the number is divided by any of the prime numbers less than its square root value, then it is not a prime number; otherwise, it is prime.

My understanding of the solution:
So it checks every number, then if its divisible by that number, then it's not a prime. If all numbers under the square rooted number isn't divisible by the original number, then it's a prime. So basically he skipped the finding of prime numbers less than the square root value and instead use all the numbers under the square rooted value. 



Fourth Plan
Okay, let's go back to the basics. How do we know if a number is a prime?
There's numbers that ends with... and that is not a prime number
```python
[0, 2, 4, 5, 6, 8]
```

How do we know if a number is a prime
- Well, we got the factors. And the factors of a number compromises of two numbers
    Not efficient so this is not a good method
Okay I read this online
"Have students take a calculator and key in the number to determine whether it is prime. 
The number should divide into a whole number. 
    For example, take the number 57. 
    Have students divide the number by 2. 
    They will see that the quotient is 27.5, which is not an even number. 
    Now have them divide 57 by 3. 
    They will see that this quotient is a whole number: 19. 
    So, 19 and 3 are factors of 57, which is, then, not a prime number."

Let's try translating this into a code
```python
def is_prime(num):
    quotient = num / 2

    quotient = num / 3

    # If there's a single 1 number of factor, then that's prime
    if 1 in [factor1, factor2]:
        return True
```
Okay, it didn't work. 





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