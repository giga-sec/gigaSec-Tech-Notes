

# bootstrap code area
Created:  [[2022-07-15]]
Tags: #fleeting 

---
#### Abstract:


---
MBR - Master Boot Record
- The first 440 bytes of MBR are the **bootstrap code area**. 
- On BIOS systems it usually contains the `first stage` of the boot loader. 
- The bootstrap code can be backed up, restored from backup or erased [using dd](https://wiki.archlinux.org/title/Dd#Backup_and_restore_MBR "Dd").
#myquestion What do you mean by `first stage?`


[[PMBR (Protective Master Boot Record)]]
- Used for BIOS/GPT booting with boot loaders that support it.








## References
1. https://wiki.archlinux.org/title/Partitioning#Master_Boot_Record_(bootstrap_code)