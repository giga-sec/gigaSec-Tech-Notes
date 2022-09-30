[[MOC Technology]]

# GIT Basics
Created:  [[2022-05-09]]
Tags: #fleeting  

---
Git synchronization 
https://medium.com/analytics-vidhya/how-i-put-my-mind-under-version-control-24caea37b8a5

[[HTTPS vs SSH, what to choose in github]]

How can I remove a commit on GitHub?
https://stackoverflow.com/questions/448919/how-can-i-remove-a-commit-on-github

Create a new repository or initializes the directory with git.
`git init`

"Working Directory"     which holds the actual files
"Index"                          is the staging area
"HEAD"                         points to the last commit you've made

From "Working Directory" to "Index"
`git add <filename>`
`git add *`

"Index" to "HEAD"
`git commit -m "Commit Message"`


For GUI Access
`gitk`



`git add -u`
```bash
# stage the changed files
git add file1.md file2.md

# take a snapshot of the staging area (anything that's been added)
git commit -m "my snapshot"

# push changes to github
git push --set-upstream origin my-branch
```








[How can I make Git "forget" about a file that was tracked, but is now in .gitignore?](https://stackoverflow.com/questions/1274057/how-can-i-make-git-forget-about-a-file-that-was-tracked-but-is-now-in-gitign)
[`git update-index`](https://www.git-scm.com/docs/git-update-index) does the job for me:
```
git update-index --assume-unchanged <file>
```

Doesn't work with folders so use files

**Note:** This solution is actually independent on `.gitignore` as gitignore is only for untracked files.



https://docs.github.com/en/get-started/getting-started-with-git/setting-your-username-in-git








### References
1. https://rogerdudler.github.io/git-guide/