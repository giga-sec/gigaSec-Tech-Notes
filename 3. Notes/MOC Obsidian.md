[[+Home]]

# MOC Obsidian
Created:  [[2022-07-06]]
Tags: #fleeting 

---
## Search syntax

### Combining sub-queries

-   Words in the search query separated by space will be searched independently in each note. For example `foo bar` will find a note that includes both `foo` and `bar` anywhere in it.
-   `"Quoted strings"` can be used to search multiple consecutive words separated by space, or in other words, a phrase. So, searching for `"foo bar"` with quotes will only find notes that include those words next to each other. You can use backslash `\"` to escape double quotes if you actually want to search for a string that includes quotes. And `\\` will do the same for backslash.
-   Boolean operations can be used. Use `OR` to match one or another. Use `-` to negate a query. The space character is used for boolean "and".
    -   For example: `foo OR bar` will find all notes that contain either of those words, they don't have to be in the same note. `foo -bar` will find all notes that contain `foo`, but not if they also contain `bar`.
-   Parenthesis can be used to group boolean operations. For example `((a OR b) (c OR d))`. This can be useful when crafting complex searches to make sure things happen in the order you want.
-   Regular expressions (regex) can now be used in search. Use forward slash to denote a regular expression. For example: `/[a-z]{3}/`. Obsidian accepts the JavaScript flavor regular expressions. You can learn more about it [here](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Regular_Expressions).

### Search operators

Several special operators are available. Some operators allow nesting queries using parenthesis, for example: `file:("to be" OR -"2B")`. You can use `-` to exclude specific results from search, for example: `foo -tag:#bar`.

-   `file:(...)` will perform the following subquery on the file name. For example: `file:.jpg`. If you use Zettelkasten-style UIDs, this can be useful for narrowing a time range, for example `file:202007`for files created in July of 2020.
-   `path:(...)` will perform the following subquery on the file path, absolute from the root. For example: `path:"Daily Notes/2020-07"`.
-   `content:(...)` will perform the following subquery on the file content. For example: `content:"happy cat"`.
-   `match-case:(...)` and `ignore-case(...):` will override the case sensitive match logic for the following subquery.
-   `tag:` will search for your specified tag within a file, for example `tag:#work`. This is faster and more accurate than searching for the tag in plaintext `#work`, as it uses the cached information and ignores text in code blocks and sections that aren't markdown text.
-   `line:(...)` will perform the subquery on a line-by-line basis, rather than a file-by-file basis. For example, if you search for `foo bar`, this could match a file that has `foo` in the first paragraph and `bar` in the last paragraph. Searching for `line:(foo bar)` will only match if `foo` and `bar` are on the same line.
-   `block:(...)` will perform the subquery on a block-by-block basis, where each block defined as a markdown block, typically separated by empty lines or list items. This is expensive computationally as it requires parsing each file, which means this is likely slower than other modes.
-   `section:(...)` will perform the subquery on a section-by-section basis, where each section is the text between two headings, including the first heading.
-   `task:(...)` will perform the subquery only on each [task](https://help.obsidian.md/How+to/Format+your+notes#Task%20list) and on a block-by-block basis. Use `task:""` to match all tasks.
-   `task-todo:(...)` will perform the subquery only on each _uncompleted_ [task](https://help.obsidian.md/How+to/Format+your+notes#Task%20list) and on a block-by-block basis. Use `task-todo:""` to match all uncompleted tasks.
-   `task-done:(...)` will perform the subquery only on each _completed_ [task](https://help.obsidian.md/How+to/Format+your+notes#Task%20list) and on a block-by-block basis. Use `task-done:""` to match all completed tasks.












### References
1. 