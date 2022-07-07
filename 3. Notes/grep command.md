# grep, global regular expression print
Created:  [[2022-07-06]]
Tags: #fleeting 

---
### `grep    "TEXT TO SEARCH"    filename.txt`

### Lingo
grep means **G**lobal **RE**gular **E**xpression **P**rint
regex means **REG**ular **EX**pression. 
A “regular expression” 
- text string 
- describes a specific search pattern.




By default, "case" matters
To ignore “case”, basically search for upper/lower-case,  
`-i` or `--ignore-case` option.
`grep -i "license" GPL-3`



Search every line 
DOES NOT CONTAIN THE WORD `the` in BSD file.
```
grep -v "the" BSD
```


You can add line number
`-n`

you could also just combine it with existing command
`-vn`

Basic Regular Expressions explained

Literal Matches
The previous commands above, You were searching for basic regular expressions which matched the exact string of characters `GNU` and `the`. 
Patterns that exactly specify the characters to be matched are called “literals” because they match the pattern literally, character-for-character. It is helpful to think of these as matching a string of characters rather than matching a word. This will become a more important distinction as you learn more complex patterns. All alphabetical and numerical characters (as well as certain other characters) are matched literally unless modified by other expression mechanisms.

Anchor Matches
For instance, using anchors, you can specify that you only want to know about the lines that match `GNU` at the very beginning of the line. To do this, you could use the `^` anchor before the literal string.
```
grep "^GNU" GPL-3
```


Similarly, you use the `$` anchor at the end of a pattern to indicate that the match will only be valid if it occurs at the very end of a line.
This command will match every line ending with the word `and` in the `GPL-3` file:
```
grep "and$" GPL-3
```


Conclusion: Very similar as how VIM uses the commands as well



### Matching Any Character

The period character (.) is used in regular expressions to mean that any single character can exist at the specified location.

For example, to match anything in the `GPL-3` file that has two characters and then the string `cept`, you would use the following pattern:
`grep "..cept" GPL-3`

Output
```
use, which is precisely where it is most unacceptable.  Therefore, we
infringement under applicable copyright law, except executing it on a
tells the user that there is no warranty for the work (except to the
License by making exceptions from one or more of its conditions.
form of a separately written license, or stated as exceptions;
  You may not propagate or modify a covered work except as expressly
  9. Acceptance Not Required for Having Copies.
```


### Bracket Expressions

By placing a group of characters within brackets (`\[` and `\]`), you can specify that the character at that position can be any one character found within the bracket group.

For example, to find the lines that contain `too` or `two`, you would specify those variations succinctly by using the following pattern:

```
grep "t[wo]o" GPL-3
```

```
Outputyour programs, too.
freedoms that you received.  You must make sure that they, too, receive
  Developers that use the GNU GPL protect your rights with two steps:
```



you can specify a range of characters instead of individually typing every available character.
This means that if you want to find every line that begins with a capital letter, you can use the following pattern:
```
grep "^[A-Z]" GPL-3
```


Due to some legacy sorting issues, it is often more accurate to use POSIX character classes instead of character ranges like you just used.

To discuss every POSIX character class would be beyond the scope of this guide, but an example that would accomplish the same procedure as the previous example uses the `\[:upper:\]` character class within a bracket selector:

```
grep "^[[:upper:]]" GPL-3
```





`*`, which means “repeat the previous character or expression zero or more times”.
To find each line in the `GPL-3` file that contains an opening and closing parenthesis, with only letters and single spaces in between, use the following expression:

```
grep "([A-Za-z ]*)" GPL-3
```



### References
1. https://www.digitalocean.com/community/tutorials/using-grep-regular-expressions-to-search-for-text-patterns-in-linux