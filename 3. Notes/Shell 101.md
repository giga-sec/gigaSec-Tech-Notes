[[Linux Fundamentals]]

# Shell 101
Created:  [[2022-07-23]]
Tags: #fleeting 

---
A shell gives us the ability to interact with kernel, 
Shell allow us to give commands to kernel and receive responses from it 


## `sh`
Drawbacks of `sh shell` or `bourne shell` 
- doesn't have in-built feature for logical/arithmetic operations
- cannot recall previously used commands
- Lacks comprehensive features

`/bin/sh` and `/sbin/sh`. 
Path name of `sh` shell
By default, 
- `#` for ROOT user 
- `$` for NON-root users.

## `bash`
An improve version of `sh shell`
- Can recall previously used commands

`/bin/bash`
By default, 
- `bash-VersionNumber#` for ROOT user 
- `bash-VersionNumber$` for NON-root users.

## `csh` 
- has in-built support for arithmetic operations
- syntax similar to c-programming languange
- the `c shell` or `csh` has aliases feature

`/bin/csh`
By default,
- `hostname#` for ROOT user
- `hostname%` for NON - root user

## `ksh`
`korn shell` is a superset version of `bourne shell`
- allows built-in support for arithmetic operations
- supports scripts made in
    - Bourne shell
    - C Shell
        - while offering string, array and function manipulation 

`/bin/ksh`
`#` for the root user
`$` for the non-root users


## `zsh`
is sh shell extension with tons of improvements for customization




## References
1. 12Gi