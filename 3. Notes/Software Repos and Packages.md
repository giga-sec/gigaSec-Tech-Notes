[[Linux Fundamentals]]

# Software Repos and Packages
Created:  [[2022-06-22]]
Tags: #fleeting 

---
`DEB` packages for Debian/Ubuntu
`RPM` for Fedora/Suse


`.appimage` is universal software package format
[[appimage file installer in linux]]








When developers wish to submit software to the community, 
they will submit it to an  "apt" repository. 
If approved, their programs and tools will be released into the wild. 

When using the`ls`command on a Ubuntu 20.04 Linux machine, 
these files serve as the gateway/registry. 
![](https://assets.tryhackme.com/additional/linux-fundamentals/part3/apt1.png)


**Managing Your Repositories (Adding and Removing)**

Normally we use the apt command to install software onto our Ubuntu system. 
The `apt` command is a part of the package management software also named apt. 
Apt contains tools that allows us 
- to manage packages/sources of our software 
- to install or remove software


## Adding and removing repository 
`add-apt-repository` 
Whilst you can install software through the use of package installers such as `dpkg`, 
### Benefits of apt 
- IF -> whenever we update our system
- THEN -> repository that contains softwares that we add also gets checked for updates


## Example
we're going to add the text editor Sublime Text to our Ubuntu machine 
as a repository as it is not a part of the default Ubuntu repositories. 
When adding software, the integrity of what we download is guaranteed by the use of what is called GPG (Gnu Privacy Guard) keys. 
These keys are essentially a safety check from the developers saying, "here's our software". 
If the keys do not match up to what your system trusts and what the developers used, then the software will not be downloaded.

So, to start, we need to add the GPG key for the developers of Sublime Text 3.

**1.** Let's download the GPG key and use apt-key to trust it:  
`wget -qO - https://download.sublimetext.com/sublimehq-pub.gpg | sudo apt-key add -`

**2.** Now that we have added this key to our trusted list, we can now add Sublime Text 3's repository to our apt sources list. A good practice is to have a separate file for every different community/3rd party repository that we add.

**2.1.** Let's create a file named **sublime-text.list** in **/etc/apt/sources.list.d** and enter the repository information like so:

![[sources1.png]]

**2.2.** And now use Nano or a text editor of your choice to add & save the Sublime Text 3 repository into this newly created file:

![[Pasted image 20220622150102.png]]

**2.3.** After we have added this entry, we need to update apt to recognise this new entry -- this is done using the `apt update` command

**2.4.** Once successfully updated, we can now proceed to install the software that we have trusted and added to apt using `apt install sublime-text`

Removing packages is as easy as reversing. This process is done by using the `add-apt-repository --remove ppa:PPA_Name/ppa` command or by manually deleting the file that we previously fulfilled. Once removed, we can just use `apt remove [software-name-here]` i.e. `apt remove sublime-text`












### References
1. 