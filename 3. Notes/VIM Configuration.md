[[VIM 101]]

# VIM Configuration
Created:  [[2022-07-21]]
Tags: #fleeting 

---
`:set number` to show line numbers
`:set expandtab` to turn tabs to spaces
`:set tabstop=4` to have four spaces when pressing tab
https://stackoverflow.com/questions/234564/tab-key-4-spaces-and-auto-indent-after-curly-braces-in-vim


In nvim
Base configuration is at `~/config/nvim/init.lua`





https://www.shortcutfoo.com/blog/top-50-vim-configuration-options/




make gvim treat wrapped line as new line
gk and gj move up/down by visual line instead of text line. You could map j and k to these using

```
noremap j gj
noremap k gk
```

Some people prefer to only setup those maps for specific filetypes, in which case you'd want something like

```
au FileType html,tex noremap <buffer> j gj
au FileType html,tex noremap <buffer> k gk
```
## Moving around through wrapped lines

Unlike many text editing environments, 
Vim makes a distinction between displayed lines, and numbered lines. When `wrap` is enabled, each numbered line might be split across more than one display lines. The `k` and `j` keys move up and down by numbered lines. If you want to move the cursor up and down by display lines instead, you can use the commands `gk` and `gj` instead.

Hitting two keys in quick succession feels slow compared to pressing a single key whilst holding down a modifier key. I have the following in my .vimrc file:

vmap <D-j> gj
vmap <D-k> gk
vmap <D-4> g$
vmap <D-6> g^
vmap <D-0> g^
nmap <D-j> gj
nmap <D-k> gk
nmap <D-4> g$
nmap <D-6> g^
nmap <D-0> g^


## References
1. 