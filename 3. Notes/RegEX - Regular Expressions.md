        [[MOC Programming]]

# RegEX - Regular Expressions
Created:  [[2022-07-16]]
Tags: #fleeting 

---
**Everything is essentially a character**
**We are writing patterns to match a specific characters or strings**.
It's helpful not to think of it as matching letters
Because characters includes letters, numbers and anything in ASCII Table

## special metacharacters
- used in regular expressions that can be used to match a specific type of character

`\d` -> used to place any digit from `0-9`

### Matches any character
**wildcard** represented by the `.` (dot)
`...\.` Matches only the period

### Matching Specific Characters
`[abc]` will only match single letter `a`, `b`, or `c` 
`[^abc]` inverse expression, match any _single_ character _except for_ the letters a, b, or c.


### Character Ranges
Uses dash
`[0-6]` means match characters from `0` to `6`
`[^n-p]` match any single character except for letters `n` to `p`

Multiple Character Ranges can be used as well
`[A-Za-z0-9]` 


## Websites to learn Regex
1.  Use [https://regexr.com/](https://regexr.com/). You can paste an expression at the top, mouse over each highlighted section, and it will explain what that part does. It's a great way to decipher hieroglyphics into something you can start to understand.
        
1.  Complete [https://regexone.com/](https://regexone.com/). It's a great interactive introduction to regular expressions that should fill any gaps in your knowledge. You have to fill in the regex that satisfies the named matches.
    
3.  Complete [https://regexcrossword.com/](https://regexcrossword.com/). It's a “reverse regex” crossword web game where you have to type the string that satisfies the expressions in all of the row and column headers. (See [https://regexcrossword.com/howtoplay](https://regexcrossword.com/howtoplay).)
    
4.  Look at common regex patterns and try to understand them. Paste some from [https://projects.lukehaas.me/regexhub/](https://projects.lukehaas.me/regexhub/) into [regexr.com](https://regexr.com) and hover over each group in the regex to help figure out anything you're not familiar with. Start with the shortest examples that you don't yet understand.

