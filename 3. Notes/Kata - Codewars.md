[[MOC Programming]]

# Kata
Created:  [[2022-07-20]]
Tags: #fleeting 

---
https://www.codewars.com/kata/57814d79a56c88e3e0000786/train/python


## Directions Reduction
1. Understand the Problem

Give the 
north +1
south -1

east +1 
west -1

### Examples
In ["NORTH", "EAST", "WEST", "SOUTH", "WEST", "WEST"], 
"NORTH" and "SOUTH" are _not_ directly opposite 
but they become directly opposite 
    after the reduction of "EAST" and "WEST" 
    -> so the whole path is reducible to ["WEST", "WEST"].

In `["NORTH", "SOUTH", "EAST", "WEST"]`, 
the direction `"NORTH" + "SOUTH"` is going north and coming back _right away_.
The path becomes `["EAST", "WEST"]`, 
now `"EAST"` and `"WEST"` annihilate each other, therefore, the final result is `[]` (nil in Clojure).

Not all paths can be made simpler. 
The path ["NORTH", "WEST", "SOUTH", "EAST"] is not reducible. 
"NORTH" and "WEST", 
"WEST" and "SOUTH", 
"SOUTH" and "EAST" 
are not _directly_ opposite of each other and can't become such. 
Hence the result path is itself : ["NORTH", "WEST", "SOUTH", "EAST"].

### Question: 
Isn't ["WEST", "WEST"] reducecs to ["WEST"]???
Okay, so I guess we're only going to reduce the list base on the original list???
Wait no, because in here 
Ans: Okay so it's actually right, WEST WEST since that doesn't make it return to what he was before


Write a function `dirReduc` which 
take an array of strings and 
returns an array of strings with 
    the needless directions removed (W<->E or S<->N _side by side_).


### My understanding

[NORTH, EAST, WEST, SOUTH, WEST, WEST] 6
[NORTH, ~~EAST, WEST~~, SOUTH, WEST, WEST] 4
[~~NORTH, SOUTH~~, WEST, WEST] 2
So it must have a way to check if the left side makes the ting go zero
So we have a dictionary to assign a specific numbers to each direction
We 

```python
dictionary = {
    "NORTH": 1
    "SOUTH": -1
    "WEST": 2
    "EAST": -2 
}

map_list = ["NORTH", "EAST", "WEST", "SOUTH", "WEST", "WEST"]

j = 1  # Default to one because...
length = len(map_list)
for i in range(len(arr)):
    direction = map_list[i]
    next_direction = map_list[j]
    if ((next_direction + dictionary[direction]) == 0):
        # This means that two directions made us go back
        map_list.remove(direction)
        map_list.remove(next_direction)
        continue
    j += 1
```
- [x] Learn how to remove values in list

Also 
NORTH = 1
WEST = 1
SOUTH = -1
EAST = -1
[SOUTH, WEST] makes it `0`

NORTH = 1
SOUTH = -1
WEST = 2
EAST = -2
So [SOUTH, WEST] makes -1 + 2 = `1` and it's not equal to `0` therefore no going back to circles.

Okay, here's a new thing that I learned.
The primary purpose is not to cut off the redundancy of directions
but instead that is the result of making sure that the least path of action is taken.
```python
dictionary = {
    "NORTH": 1,
    "SOUTH": -1,
    "WEST": 2,
    "EAST": -2
}


def dirReduc(map_list):
    i = 0
    j = 1  # Default to one because...
    length = len(map_list)
    while (j < length):
        direction = map_list[i]
        next_direction = map_list[j]

        if ((dictionary[next_direction] + dictionary[direction]) == 0):
            # This means that two directions made us go back
            map_list.remove(direction)
            map_list.remove(next_direction)
            if (i > 0):  # Assures that there is a previous index
                try:
                    previous_direction = map_list[i - 1]
                    direction = map_list[i]  # Update new direction
                    if ((dictionary[previous_direction] + dictionary[direction]) == 0):
                        map_list.remove(previous_direction)
                        map_list.remove(direction)
                        i -= 1
                        j -= 1
                except IndexError:
                    print("Oh No")
            length = len(map_list)
            continue
        i += 1
        j += 1
    return map_list
```

