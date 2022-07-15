

# Partition the disks
Created:  [[2022-07-15]]
Tags: #fleeting 

---
Required Partitions
- Root Directory
- UEFI mode
- EFI system partition



Volume
Block Device -> (disk, partition, LVM logical volume)
that contains a mountable file system



The partitioning scheme is stored in partition table
- Master Boot Record (MBR)
- GUID Partition Table (GPT)

## Types of Partition Table
- Master Boot Record
- GUID Partition Table (GPT)
- partitionless disk


### Master Boot Record
- First 512 bytes of a storage device
- Contains OS bootloader
- Storage device's partition table
- Has an important role of boot process under BIOS system
Note:
-> MBR is not located at first partition
-> It's at first sector of device (physical offset 0), before the first partition

#### MBR (Bootstrap Code)
-> First 440 bytes of MBR
-> On Bios, usually contains first stage of boot loader
Tip: The bootstrap code can be backed up, restored from backup or erased [using dd](https://wiki.archlinux.org/title/Dd#Backup_and_restore_MBR "Dd").
#myquestion What's the use of bootstrap code?

#### MBR (Partition Table)
-> Other names (DOS or MS-DOS partition table)
Three types of partitions under DOS or MS-DOS partition table
- Primary
- Extended 
    - Logical

##### Primary Partition
- can be bootable
- limited to 4 partitions per disk
IF -> MBR partition table requires MORE THAN 4 partitions
THEN -> 1 Primary partition be replaced by Extended partition with Logical Partion in it 

##### Extended Partitions
- Can be thought of as containers for Logical partitions
- Hard Disk **MUST NOT have MORE THAN 1 Extended parition**

Extended partition is also counted as a primary partition 
so IF ->disk has an extended partition, 
THEN -> only three additional primary partitions are possible 
Meaning -> (i.e. three primary partitions and one extended partition)
Why -> Because remember, **Primary partition is only limited to 4 partitions per disk**




## References
1. 