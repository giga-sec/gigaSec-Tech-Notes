

# Time difference of dual booting between Linux and Windows
Created:  [[2022-08-06]]
Tags: #fleeting 

---
But why??
## Computer has TWO MAIN CLOCKS 

### Hardware clock  
    or RTC (real time clock) 
    or CMOS/BIOS clock. 
This clock is outside the operating system, 
It's on your computer’s motherboard. 
It keeps running even if system is powered off.

### System clock 
is inside your operating system.

## So why is there a time difference on dual booting?
**Let's explain how computers read time**
Computer is powered on... 
...then HARDWARE CLOCK is read and used to set the `SYSTEM CLOCK`.  The os then uses `SYSTEM CLOCK`  to tracking time. 

IF -> OS makes any changes to `SYSTEM CLOCK` ( like changing time zone etc ) 
THEN -> `SYSTEM CLOCK` syncs this info to HARDWARE CLOCK.


By default, 
Linux assumes time stored IN hardware clock is `UTC` 
Windows thinks time stored IN hardware clock is `local time`. 


Fix it by
```zsh
timedatectl set-local-rtc 1
```










## References
1. https://itsfoss.com/wrong-time-dual-boot/ 