        [[MOC Programming]]

# RegEX - Regular Expressions
Created:  [[2022-07-16]]
Tags: #fleeting 

---
**Everything is essentially a character**
**We are writing patterns to match a specific characters or strings**.
It's helpful not to think of it as matching letters
Because characters includes letters, numbers and anything in ASCII Table


You have to use `\` to match characters
- `?` -> `\?`
- `.` -> `\.`

## special metacharacters
- used in regular expressions that can be used to match a specific type of character

`\d` -> match any single digit
`\d+` -> match all digits!


### Matches any character
**wildcard** represented by the `.` (dot)
`...\.` Matches only the period

### Matching Specific Characters
`[abc]` will only match single letter `a`, `b`, or `c` 
`[^abc]` inverse expression, match any _single_ character _except for_ the letters a, b, or c.


### Character Ranges
Uses dash
`[0-6]` means match characters from `0` to `6`
`[^n-p]` match any **single** character except for letters `n` to `p`

Multiple Character Ranges can be used as well
`[A-Za-z0-9]` 
Copy Pasted: An example of this is the alphanumeric _\w_ metacharacter which is equivalent to the character range `[A-Za-z0-9]` and often used to match characters in English text.


### Quantifiers - Repetition of Characters 
`star *`, 
`plus +`, 
`repetition {1,2}` 
optional `?`

#### Specific Repetition
`z{3,5}` Find any `z` with  `three` to `five` repeats 
`z{5}`, Find any `z` with `five` repeats

#### Repetition
Kleene Star -> `*` 0 or more 
Kleene Plus -> `+` 1 or more
Example
`\d*` to match any number of digits,
`a+` (one or more a's), 
`[abc]+` (one or more of any a, b, or c character)

#### Optional Characters
`ab?c`
matches strings with `abc` or `ac`
because `b` is optional


### Whitspaces 
whitespace `\s`
For more specific whitespace
- space `␣`
- tab `\t`
- new line `\n`
- carriage return `\r`  


### Metacharacters
`^` hat
`^success` match only a line that BEGINS with  `success`
It's different `^` hat that's used inside of `[]` for excluding characters

`$` dollar sign
`success$` match only a line that END with `success`

We can combine the two
`^Mission: successful$`
match the full string that 
- starts with 'Mission' AND
- ends with 'successful'.


### Capturing 
#### Groups
For instance
`^(IMG\d+\.png)$`  to capture and extract full filename
`^(IMG\d+)\.png$` to extract only filename and not extension

#### Capture
Nested groups are read from left to right in the pattern, 
with the first capture group being the contents of the first parentheses group, etc.


all the quantifiers including the star _*_, plus _+_, repetition _{m,n}_ and the question mark _?_ can all be used within the capture group patterns.


### Conditionals
`cats|dogs` 
match strings with cats or dogs


### Other Extra Characters



## Websites to learn Regex
1.  Use [https://regexr.com/](https://regexr.com/). You can paste an expression at the top, mouse over each highlighted section, and it will explain what that part does. It's a great way to decipher hieroglyphics into something you can start to understand.
        
1.  Complete [https://regexone.com/](https://regexone.com/). It's a great interactive introduction to regular expressions that should fill any gaps in your knowledge. You have to fill in the regex that satisfies the named matches.
    
3.  Complete [https://regexcrossword.com/](https://regexcrossword.com/). It's a “reverse regex” crossword web game where you have to type the string that satisfies the expressions in all of the row and column headers. (See [https://regexcrossword.com/howtoplay](https://regexcrossword.com/howtoplay).)
    
4.  Look at common regex patterns and try to understand them. Paste some from [https://projects.lukehaas.me/regexhub/](https://projects.lukehaas.me/regexhub/) into [regexr.com](https://regexr.com) and hover over each group in the regex to help figure out anything you're not familiar with. Start with the shortest examples that you don't yet understand.

