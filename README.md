Cricket Match Simulation
Overview
This project simulates a cricket match, tracking the performance of 11 players. Each player takes turns to bat, and the program calculates their total score and the number of balls played. It also displays a summary of the match and identifies the man of the match based on the highest score.

Features
Stores information for each player.
Simulates each player's turn, displaying their score per ball.
Indicates when a player is out.
Displays total balls played by each player.
Summarizes the match (Player Name, Score, Balls Played).
Identifies and displays the man of the match.
Instructions
How to Run
Ensure you have a C++ compiler installed.

For Windows, you can use MinGW.
For Linux, you can use g++.
For macOS, you can use Xcode's command line tools.
Compile the program:

sh
Copy code
g++ cricket_match_simulation.cpp -o cricket_match_simulation
Run the executable:

sh
Copy code
./cricket_match_simulation
Sample Output
sql
Copy code
Cricket Match Simulation
========================

1. Babar Azam
Scores per Ball: OUT
Total Score: 0	 Balls Played: 1

2. Naseem Shah
Scores per Ball: 3 6 1 1 1 OUT
Total Score: 12	 Balls Played: 6

...

<<<<<< Match Summary >>>>>>
Player Name	Score	Balls Played
Babar Azam	0	1
Naseem Shah	12	6
...

Man of the Match: Agha Salman