I lacked information, 
I didn't test more examples that's why I had a wrong algorithm 

I found a solution online
```python
def dirReduc(arr):
    dict = {"NORTH":"SOUTH","SOUTH":"NORTH","EAST":"WEST","WEST":"EAST"}
    res = []
    for i in arr:
        if res and dict[i] == res[-1]:
            res.pop()
        else:
            res.append(i)
    return res
```
And what the fuck, that's just it?????????


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

Examples:
1990 is rendered: 
1000=M, 
900=CM, 
90=XC; 
resulting in MCMXC.

2008 is written as 
2000=MM, 
8=VIII; 
resulting into MMVIII. 

1666 uses each Roman symbol in descending order: MDCLXVI.
What the fuck does descending order, 
why the fuck does it do it in descending order????
**arranged in a series that begins with the greatest or largest and ends with the least or smallest**
Okay, that was unnecessary info :/
1666 = MDCLXVI
MDCLXVI = M + DC + LX + VI
MDCLXVI = 1000 + 600 + 60 + 6
MDCLXVI = 1666


**There can't be more than 3 identical symbols in a row.**
```
Symbol    Value
I          1
V          5
X          10
L          50
C          100
D          500
M          1,000
```


My understanding:
So the conversion from Number to Roman Numeral
- Skip any `0` from getting converted

Okay, let's do a conversion with number `seven`
`V` then `II`
`V` for 5 and `II` for 2 and `5 + 2 = 7`
So we'd need some ways that we can recognize what symbol to use for a single digit
```python
n = 7
if (n >= 5) and (n < 10):
    roman_numeral = 'V'
elif (n >= 1) and (n < 5):
    roman_numeral = 'I'
```

Okay then how are we going to make it so that it chooses one `V` and two `I`
We subtract it 
```python
n = 7
roman_numeral = ""

while (n > 0):
    if (n >= 5) and (n < 10):
        n -= 5
        roman_numeral += 'V'  # Concantenate the ting
        
    elif (n >= 1) and (n < 5):
        n -= 1
        roman_numeral += 'I'
```
Okay, this code above only works with numbers less than `10`
Let's try having numbers up to `500`
```python
n = 91
roman_numeral = ""

while (n > 0):
    elif (n >= 100) and (n < 500):
        n -= 100
        roman_numeral += 'C'

    elif (n >= 50) and (n < 100):
        n -= 50
        roman_numeral += 'L'

    elif (n >= 10) and (n < 50):
        n -= 10
        roman_numeral += 'X'

    elif (n >= 5) and (n < 10):
        n -= 5
        roman_numeral += 'V'  # Concantenate the ting
        
    elif (n >= 1) and (n < 5):
        n -= 1
        roman_numeral += 'I'

```
Okay, so the results of the code was 
`LXXXXI` and the real answer is `XCI`
So this is a logical error
So how we might go about translating `91` to roman numeral
`90` 
So how do we translate `90`?
It's `XC` but C is a number more than 100?, and `90` is less than `100`
Okay, so I might have a wrong understanding here
Okay, so every number that is close to the new length of digit gets rule changed
like 
`9`, nine is `5` + four `1` which is `V` and four `I` 
but no, it's `I` and `X` THERFORE `IX`
bruhhh

`1` = `I`

Looking up online here's what I got
Rules to writing Roman Numerals
There are certain rules to be followed if we have to represent a number in roman numerals form. Please check the rules listed below.

