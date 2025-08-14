# **Rock, Paper, Scissors Game in Python**
This is a classic Rock, Paper, Scissors game implemented in Python. It's a simple, command-line-based game where you play against the computer.

## **✨ Features**
- ```Simple Interface:``` Easy to play directly in your terminal.

- ```Player vs. Computer:``` Test your luck against a computer opponent that chooses its move randomly.

- ```Clear Instructions:``` The game tells you which keys to press for Rock, Paper, or Scissor.

- ```Win/Loss/Draw Logic:``` The game automatically determines and displays the outcome of each round.

- ```Input Validation:``` If you enter an invalid character, the game will notify you and exit gracefully.

🚀 Getting Started
All you need is Python installed on your system to play this game.

Prerequisites
Python 3.x

Running the Game
Save the code as a Python file (e.g., game.py).

Open your terminal or command prompt.

Navigate to the directory where you saved the file.

Run the script with the following command:

python game.py

룰 How to Play
When you run the script, you will be prompted to enter your choice.

Type one of the following and press Enter:

r for Rock

p for Paper

s for Scissor

The game will display your choice and the computer's randomly selected choice.

The winner of the round will be announced, and the game will end.

🔬 Code Logic
The game's logic is based on a simple numerical comparison:

A dictionary maps the player's input ('r', 'p', 's') to numerical values (1, -1, 0).

The computer randomly selects one of these numerical values.

The winner is determined by comparing these two numbers. The specific logic (yc - c) == 2 or (yc - c) == -1 cleverly covers the "losing" conditions (e.g., Paper vs. Scissor, Scissor vs. Rock). Any other non-draw outcome is a win.
