[[Window Tiling Manager in Linux]]

# i3
Created:  [[2022-07-19]]
Tags: #fleeting 

---
`Mod + s` to put into stacking mode
`Mod + e` to put into tiling mode
`Mod + w` to put into tab mode



## Transparency on i3
`i3` by default doesn't support transparent windows
needs a `3rd-party compositor` 
`compton`
You can add fade effects when switching to workspaces or focused windows



## Status Bar on i3
https://github.com/polybar/polybar
you can add a third party editor of status bar
`i3blocks`
First is copy the `i3blocks` default config to your i3 folder
for instance
`cp /etc/i3blocks.conf ~/.config/i3`
Then
You make the i3 config tell where the copied config folder is located
```
 bar {
    status_command i3blocks -c ~/.config/i3/i3blocks.conf
}
```

You'd also have to do something with the `volume` script to work
Head to directory of where i3blocks script lives
then execute this `./volume 5 pulse`
Okay `./volume 5 pulse` doesn't work
The folder directory of where scripts are
`/usr/share/i3blocks`
we put in command



## Remapping the Power Button
The power button isn't handled by the window manager, it's handled [by systemd](https://wiki.archlinux.org/index.php/Power_management#ACPI_events)

For example this is in my `/etc/systemd/logind.conf`

```
[Login]
HandlePowerKey=hibernate
HandleLidSwitch=ignore
IdleAction=suspend
IdleActionSec=20min
```

i3 doesn't do power-management on it's own. I have used `xfce4-power-manager` in the past. (Use `xfce4-power-manager-settings` to edit settings.)



## You can add custom launchers
`rofi`




## Config File 
`.config/i3/config`

Everytime you edit something in the config file
Do `Mod+R` to restart


Put this command in your i3 config file
Always run an app at start
`exec <appname>` like `exec firefox`
Always run a command after login or i3 restart
`exec_always`


## Workspaces
Every window in i3 has a `class`
To find the class, 
-> type `xprop` in terminal
-> click the application that you want to find info about


### Icons on Workspaces
Use Font Awesome





## References
1. https://i3wm.org/docs/userguide.html