-   The value of the symbol is added to itself, as many times as it is repeated. (Eg. II – 2, XX – 20 and XXX – 30).
-   A symbol can be repeated only for three times, for example XXX = 30, CC = 200, etc.\
    Thoughts: Okay, so four symbols like `IIII` is not allowed, therefore numbers like `9` have their ting into `IX` , also number four itself has `IV` 
-   When a symbol of smaller value appears after a symbol of greater value, its values will be added. For Example-  VI = V + I = 5 + 1 = 6.
-   When a symbol of a smaller value appears before a greater value symbol, it will be subtracted. For Example-  IX = X – I = 10 – 1 = 9.
-   The symbol I can be subtracted from V and X only and symbol X can be subtracted from symbols L, M and C only.

-   Symbols V, L, and D are never repeated.
    Thoughts: What??? Why??? Probably because it creates a long ting, idk man.


```
Symbol    Value
I          1
V          5   (Never Repeated)
X          10   
L          50  (Never Repeated)
C          100
D          500  (Never Repeated)
M          1,000
```


Okay, so we're gonna do translate 1909, into individual tings
like 
1000
900
skip because it's `0`
`9`
```python
num = 1909
num = (num // 1000) * 1000
-> 1000
```
So I think
```python
(num // length_of_digits) * length_of_digits
```
We could just get the length_of_digits through
```python
num // 10
count += 1
```
Then we just subtract `length_of_digits` to 1 every iteration of digits

So basically here's the raw plan
```python
num = 1909

# Count Digits
temp = num
count = 0
while (temp > 0):
    temp = temp // 10
    count += 1

# Print each individual tings
while (count > 0):
    print((num // count) * count)
    count -= 1
```


```python
def count_digits(num):
    # Counting starts with 1, meaning 1000 means 4 digits
    count = 0
    while (num > 0):
        num = num // 10
        count += 1
    return count


num = 1909
count = count_digits(num)
while (count > 0):
    # Get the individual digits and leave their number of digits
    multiplier = 10 ** (count-1)
    temp = (num // multiplier) * multiplier

    # Reduce the original number to what the number of digits is
    num -= temp

    # I think this is where we convert the thing into roman numeral
    

    # Since we are going to the next digit, we reduce the count of digits
    count -= 1
```
With this code above, we can now get the individual tings like
`1909` -> `MCMIX`
for 
1000,
900
0
9


Convert `900` to roman numeral
Since its closer to `1000` then we just get the least number of `three digit` which is `100`.
Then we get the roman numeral of `100` so it's `C`
Then we get the roman numeral of `1000`, `M`
So, it's `CM`

Convert `400` to roman numeral
Since it's closer to `500`, then we just get the least number of `three digits` which is `100`
Then we get the roman numeral of `100`, so it's `C`
Then we get the roman numeral of `500`, so its `D`
So it's, `CD`

Roman Numerals/Numbers that are never repeated
5, 50, 500
V, L, D


My Plan:
Okay, we could just have a temp variable that stores the translated numeral ting, if roman numerals are repeated, 
I actually have no idea

We could say
```python
num = 9
list_things = [5, 10, 50, 100, 500, 1000]
count = is how many things in the digit
if num + (1 + (10 ** (count - 1))):
    
```

Okay so let's deal with this problem later
Let's first solve on how we can translate the basic stuffs like 
The 1, 5, 10, 50, 100 ,500, 1000
```
Symbol    Value
I          1
V          5   (Never Repeated)
X          10   
L          50  (Never Repeated)
C          100
D          500  (Never Repeated)
M          1,000
```
- We could use if, else but that's just inefficient
- We could use a dictionary and assign key-valur pair with it
    key being the number and value being the symbol
What else could we do?
I think dictionary is good but I am not familiar with it
- [ ] Is it possible for the key to be a number?
- [ ] How can we search values through dictionary?
- [ ] How can we get that value through dictionary?
```python
# Dictionary Implementation
symbol = {
    1: 'I',
    5: 'V',
    10: 'X',
    50: 'L',
    100: 'C',
    500: 'D',
    1000: 'M'
}
```


