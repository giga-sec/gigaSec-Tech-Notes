[[MOC Technology]]

# MOC Technical Writing
This MOC is dedicated to things that relate to

[[Context affects the meaning of the word]]

[[Parts of Speech - Pronouns, Preposition, Conjunction, Transition and more]]

---
Comedy writers seek the funniest results
Horror writers strive for the scariest
**Technical writers aim for the clearest.**  It focuses on being clear and concise.

## Choosing the right words
[[Define new terms that might be unfamiliar to your target audience]]


[[Use Terms Consistently]]
Once you've named a component `thingy`, don't rename it `thingamabob`


[[Use Acronyms Properly]]
Format: **Expanded Word (Acronym)**
Example: **Telekinetic Tactile Network** (**TTN**)


[[Pronouns]]
Use pronouns sparingly as they can be confusing


https://developers.google.com/tech-writing/one/words

---
## Use Active Voice frequently 
Use **==active voice==** most of the time and sparingly use **passive voice**. 
Readers often mentally convert **passive voice** to **==active voice==**. 
Why subject your readers to extra processing time? 


[[Active Voice]]
actor + verb + target

Sentences that start with [[imperative verb]] are typically in active voice, even though there's no explicit mention of an actor.
instead, sentences that start with an [[imperative verb]] imply an actor and that actor is **you**.
for example
1.  **open** the configuration file.
2.  **set** the frombus variable to false.


Passive Voice Sentence = target + verb + actor
> The mat was sat on by the cat.
- target: mat
- verb: sat on
- actor: the cat

![[Pasted image 20220907104144.png]]


### Easily identify passive VOICE by looking for a passive VERB with a proposition
**Passive verbs** typically have the following formula:
*[[form of be]]* + **[[past participle verb]]**
-   *was* **interpreted**
-   *is* **generated**
-   *is* **frozen**

The following examples combine the **passive verb** and the **==[[preposition]]==**:
-   *was* **interpreted** ==**as**==  
-   *is* **generated** ==**by**==  
-   *is* **frozen** ==**by**==  


## How to create clear sentences
### Choose strong verbs
Example:
"The system generates compiler error when a semicolon is missing at the end of a statement."
    -> Compilers issue errors when you omit a semicolon at the end of a statement.

This are weak verbs below
-   *[[form of be]]*: 
-   occur
-   happen
That said, a *[[form of be]]* is sometimes the best choice of verb, so don't feel that you have to eliminate every form of _be_ from your writing.


### Reduce There is/are
> There is a variable called `met_trick` that stores the current accuracy.
> Better: A variable `met_trick` that stores the current accuracy.


> There are two disturbing facts about Perl you should know.
> You should know two disturbing facts about Perl.

Replacing "There is" with a meaningful subject (such as **clients**) creates a clearer experience for the reader:
> There is no guarantee that the updates will be received in sequential order.
> > Clients might not receive the updates in sequential order.


[[Exercise of Reduce There is-are]]


Minimize Certain Adjectives and Adverbs
Adjectives and adverbs perform amazingly well in fiction and poetry.
Grass can become **prodigal** and **verdant**.

Technical Documentation should be just focused on giving education, not marketing material

> Setting this flag makes the application run screamingly fast.

Screamingly fast sure does catch an attention but it feeds readers with marketing speak
Use numbers when needed to.
> Setting this flag makes the application run 225-250% faster.

----

### Focus each sentence on a single idea / thought / concept

> The late 1950s was a key era for programming languages because IBM introduced Fortran in 1957 and John McCarthy introduced Lisp the following year, which gave programmers both an iterative way of solving problems and a recursive way.

Breaking the long sentence into a succession of single-idea sentences yields the following result:

> The late 1950s was a key era for programming languages. IBM introduced Fortran in 1957. John McCarthy invented Lisp the following year. Consequently, by the late 1950s, programmers could solve problems iteratively or recursively.



When you see an embedded list of items or tasks within a long sentence, 
consider refactoring that sentence into a bulleted or numbered list. 

"""
    To alter the usual flow of a loop, you may use either a **break** statement (which hops you out of the current loop) or a **continue** statement (which skips past the remainder of the current iteration of the current loop).
"""
When you see the [[conjunction]] **or** in a long sentence, (like the sentence above)
consider refactoring that sentence into a bulleted list. (Example below)
"""
    To alter the usual flow of a loop, call one of the following statements:
    -   `break`, which hops you out of the current loop.
    -   `continue`, which skips past the remainder of the current iteration of the current loop.
"""

[[Exercise Convert Long sentences into lists]]



### Eliminate or reduce extraneous words
> An input value greater than 100 causes the triggering of logging.

Turns into
> An input value greater than 100 triggers logging.
[[Exercise Eliminate Extra Words]]

## Subordinate Clause
Reduce Subordinate Clause
A **clause** is an independent logical fragment of a sentence, which contains an actor and an action. Every sentence contains the following:
-   a main clause
-   zero or more subordinate clauses

Python is an interpreted programming language, which was invented in 1991.
-   main clause: Python is an interpreted programming language
-   subordinate clause: which was invented in 1991

Common words that introduce subordinate clauses:
-   which, that, because
-   whose, until, unless
-   since
When editing, scrutinize subordinate clauses. Keep the `one sentence = one idea` formula in mind. Do the subordinate clauses in a sentence _extend_ the single idea or do they _branch off_ into a separate idea? If the latter, consider dividing the offending subordinate clause(s) into separate sentences.


`That` and `Which`
Use `that` for when main clause can't live without the subordinate clause
Example: Fortran is perfect for mathematical calculations **that** don't involve linear algebra.

`Which` for when subordiante clause isn't that important
Example: Python is an interpreted language, **which** Guido van Rossum invented.

---
Lists and Tables

[[Exercise in Lists]]

To make an effective list
Keep items in a list parallel
Meaning it must be consistent in formatting:
    - If it's a sentence, all items must be sentence
    - If first word is capitalized, all items must start with capitalized word
    - If an active voice is used, all items must use active voice




Start sentences in numbered list with [[imperative verb]]s.

[[Exercise in Parallel]]

When introducing a list, start off with a short concise description that tells the context of the list
The following list identifies key performance parameters:
Take the following steps to install the Frambus package:
The following table summarizes our product's features against our key competitors' features:


---
The opening sentence is the most important sentence of any paragraph. 
Busy readers focus on opening sentences and sometimes skip over subsequent sentences. Therefore, focus your writing energy on opening sentences.

Use the whole paragraph as a decision factor on writing the opening sentence.


Focus each paragraph on a single topic
Restrict each paragraph to the current topic. 
Don't describe what will happen in a future topic or what happened in a past topic. 
When revising, any sentence that doesn't directly relate to the current topic should be 
- ruthlessly delete 
- or move to another paragraph 



Don't make paragraphs too long or too short

Readers generally welcome paragraphs containing three to five sentences, but will avoid paragraphs containing more than about seven sentences. When revising, consider dividing very long paragraphs into two separate paragraphs.

Conversely, don't make paragraphs too short. If your document contains plenty of one-sentence paragraphs, your organization is faulty. Seek ways to combine those one-sentence paragraphs into cohesive multi-sentence paragraphs or possibly into lists.


Answers what, why, and how
Good paragraphs answer the following three questions:
1.  **What** are you trying to tell your reader?
2.  **Why** is it important for the reader to know this?
3.  **How** should the reader use this knowledge? Alternatively, how should the reader know your point to be true?
![[Pasted image 20220911165736.png]]
