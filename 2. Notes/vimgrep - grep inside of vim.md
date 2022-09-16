[[VIM 101]]

# vimgrep - grep inside of vim
Created:  [[2022-07-09]]
Tags: #fleeting 

---
#### Abstract:


---
:grep  
To use grep and regex inside vim. 


As the doc say:
```
Vim has two ways to find matches for a pattern: Internal and external.
```

In a nutshell, `:vimgrep` uses Vim's grep mechanism to read and find in files. `:grep` uses an external commands to achieve the same job.

The `/` search is for the current buffer only, whereas `:[vim]grep` search through a pattern of files, allowing you to search in an entire project at once.

Have a look at `:h grep` for more information.

`/<word_to_search>`    search FORWADS for a pattern

`?<word_to_search>`   search BACKWARDS for a pattern

`n`               Search in same direction

`N`               Search in opposite direction


### Basic Find and Replace

In Vim, you can find and replace text using the `:substitute` (`:s`) command.
```vi
:[range]s/{pattern}/{string}/[flags] [count]
```

The command searches each line in `[range]` for a `{pattern}`, and replaces it with a `{string}`. `[count]` is a positive integer that multiplies the command.

For example, to search for the first occurrence of the string ‘foo’ in the current line and replace it with ‘bar’, you would use:
```vi
:s/foo/bar/
```

To replace all occurrences of the search pattern in the current line, add the `g` flag:
```vi
:s/foo/bar/g
```

To confirm each substitution, use the `c` flag:

```vi
:s/foo/bar/gc
```

```output
replace with bar (y/n/a/q/l/^E/^Y)?
```


You can also use [regular expressions](https://linuxize.com/post/regular-expressions-in-grep/) as a search pattern. The command bellow replaces all lines starting with ‘foo’ with ‘Vim is the best’:

```output
:%s/^foo.*/Vim is the best/gc
```

The `^` (caret) symbol matches the beginning of a line and `.*` matches any number of any characters.













### References
1. 