[[Partitioning the disks]]

# Types of Partition Table
Created:  [[2022-07-16]]
Tags: #fleeting 

---
- Master Boot Record
- GUID Partition Table (GPT)
- partitionless disk
---

## Master Boot Record
- First 512 bytes of a storage device
- Contains OS bootloader
- Storage device's partition table
- Has an important role of boot process under BIOS system
Note:
-> MBR is not located at first partition
-> It's at first sector of device (physical offset 0), before the first partition

### MBR (Bootstrap Code)
-> First 440 bytes of MBR are the [[bootstrap code area]]
-> On Bios, usually contains first stage of boot loader
Tip: The bootstrap code can be backed up, restored from backup or erased [using dd](https://wiki.archlinux.org/title/Dd#Backup_and_restore_MBR "Dd").
#myquestion What's the use of bootstrap code?


### MBR (Partition Table)
-> Other names (DOS or MS-DOS partition table)
Three types of partitions under DOS or MS-DOS partition table
- Primary
- Extended 
    - Logical

#### Primary Partition
- can be bootable
- limited to 4 partitions per disk
IF -> MBR partition table requires MORE THAN 4 partitions
THEN -> 1 Primary partition be replaced by Extended partition with Logical Partion in it 

Tip: Dual booting with Windows will require for Windows to reside in a primary partition.

#### Extended Partitions
- Can be thought of as containers for Logical partitions
- Hard Disk **MUST NOT have MORE THAN 1 Extended parition**
- Extended partition is also counted as a primary partition 
    so IF ->disk has an extended partition, 
    THEN -> only three additional primary partitions are possible 
    MEANING -> (i.e. three primary partitions and one extended partition)
    WHY -> remember, **Primary partition is only limited to 4 partitions per disk**
##### Logical Patterns
- The number of logical partitions residing in an extended partition is unlimited

#### Number Scheming when creating Partition
`sda1` - `sda3` Primary Partition
`sda4` Extended Partition
    `sda5`, `sda6`, `...` Logical Parition

Tip: 
IF -> partitioning MBR disk
THEN -> consider 33 * 512 byte sector (16.5 KiB) of _free unpartitioned spacec_ at end of disk
WHY -> Just in case you want to [convert it to GPT](https://wiki.archlinux.org/title/Gdisk#Convert_between_MBR_and_GPT "Gdisk"). The space is required for GPT headers


## GPT (GUID Partition Table)
- part of the [[UEFI (Unified Extensible Firmware Interface)]] specification
- uses [[GUID (Globally Unique IDentifies)]]

Every start of GUID Partition Table
- starts [[PMBR (Protective Master Boot Record)]]
- ^ Proctects against GPT-Unaware Software
#myquestion What makes a software GPT-Unaware?

[[PMBR (Protective Master Boot Record)]] also contains [[bootstrap code area]]
- ^ used for BIOS/GPT booting with boot loaders that support it.



## Partitionless Disk









## References
1. https://wiki.archlinux.org/title/Installation_guide#Installation