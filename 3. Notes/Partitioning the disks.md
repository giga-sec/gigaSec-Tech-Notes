

# Partition the disks
Created:  [[2022-07-15]]
Tags: #fleeting 

---
Required Partitions
- Root Directory
- UEFI mode
- EFI system partition


`lsblk` checks if your SSD has already been used
`cfdisk <device_name>`
`device_name` like `/dev/sda`


Volume
Block Device -> (disk, partition, LVM logical volume)
that contains a mountable file system



The partitioning scheme is stored in partition table
- Master Boot Record (MBR)
- GUID Partition Table (GPT)

## [[Types of Partition Table]]




