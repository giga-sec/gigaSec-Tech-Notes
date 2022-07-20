[[Week 6 - Python]]

# Problem Set 6 
Created:  [[2022-07-16]]
Tags: #fleeting 

---
## Credit
American Express  
- 15-digit numbers, 
- number starts with 34 or 37


MasterCard 
- 16-digit numbers,
- number starts with 51, 52, 53, 54, 55


Visa  
- 13 or 16-digit numbers.
- Number starts with 4


## Readability
Coleman-Liu Index
```Python
S = "average number of sentences per 100 words in the text"
L = "average number of letters per 100 words in the text"
index = 0.0588 * L - 0.296 * S - 15.8
```
Example
The text the user inputted has 
65 letters, 4 sentences, and 14 words. 
65 letters per 14 words 
    is an average of about 464.29 letters per 100 words 
    because 65 / 14 * 100 = 464.29 
4 sentences per 14 words 
    is an average of about 28.57 sentences per 100 words 
    (because 4 / 14 * 100 = 28.57). 

Plugged into the Coleman-Liau formula, a
nd rounded to the nearest integer, 
we get an answer of 3 
    because 0.0588 * 464.29 - 0.296 * 28.57 - 15.8 = 3
    so this passage is at a third-grade reading level.


- [x] count the number of letters, words, and sentences in the text
- [x] Word = any sequence of characters separated by spaces should count as a word, 
- [x] Sentence =  period, exclamation point, or question mark indicates end of a sentence
- [x] Letters = I guess spaces aren't included in letters
average_letters = (letters / words) * 100
average_sentences = (sentences / words) * 100


- [x] Let's first make a counte for word, sentence and letters
- [x] Get the average
- [ ] Plugged it into Coleman_liau Formula



## DNA profiling
### Explanation of the concept
Basically the goal of DNA profiling is to have a certain piece of human body analyzed and compared by a certain person to identify if that certain piece of human body belongs to that certain person.

Matching   STR counts can be used to identify who a sample of DNA belogns to 

Given a sequence of DNA, how can forensic investigators identify to whom it belongs?

DNA is really just a sequence of nucleotides
Each nucleotide of DNA contains 
- one of four different bases: adenine (A), cytosine (C), guanine (G), or thymine (T)


Short Tandem Repeats (STRs)
- High Genetic Diversity
- short sequence of DNA bases
- tends to repeat consecutively numerous times at specific locations
![[Pasted image 20220720143606.png]]
^ Alice has the STR `AGAT` repeated four times in her DNA, 
^ Bob has the STR `AGAT` repeated five times.


Using multiple STRs, rather than just one, 
- improves the accuracy of DNA profiling


So 
IF -> two DNA samples match in the number of repeats for each of the STRs,
THEN -> the analyst can be pretty confident they came from the same person.


### What does a DNA database look like?
```cs
name,AGAT,AATG,TATC
Alice,28,42,14
Bob,17,22,19
Charlie,36,18,25
```
`.csv` file above ^    // `C#` is the syntax to add color highlighting
Alice has a DNA sequence `AGAT` repeated for `28` times
Alice also has `AATG` repeated `42` times
Bob has `TATC` repeated `19` times


### So given a sequence of DNA, how might you identify to whom it belongs? 
Well, imagine that you have a pair of sequence of DNA
you analyzed that pair of DNA and compared it to the DNA database 
-> IF you then found that
    longest sequence of `AGAT` was `17` repeats long. 
    longest sequence of `AATG` is `22` repeats long and, 
    longest sequence of `TATC` is `19` repeats long, 
-> THEN, looking at the DNA database. It matches with the DNA database of BOB. Which is a  pretty good evidence that the sequence of DNA was Bob’s. 

->ELSE:
it doesn’t match anyone in your DNA database, 
in which case you have no match.

Your task is to write a program that will 
- take a sequence of DNA 
- CSV file containing STR counts for a list of individuals  
- then output to whom the DNA (most likely) belongs.


### What to do
#### Open CSV file
- opens the CSV file and read its contents into memory.
- [ ]  store each line of data into a data structure

#### Open the DNA sequence
- open the DNA sequence and read its contents into memory.
- [ ] store each line into a data structure

#### Compute Longest Run
For each of the STRs 
Notice that we’ve defined a helper function for you, `longest_match`, which will do just that!
- [x] Where should I find out the consecutive repeats
    - [x] It says CSV file yet the file already contains how many repeats the person has
    - [x] Its most likely the `.txt` file, but I maybe wrong
- [x] Calculate how many times each STR repeats consecutively
    - [ ] Use `longest_match()` function here ^
    - [ ] Longest_match = DNA sequence and an STR as inputs, returns the maximum number of times that the STR repeats.
    - [ ] How do we store the counts of RSA?
        - [ ] How can we have it so that it remembers the data being stored and increments when needed
        - [ ] And make it flexible to any length of headers 
- [ ] Compare the counts against every row in the CSV file to look for a match
- [ ] What does sequence mean?
- [ ] What does subsequence mean?
- [ ] Why does this thing below matter? 
    --> longest run of consecutive repeats of STR in DNA sequence

The biggest value of the repeated texts is the 
 -> longest run of consecutive STR

For each position
keep checking successive substrings
until STR no longe repeats

See if STR matches once, then see if STR matches twice
Okay, so what does `STR` contain?
What value should the `STR` be? 
So `STR` is the `headers` of the DNA database
- Maybe what we could do is get the list of `headers` in the DNA database
    - ^ This will act as a list of `STR`
- Then starting from index 0, till the length of the STR


#### Printing Results
IF -> STR counts match exactly with any of the individuals in the CSV file, 
THEN -> your program should print out the name of the matching individual.
ELSE IF -> STR counts do not match exactly with any of the individuals in the CSV file,
THEN ->  your program should print `No match`.
ASSUME -> assume that the STR counts will not match more than one individual.

- [x] Code: Implement the command line argument code
- [x] Learn about CSV
- [x] Learn about open and read files



Done:
#### Command Line Argument
Takes 1st command-line arg the name of a `.csv` file
- Inside of the `.csv` File -> STR counts for a list of individuals
Takes 2nd command-line arg name of `.txt` file
- Inside of `.txt` file -> the DNA sequence to identify

IF -> program executed with incorrect number of command-line arguments,
THEN -> program print error message of your choice (with `print`). 

IF -> correct number of arguments are provided, 
THEN -> read on ASSUME
ASSUME -> 
    1st argument is indeed the filename of a valid CSV file 
    2nd argument is the filename of a valid text file.



## References
1. 