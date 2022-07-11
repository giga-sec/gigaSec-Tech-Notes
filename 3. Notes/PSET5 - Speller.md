

# PSET5 - Speller
Created:  [[2022-07-04]]
Tags: #fleeting 

---
Abstract:


---
Theoretically, on input of size _n_, an algorithm with a running time of _n_ is “asymptotically equivalent,” in terms of _O_, to an algorithm with a running time of _2n_. 
Indeed, when describing the running time of an algorithm, we typically focus on the most impactful term (i.e., _n_ in this case, since _n_ could be much larger than 2). 

In the real world, though, the fact of the matter is that **_2n_ feels twice as slow as _n_**.


The challenge ahead of you is to 
- implement the **fastest spell checker you can!** 
By “**fastest,” though, we’re talking actual “wall-clock,” not asymptotic, time**.


Files 
### speller.c 
- spell-check a file after loading a dictionary of words in `dictionary.c` from disk into memory

### dictionary.h
- Prototypes for functions meanwhile, are defined in `dictionary.h`. 
- That way, both `speller.c` and `dictionary.c` can `#include` the file.


Preprocessor Directive
`#define LENGTH 45`
defines a “constant” called `LENGTH` that has a value of `45`. 
Constant in the sense that you can’t change it in your own code. 
`clang` will replace mentions of `LENGTH` in the code with, literally, `45`. 
    

```C
bool check(const char *word);
unsigned int hash(const char *word);
bool load(const char *dictionary);
```
`char *` is what we used to call `string`. 
So those three functions above are essentially just:
```C
bool check(const string word);
unsigned int hash(const string word);
bool load(const string dictionary);
```
And `const`, makes it so that strings passed will not get changed 
you won’t be able to change them accidentally or smtnh


### dictionary.c
global pointer array, `table`
hash table = `struct` called `node` 
Array contains `N` node pointers, `N` = `26`  to match w/ default `hash` function. 
You'll likely increase `N` depending on your own implementation of `hash`

We’ve implemented `load`, `check`, `size`, and `unload`, but only barely, just enough for the code to compile. 
We’ve implemented `hash` with a sample algorithm based on the first letter of the word. 
-> Your job, ultimately, is to re-implement those functions as cleverly as possible so that this spell checker works fast!


### speller.c
```
$ ./speller text
```
will be equivalent to running
```
$ ./speller dictionaries/large text
```

`text` is the file you wish to spell-check. Suffice it to say, the former is easier to type! (Of course, `speller` will not be able to load any dictionaries until you implement `load` in `dictionary.c`! Until then, you’ll see `Could not load`.)






`TIME IN load` represents the number of seconds that `speller` spends executing your implementation of `load`. 
`TIME IN check` represents the number of seconds that `speller` spends, in total, executing your implementation of `check`. 
`TIME IN size` represents the number of seconds that `speller` spends executing your implementation of `size`. 
`TIME IN unload` represents the number of seconds that `speller` spends executing your implementation of `unload`. 
`TIME IN TOTAL` is the sum of those four measurements.

“misspelled” simply mean 
- some word is not in the `dictionary` provided.



----
Alright, the challenge now before you is to 
implement, in order, 
`load`, 
`hash`, 
`size`, 
`check`, 
`unload` 
as efficiently as possible using a hash table
in such a way that `TIME IN load`, `TIME IN check`, `TIME IN size`, and `TIME IN unload` are all minimized.

Do NOT ALTER
- `speller.c`
- `makefile`
- the declarations (i.e., prototypes) of `load`, `hash`, `size`, `check`, or `unload`. 

Can Alter
- `N` value in `dictionary.c`, so that your hash table can have more buckets.


Can add functions
- `dictionary.c`. (and, in fact, must in order to complete the implementations of `load`, `hash`, `size`, `check`, and `unload`)

### Functions in dictionary.c


Steps
-> Open dictionary file
fopen()
make sure its value NULL



-> Read strings from file one at a time
fscanf(file, "%s", word)
fscanf returns EOF once it reaches End Of File

-> Create a new node for each word
Store each of those words in the hash table

Use malloc to each word to store each node
Use this `strcpy("n->word", "Hello")` means Copy hello to n->word

-> Hash word to obtain a hash value (the index)
Function takes string and returns an Index

-> Insert node into hash table at that location
Set the new node to point to the first position in linked list
Then you can point the first position in linked list to point at the new node
    


`check`
- must be case-insensitive -> if `hello` in dictionary, then `check` returns true for all cases `HELLO`, `hElLO`, `heLLO`, `heLlO` 
- Note: All words in dictionary file are in lowercase format
- any variations of case will not be considered misspelled
- Possessives only return true when they are in the dictionary -> `foo` is in `dictionary`, `check` should return `false` given `foo's` if `foo's` is not also in `dictionary`.
- assume that `check` will only be passed words that contain (uppercase or lowercase) alphabetical characters and possibly apostrophes.
- return `true` if word is in dictionary
- Traverse linked list  looking for word (`strcasecmp` is a function that compares strings but ignores casing)




`load`
- loads all of the words in dictionary
- into some sort of data structure (hash table)
Hash Table 
-> is an array of individual linked list

Hash Function
-> assigns a number to every point


`hash`
- take a word and run a hash function on it
- returning some number that corresponds to that word

First one letter is good, but it's not fast
First two letters
or using math to use all letters



`size`
- returns how many words are in your dictionary
- you could imagine that as you're loading the hash table
- you could somehow keep track of the number of words you've added to dictionary so far


`unload`
- any memory allocated to store data in data structure
- will be free up in here



Dictionary File
- Default dictionary has 143,091 words
- From top to bottom, the file is sorted a-z, 
- with only one word per line (each of which ends with `\n`)
- No word is longer than 45 characters,  
- No word appears more than once.
- All words in the file are in lowercase format


# **The hash function you write should ultimately be your own, not one you search for online.**





### References
1. 