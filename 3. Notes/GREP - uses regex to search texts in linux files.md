[[Navigate file system - Linux Commands]]

# grep, global regular expression print
Created:  [[2022-07-06]]
Tags: #fleeting 

---
### `grep    "TEXT TO SEARCH"    filename.txt`


### Lingo
grep means **G**lobal **R**egular **E**xpression **P**rint
regex means **REG**ular **EX**pression. 
A “regular expression” 
- text string 
- describes a specific search pattern.
A regular expression or regex is **a pattern that matches a set of strings**. A pattern consists of operators, constructs literal characters, and meta-characters, which have special meaning. GNU grep supports 
three regular expression syntaxes, 
-> Basic, 
-> Extended, 
-> Perl-compatible






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


## Basic Regular Expressions explained
Literal Matches is called to the previous commands above, 
which matched the exact *string of characters* `GNU` and `the`. 
You were searching for basic regular expressions 


### Not helpful to think regex as matching words
Literal
- They match the pattern literally, character-for-character.
- Unless modified by other expression mechanisms.
-> Helpful to think as matching *string of characters* 
-> rather than matching a word. 
Becomes important distinction as you learn more complex patterns. 

Myquestion: What is an expression mechanisms?


### Anchor Matches
Lines that match `GNU` at the very beginning of the line. 
Use `^` anchor before the literal string.
```
grep "^GNU" GPL-3
```


`$` match be valid if occurs at end of line.
Command will match every line ending with the word `and` in the `GPL-3` file:
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


Due to some legacy sorting issues, 
often accurate to use *POSIX character classes* instead of *character ranges* 

Example of POSIX Character classes
An example that accomplish the same procedure as the previous example uses the `\[:upper:\]` character class within a bracket selector:
```
grep "^[[:upper:]]" GPL-3
```




`*`, which means “repeat the previous character or expression zero or more times”.
To find each line in the `GPL-3` file that contains an opening and closing parenthesis, with only letters and single spaces in between, use the following expression:

```
grep "([A-Za-z ]*)" GPL-3
```



### Escaping Meta-Characters
Where you’ll need to search for a literal period or opening bracket, 
especially when working with source code or configuration files. 
Because these characters have special meaning in regular expressions, 
you need to “escape” these characters to tell `grep` that you do not wish to use their special meaning in this case.

You escape characters by using the backslash character (`\`) in front of the character that would normally have a special meaning.


For instance, to find any line that begins with a capital letter and ends with a period, use the following expression which escapes the ending period so that it represents a literal period instead of the usual “any character” meaning:

```
grep "^[A-Z].*\.$" GPL-3
```




## Extended Regular Expressions
A more extensive regular expression language by 
using the `-E` flag or by 
calling `egrep` 

Include all of the basic meta-characters, 
along with additional meta-characters to express more complex matches.

### Grouping
One of the most useful abilities that extended regular expressions open up is the ability to group expressions together to manipulate or reference as one unit.

To group expressions together, wrap them in parentheses. If you would like to use parentheses without using extended regular expressions, you can escape them with the backslash to enable this functionality. This means that the following three expressions are functionally equivalent:

```
grep "\(grouping\)" file.txt
grep -E "(grouping)" file.txt
egrep "(grouping)" file.txt
```

### Alternation
To indicate alternation, use the pipe character `|`. These are often used within parenthetical grouping to specify that one of two or more possibilities should be considered a match.

The following will find either `GPL` or `General Public License` in the text:

```
grep -E "(GPL|General Public License)" GPL-3
```

?? Like an `or` boolean expression?

Alternation can select between more than two choices by adding additional choices within the selection group separated by additional pipe (`|`) characters.

### Quantifiers
To match a character zero or one times, you can use the `?` character. This makes character or character sets that came before optional, in essence.

The following matches `copyright` and `right` by putting `copy` in an optional group:

```
grep -E "(copy)?right" GPL-3
```
The `+` character matches an expression one or more times. This is almost like the `*` meta-character, but with the `+` character, the expression **must** match at least once.

The following expression matches the string `free` plus one or more characters that are not white space characters:
```
grep -E "free[^[:space:]]+" GPL-3
```


### Specifiying Match Repetition

To specify the number of times that a match is repeated, use the brace characters (`{` and `}`). These characters let you specify an exact number, a range, or an upper or lower bounds to the amount of times an expression can match.

Use the following expression to find all of the lines in the `GPL-3` file that contain triple-vowels:

```
grep -E "[AEIOUaeiou]{3}" GPL-3
```

To match any words that have between 16 and 20 characters, use the following expression:

```
grep -E "[[:alpha:]]{16,20}" GPL-3
```




### References
1. https://www.digitalocean.com/community/tutorials/using-grep-regular-expressions-to-search-for-text-patterns-in-linux