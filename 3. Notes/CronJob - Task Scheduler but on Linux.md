[[Linux Fundamentals]]

# Task Scheduler on Linux
Created:  [[2022-06-22]]
Tags: #literature  

---
Cron is a [[Daemons in Linux]]

Crontab is one of the processes that is started during boot, 
which is responsible for facilitating and managing cron jobs. 
A crontab is simply a special file. 

`cron` is the name of the tool, 
`crontab` is the file that lists the jobs that cron will be executing,  
`cronjob`, jobs. yes, that's it, jobs.


Use https://crontab-generator.org for beginners to automatically create a syntax for you. 
More -> https://crontab.guru


## Syntax of Crontab:
`<m> <h> <dom> <mon> <dow> <Actual command to be executed>`
- dom -> Day Of Month
- mon -> Month
- dow -> Day Of Week   `0 - 6` values

doy  -> Day Of Year


**==Don’t leave any of the fields blank==**.
So `*` is for empty value?????????????
It signify all possible values
Ans: Means task should be repeated no matter the date or the month




---
One time task scheduling in Linux -> https://tecadmin.net/one-time-task-scheduling-using-at-commad-in-linux/ 


To edit the config of cron
-> `etc/crontab`   <- For system wide 
-> `etc/cron*`   like `cron.daily` `cron.hourly` ....
wait,
there's also `crontab -e`


Different Cron job config files
- System Wide Crontab
    Runs to all users
    Can only be changed with root privileges
- User Crontab
    Jobs only applies to that particular user?????


Cron sucks, Here's why
-> Shortest time input is only `60 seconds`
-> No auto-retry
-> Cron jobs can’t be distributed to multiple computers on a network.
-> Cron doesn't alert you if cronjobs fail or never start.

## [[Cronjob Operators]]

We continue next time
How to test if cronjob worked
or we could say how to add an `.sh` file in cronjob






### References
1. https://www.hostinger.ph/tutorials/cron-job#What_Is_a_Cron_Job 