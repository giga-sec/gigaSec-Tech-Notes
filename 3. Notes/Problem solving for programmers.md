[[MOC Programming]]

# Problem solving for programmers
Created:  [[2022-07-13]]
Tags: #fleeting 

---
[[Questions to ask when solving a problem]]

We only code when we've thought about how we're gonna approach/solve the problem

Worst thing you could do is
-> immediately start coding after you're presented with a problem


> If I only had an hour to chop down a tree, 
> I would spend the first 45 minutes shapening my axe
> - Abraham Lincoln 


A good way to significantly improve your ability to solve problems
-> Solving code problems 
-> Exposing yourself on different types of problems

15-30 Minutes a day is already good





https://towardsdatascience.com/hands-on-tutorial-how-to-improve-your-problem-solving-skills-as-a-programmer-83f0a8d1082f



Copy pasted to below

# Problem statement: The Alphabet Rangoli

**_Note_**_: This challenge was taken from_ [_HackerRank_](https://www.hackerrank.com/challenges/alphabet-rangoli/problem?isFullScreen=true)_._

You are given an integer, N. Your task is to print an alphabet rangoli of size N. (Rangoli is a form of Indian folk art based on the creation of patterns.)

Different sizes of alphabet rangoli are shown below:

size 3  
  
----c----  
--c-b-c--  
c-b-a-b-c  
--c-b-c--  
----c----  
  
size 5  
  
--------e--------  
------e-d-e------  
----e-d-c-d-e----  
--e-d-c-b-c-d-e--  
e-d-c-b-a-b-c-d-e  
--e-d-c-b-c-d-e--  
----e-d-c-d-e----  
------e-d-e------  
--------e--------

The center of the rangoli has the first alphabet letter a, and the boundary has the alphabet letter (in alphabetical order).

The input to the function is a single line containing **_size_**, which is the size of the rangoli. Your function should return a string made up of each of the lines of the rangoli separated by a newline character (\n).

# Step 1 — Take time to understand the problem

The first step to solving any problem is to understand the problem being solved. This means you’re able to articulate the problem fully in your own words.

Don’t get disheartened if you can’t, it’s part of the process of understanding. When you come across something you can’t articulate clearly then it means there's a gap in your understanding. If you want to be able to solve the problem then you need to fill the gap.

This means you must ask questions.

When working on a problem alone then you have to ask yourself more questions to flesh out what exactly it is you don’t understand — you could also use Google to get a better idea of what exactly it is you’re not understanding about the specific part. If you’re working with a team or consulting someone then this is your chance to ask them questions to fill the voids in your understanding.

The main gist is that you’ve got to take your time to fully understand the problem you have. Doing this will benefit you in the long run and significantly simplify the problem-solving process.

## Application:

Given our alphabet rangoli problem, the first thing we’ve got to do is understand what the problem we’re trying to solve is. Here’s how I’ve articulated it in my own words.

_Given an input to dictate the size, we are to create a function that returns an alphabet rangoli which is an art form from Indian folk that is based on the creation of patterns._

Notice that I clearly described what we expect to go into the function and what is expected to come out. This is because, at a high level, I like to think of problem-solving as taking a certain input and transforming it into a certain output. At the moment, the mapping function is a black box but our next step is to deconstruct what’s going on in the black box.

Another thing I like to do at this step is to draw my own examples with some custom inputs to better understand what would happen. For example, we know this is an alphabet rangoli and the alphabet is only 26 letters, but what would happen if a size greater than 26 was passed? Fortunately, this question was answered for us in the brief but if it wasn’t we’d have to figure out what could happen by asking questions.

**_Note_**_: remember Python is slicing doesn’t take into account the end number so passing 27 would take the first 26 letters._

Here is an example of my drawing:

![](https://miro.medium.com/max/1150/1*Cb6Ry-g3t_sfYk_tygfhZw.png)

**An example drawing of a rangoli when size=4; Image By Author**

I’d draw a few of these to better reinforce my understanding.

# Step 2 — Break the problem down

Every problem is made up of a number of small problems. Breaking a larger problem down into smaller problems to be solved makes the greater less daunting to be approached.

All that needs to be done when the smaller problems are solved is that they need to be joined together. This would result in the solution of the greater problem if you carefully think through the inputs and output at each step.

In essence, what I’m saying is that you should solve the problem on paper or whiteboard before you attempt to solve it with code. Be sure to write out the steps in detail and clearly understand what’s happening.

## Application:

I solved the rangoli problem on paper first by working through the facts of what I’ve designed in the example above. When I had clarity about the facts, I organized them into steps as follows:

**# Description of facts for size=4**  
- we need to get the first n letters of the alphabet so we need access to the full alphabet  
- the center value for the first line is always the nth value and it's padded with "-"; **what's the length of the padding?**   
- the middle line always has the first letter of the alphabet as the middle value and the boundary is always the nth letter  
   --> from L-R: the middle line starts at an and works its way back to a then from a it goes back to N.  
   --> all the letters have a "-" instead of a space between them  
   --> this means the length of all the lines is the length of the middle line; **We must know the length of the middle line before we can draw the other lines.   
-** split the rangoli into halves that is seperated by the middle line.   
- the top line of the upper starts with n in the middle. the next line has n - 1 in the middle and to the left of it is n and to the right of it is n. the next line has n-2 in the middle with the sequence going n-1 then n to the left, and n-1 then n to the right. The next line has n-3 in the middle with the sequence going n-2, n-1, then n to the left and n-2, n-1, then n to the right. Let's sketch this. 

![](https://miro.medium.com/max/1072/1*CdGw170nZh8KXyRgBKn2nA.png)

**Sketch of how the upper half of the rangoli is designed; Image by Author**

- we can seperate the upper half into halves again by drawing a line down the center. This would mean we have a left and a right side

![](https://miro.medium.com/max/1072/1*OfH5NdloGBqnH7Hrepbr4A.png)

**Separating the sketch of how the upper half of the rangoli is designed into halves; Image by Author**

- the left have is going from n to n-i in reverse order and the right side is going from n-i to n  
- the lower half is literaly the same thing as the upper half but its flipped upside down. 

Now that I’ve got the facts I can design the steps.

**The steps  
1. store the letters in the alphabet  
2. get the first n letters of the alphabet  
3. draw the middle line  
4. get the length of the middle line  
5. draw the left side of the upper half and join it to the right side - join the values together by "-" and center n-i and make sure the line is length of middle with the other values made up with "-".   
6. flip the upper half upside down to draw the bottom half  
7. put it all together**

I’ve broken down the problem into 7 smaller problems without using any technical terms. The next step is to figure out how you would technically implement each step.

This means it’s possible to still go deeper into solving this problem because I haven’t gone into much detail. For example, I’ve just written ‘_draw the middle line._’ How am I going to draw the middle line? I didn’t go this much deeper into this solution since I’ve solved problems like this before so I have a clear idea of how to draw the middle line (i.e. to draw the middle line you have to join the reverse of the first n letters to the first n letters (not including a) by a “-” symbol.

If you’re unsure how to do certain steps when you’ve written it out like this then don’t be afraid of taking extra time to further break down how each step will be implemented with pseudocode.

# Step 3 — Execution

Now you’ve solved the problem on paper. All you have to do is implement the same solution you’ve written on paper but translate it into code.

This is where your knowledge of your programming language comes into play. Depending on your environment, you can Google ways to do certain things for example, how to reverse a string or how to take the first n letters of a string.

Since you’ve already got a structure for how to solve the problem, you don’t have to work through the problem from steps 1–7. Start with the easiest steps to get some quick wins under your belt.

When you’ve got your wins then come back to the parts of the problem you find more challenging. Once you’ve solved all of these problems then put it together and you’ve got your solution.

## Application:

Here’s how I solved smaller parts of the problem:

def print_rangoli(n):   
   **# step 1 - store letters of the alphabet**   alphabet = "abcdefghijklmnopqrstuvwxyz"  
     
   **# step 2 - get the first n letters of the alphabet**  
   first_n = alphabet[:n]  
   
   **# step 3 - draw the middle line**  
   middle = "-".join(first_n[::-1] + first_n[1:])   **# step 4 - get the length of the middle line**  
   length_of_middle = len(middle)

To do `step 5` I broke it down into a smaller problem. I created a program and used my name to get the left side and right side.

name = "kurtis"  
n = **len**(name)**for** i **in** range(1, n):   
    # left side  
    **print**(name[n:n-i:-1])**print**("-"* 10)**for** i **in** range(1, n):  
    # right side   
    **print**(name[n-i:n])"""  
s  
si  
sit  
sitr  
----------  
s  
is  
tis  
rtis  
urtis  
"""

Now all I have to do is join the values together by “-” and center the middle value (n-i). Ensure the line is the same length as the middle line with the other values made up with “-”.

name = "kurtis"  
n = **len**(name)middle = "-".join(name[::-1] + name[1:])**for** i **in** range(1, n):   
    # left side  
    **print**("-".join((name[n:n-i:-1] + name[n-i:n]).center(**len**(middle), "-")))"""  
----------s----------  
--------s-i-s--------  
------s-i-t-i-s------  
----s-i-t-r-t-i-s----  
--s-i-t-r-u-r-t-i-s--  
"""

The next step is to translate this solution into the code for our problem:

def print_rangoli(n):   
   **# step 1 - store letters of the alphabet**   alphabet = "abcdefghijklmnopqrstuvwxyz"  
     
   **# step 2 - get the first n letters of the alphabet**  
   first_n = alphabet[:n]  
   
   **# step 3 - draw the middle line**  
   middle = "-".join(first_n[::-1] + first_n[1:])  
     
   **# step 4 - get the length of the middle line**  
   length_of_middle = len(middle)  
     
   **# step 5 - draw upper half**  
   **for** i **in** range(1, n):      
       **print**("-".join((first_n[n:n-i:-1] + first_n[n-i:n]).center(length_of_middle, "-")))   **# step 6 - rotate the upper half**  
   **for** i **in** range(n, 0, -1): # <-- rotation happens here  
       **print**("-".join((first_n[n:n-i:-1] + first_n[n-i:n]).center(length_of_middle, "-")))

Step 7 is to put it all together which means passing a value to it. Let’s pass a size of 4 to our function to see if it matches the pattern we drew above.

print_rangoli(n=4)"""  
------d------  
----d-c-d----  
--d-c-b-c-d--  
d-c-b-a-b-c-d  
--d-c-b-c-d--  
----d-c-d----  
------d------  
"""

problem solved.

# Step 4 — Reflect

There are several ways to solve a problem; Nothing says my current solution to the problem is the best way to solve it. This means now is a good time to reflect on how we went about solving the problem and think about ways you could make your solution more efficient.

One thing I realized immediately is that I didn’t have to write out the whole alphabet manually. I could have simply imported the `string` module and called `ascii_lowercase`.

**import** string alphabet = string.ascii_lowercase  
**print**(alphabet)"""  
abcdefghijklmnopqrstuvwxyz**  
"**

I’d usually spend this time looking at other people's solutions to see how they achieved the same thing.

# Wrap up

Programming requires you to think. Part of the thinking process is decomposing problems into smaller modules to make them easier to solve. The four steps to solving a problem are:

1.  Understand the problem
2.  Break down the problem
3.  Execute
4.  Reflect












### References
1. 