Okay, let's say that I have coded the ting above
Now how can we deal with `8`, `23`, `135`, `680`

The only way we can detect numbers in dictionary is through `1, 5, 10, 50, 100, 500, 1000`
So, the idea is to reduce the numbers that matches the numbers in the dictionary?
Then we'd use if-else to do that
`680` reduce to `600` which is already coded
but then `600` reduce to `500` and `100`, that means `V` AND `C`
So basically we subtracted `600` with `100`
Does that mean what we subtracted is also what our roman numeral will be?

Okay we could have a while loop that only stops subtracting when the number being reduced already exists in the `list` of `1, 5, 10, 50...`

So that leaves us with how is the compiler gonna know how much the number is going to be used for subtraction?
Ans: Maybe we could use the length of the digit, 
Like for instance, `80` means two digits, and the lowest number of two digits is `10` therefore 
`80 - 10 = 70` 
`70 - 10 = 60`
`60 - 10 = 50` and 50 is in `1, 5, 10, 50`
so that's where we stop
Okay so how does it spit out the roman numeral?
Ah no, it spits out the numeral base what number we use to subtract the orig number
like `10`, that's `X`
So we have `X` then `X` then `X`
Since it detected it's on list `1, 5, 10, 50...` we stop
So we got `XXX` now what?
How are we going to spit it out that `50` is equal to `L`
Ahh, the dictionary
okay, so the way my algo works
it's gonne be like this
`XXXL`
So okay, how are we able to first make it so that `L` which is `50` is gonna be the first value 
Either we're gonna have to find some way that it detects `50` first 
Or probably we're going to separate it with two variables
the subtracting will be `second_roman = XXX`
then `first_roman = L` is the numbers we detect on dictionary
so, `first_roman + second_roman`, 
but then what if second_roman is empty
    okay so we always default `second_roman = ""`


This logic seems really long and I think is inefficient :/ but idk man
Let's try summarizing my logic
- We're gonna teach the program to understand what the corresponding value is equivalent to a roman numeral letter. We do this by using dictionary
- Then we start chopping the numbers into like `1909` to 100, 900, 00, 9
    - With each chop of numbers, we translate that into roman numeral

The translation of roman numeral
- Okay so, we first find if the number exists in the dictionary. 
    - [ ] How to know if a number exists in the key
    Ans: The has_key() method is a built-in method in Python that returns true if the dict contains the given key, and returns false if it isn't.
    Ans: `If key_name in dictionary` also works 
- If it doesn't then, we subtract the number to its lowest number that is limited by the number of digits( Like 900, the lowest number of that same digits is 100)
    - [ ] So let's first know the length of the digit
        Ans: `10 ** (count-1)`
    
- After subtracting, we translate what number we use to subtract the orig number into roman_numeral, then we store it into a `second_roman` variable
- we then find if the resulting subtracted number exists in dictionary, if it doesn't exist in dictionary, then we repeat the process until we found one.

Finally, if we found the resulting subtracted number in dictionary
We get the value of that which is the letter and put it into `first_roman`

At last, we add `first_roman` and `second_roman` and add it to `final_roman`

We are now then done with our first number (from left)
We move on to the next number and repeat the process

