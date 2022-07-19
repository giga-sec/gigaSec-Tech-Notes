[[MOC CS50]]

# LAB6 - World Cup
Created:  [[2022-07-14]]
Tags: #fleeting 

---
#### Abstract:


---
Lab 6 World CUp
knockout round = 16 teams.
Each round, team vs another team
The losing teams are eliminated. 
Final Match -> When only two teams remain, 
                       the winner of the final match is the champion.
   
Soccer Teams are givin FIFA Ratings
- represents each team’s relative skill level.
Higher FIFA ratings indicate better previous game results

- [x] Read the code in tournament.py

Todo
Function `simulate_tournament(teams)`
Return -> name of winning team

Function `main()`
-> Read teams into memory from file
->Simulate N tournaments  (Probably use the `simulate_tournamet(teams)` function)
    -> Keep track of win counts 

External FIles
2018m.csv
2019m.csv
The order in which the teams are listed determines which teams will play each other in each round (in the first round, for example, Uruguay will play Portugal and France will play Argentina; in the next round, the winner of the Uruguay-Portugal match will play the winner of the France-Argentina match). 
Conclusion: **So be sure not to edit the order in which teams appear in this file!**

represent each team as a dictionary that contains two values: the team name and the rating. Uruguay, for example, we would want to represent in Python as `{"team": "Uruguay", "rating": 976}`




## References
1. 