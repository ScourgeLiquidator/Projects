# **Tic-Tac-Toe Game in C**
This repository contains a simple, text-based, single-player Tic-Tac-Toe game written in the C programming language. You play against a computer opponent that makes random moves.

## **✨ Features**
- Player vs. Computer: Play a full game against an AI opponent.

- Symbol Selection: Choose to play as either 'X' or 'O'. The computer will take the other symbol.

- Interactive Board: A clear 3x3 grid is displayed in the console after every move.

- Win/Loss/Tie Detection: The game automatically detects and announces if you win, lose, or if the game ends in a tie.

- Input Validation: Prevents you from making a move in a cell that is already occupied.

- Randomized AI: The computer's moves are randomized, providing a different experience each time you play.

## **🚀 Getting Started**
Follow these instructions to compile and run the game on your local machine.

**Prerequisites**
You need a C compiler, such as GCC, installed on your system.

**Compilation**
1. Save the code as a .c file (e.g., tictactoe.c).

2. Open your terminal or command prompt.

3. Navigate to the directory where you saved the file.

4. Compile the code using the following command:


```gcc tictactoe.c -o tictactoe```

**Running the Game**
After successful compilation, run the executable file from your terminal:


```./tictactoe```

## **룰 How to Play**
1. Run the program to start the game.

2. You'll be prompted to choose your symbol ('O' or 'X').

3. The game board will be displayed. The cells are indexed from 0 to 2 for both rows and columns.

4. Enter the row and column number for your move when prompted.

5. After your move, the board will be updated, and the computer will make its turn.

6. The game continues until one player gets three of their symbols in a row (horizontally, vertically, or diagonally), or until all nine cells are filled, resulting in a tie.

## **🔬 Code Breakdown**
The program is structured into several key functions:

- '''main()''': This is the entry point of the program. It handles the main game loop, player input, turn management, and calls other functions to manage the game state.

- display(char x[3][3]): Takes the 2D character array representing the game board and prints it to the console with formatting.

- checkWin(char x[3][3]): Scans the board after each move to check for any of the eight possible winning combinations. It returns 1 if a win is detected and 0 otherwise.

- random1(): This function generates a random and valid move for the computer. It iterates until it finds a cell that is not already occupied.
