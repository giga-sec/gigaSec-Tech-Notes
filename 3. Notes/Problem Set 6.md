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
Basically the goal of DNA profiling is to have a certain piece of human body analyzed and compared by a certain person to identify if that certain piece of human body belongs to that certain person.

Given a sequence of DNA, how can forensic investigators identify to whom it belongs?

DNA is really just a sequence of nucleotides
Each nucleotide of DNA contains 
- one of four different bases: adenine (A), cytosine (C), guanine (G), or thymine (T)

Some portions of this sequence (i.e., genome) are the same, or at least very similar, across almost all humans, but other portions of the sequence have a higher genetic diversity and thus vary more across the population.

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
Well, imagine that 
you looked through the DNA sequence for 
-> longest consecutive sequence of repeated `AGAT`s 
-> you found  longest sequence was `17` repeats long. 
-> IF you then found that
    longest sequence of `AATG` is `22` repeats long and, 
    longest sequence of `TATC` is `19` repeats long, 
-> THEN that would provide pretty good evidence that the DNA was Bob’s. 

Of course, it’s also possible that once you take the counts for each of the STRs, it doesn’t match anyone in your DNA database, in which case you have no match.



## References
1. 