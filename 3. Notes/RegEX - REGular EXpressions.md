[[MOC Programming]]

# RegEX - Regular Expressions
Created:  [[2022-07-16]]
Tags: #fleeting 

---
**Everything is essentially a character**
**We are writing patterns to match a specific characters or strings**.
It's helpful not to think of it as matching letters
Because characters includes letters, numbers and anything in ASCII Table


You have to use `\` to match some special characters 
To specifically search for this characters
- `?` -> `\?`
- `.` -> `\.`


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


### [[Quantifiers or Repetition of Characters - RegEX]] 



### Whitespaces 
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


### Capturing Info to Process Them
#### Groups
For instance
`^(IMG\d+\.png)$`  to capture and extract full filename
`^(IMG\d+)\.png$` to extract only filename and not extension

#### Capture
Nested groups are read from left to right in the pattern, 
with the first capture group being the contents of the first parentheses group, etc.

All the quantifiers can be used within capture group patterns
star `*`
plus `+`
repetition `{1,2}` 
optional `?`




### Conditionals
`cats|dogs` 
match strings with cats or dogs


### Other Extra Characters
match **digits** using `\d`, 
match **whitespace** using `\s`, 
match **AlphaNum** using `\w`


UPPERCASE letters of above inverts them
`\D` match non-digit character
`\S` match non-whitespace character
`\W` match non-alpha character (punctuation like that)




[[Websites to learn Regex]]


