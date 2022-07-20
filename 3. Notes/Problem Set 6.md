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
Given a sequence of DNA, how can forensic investigators identify to whom it belongs?

DNA is really just a sequence of nucleotides
Each nucleotide of DNA contains 
- one of four different bases: adenine (A), cytosine (C), guanine (G), or thymine (T)

Some portions of this sequence (i.e., genome) are the same, or at least very similar, across almost all humans, but other portions of the sequence have a higher genetic diversity and thus vary more across the population.

Short Tandem Repeats (STRs)
- High Genetic Diversity
- short sequence of DNA
- 






## References
1. 