The Code:
```python
def count_digits(num):
    # Counting starts with 1, meaning 1000 means 4 digits
    count = 0
    while (num > 0):
        num = num // 10
        count += 1
    return count


symbol = {
    1: 'I',
    5: 'V',
    10: 'X',
    50: 'L',
    100: 'C',
    500: 'D',
    1000: 'M'
}

def solution(num)

    count = count_digits(num)
    final_roman = ''
    while (count > 0):
        # Get the individual digits and leave their number of digits
        multiplier = 10 ** (count-1)
        chopped_number = (num // multiplier) * multiplier

        # Reduce the original number to what the number of digits is
        num -= chopped_number

        # I think this is where we convert the thing into roman numeral
        first_roman = ''
        second_roman = ''
        while ((chopped_number in symbol) != True):
            lowest_num = 10 ** (count-1)
            chopped_number = chopped_number - lowest_num
            second_roman += symbol[lowest_num]
        first_roman += symbol[chopped_number]
        final_roman += first_roman + second_roman

        # Since we are going to the next digit, we reduce the count of digits
        count -= 1

    return final_roman
```
Conclusion:
What the fuck, the preparation and plan actually worked. 
Wow, even tho the planning of my logic was so long, 
I spent little time on debugging. Fucking great


During Loop
We could have a counter that counts how many repeated consecutive letters there are. 
If it reaches more than three, 
Then we're gonna teach the computer on what to do 
    So for instance, `IIII` will translate to `I` and `V` 
    because `I`'s nearest value that's greater than it is `V`

So we're gonna teach python to 
- Detect when the repeated consecutive letters are more than three
- Know what the repeated consecutive letters are
- Know what the nearest value that's greater than the consecutive ting are
`XXX` -> nearest is `L`
`XL` 

We could let the computer know the repeated value
We could transform the keys into list
Then we are gonna scan that list
If the 

10: 'X',
50: 'L',


```python
first_roman = ''
second_roman = ''
while ((chopped_number in symbol) != True):
    lowest_num = 10 ** (count-1)
    chopped_number = chopped_number - lowest_num
    second_roman += symbol[lowest_num]
first_roman += symbol[chopped_number]
final_roman += first_roman + second_roman
```


I think I have confidence that my code doesn't repeat what doesn't need to be repeated like
V, L, D
5, 50 , 500



Okay stuffs that I'm not sure about
Numbers greater than 1000

The code works, but my logic is so wrong
Final Wrong Solution Code
```python
def count_digits(num):
    # Counting starts with 1, meaning 1000 means 4 digits
    count = 0
    while (num > 0):
        num = num // 10
        count += 1
    return count


symbol = {
    1: 'I',
    5: 'V',
    10: 'X',
    50: 'L',
    100: 'C',
    500: 'D',
    1000: 'M'
}

given_num = 49
count = count_digits(given_num)

final_roman = ''
while (count > 0):
    # Get the individual digits and leave their number of digits
    multiplier = 10 ** (count-1)
    chopped_number = (given_num // multiplier) * multiplier

    # Reduce the original number to what the number of digits is
    given_num -= chopped_number

    # I think this is where we convert the thing into roman numeral
    first_roman = ''
    second_roman = ''
    length_numeral = 0
    while ((chopped_number in symbol) != True):
        lowest_num = 10 ** (count-1)
        chopped_number -= lowest_num
        second_roman += symbol[lowest_num]
        length_numeral += 1
    first_roman += symbol[chopped_number]
    if (length_numeral >= 3):
        # This is where we translate more than 3 characters
        keys_list = symbol.keys()
        for num in keys_list:
            if num > lowest_num:
                second_roman = symbol[num]
                break
    final_roman += first_roman + second_roman

    # Since we are going to the next digit, we reduce the count of digits
    count -= 1

print(final_roman)
```


This is the solution I saw
```python
def solution(n):
    roman_numerals = {1000:'M',
                      900: 'CM',
                      500: 'D',
                      400: 'CD',
                      100: 'C',
                      90: 'XC',
                      50: 'L',
                      40: 'XL',
                      10: 'X',
                      9: 'IX',
                      5: 'V',
                      4: 'IV',
                      1: 'I'
    }
```
Listing each `IX` variation is actually much better ;-;
Why the fuck did I go straight up, let the program go through a logical process to know the `IX` llike those kind of stuffs ;-;
Teaching the program directly that `IX` is equal to `9` is actually much better. Fucking hell man
My mistake was I didn't look for easier solution.








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