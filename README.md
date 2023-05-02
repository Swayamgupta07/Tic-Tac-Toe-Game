# Tic-Tac-Toe-Game

This is a C++ program that implements a simple tic-tac-toe game. Here's a brief description of what the program does:

The program defines a 3x3 character array board that represents the tic-tac-toe game board, and a character variable currentPlayer that represents the current player.

The drawBoard() function is defined to print the current state of the game board to the console.

The isMoveValid(int row, int col) function checks if a move is valid by checking if the given row and col values are within the bounds of the board, 
and if the cell at the given position is empty.

The checkForWin() function checks if any player has won the game by checking each row and column for three in a row, and checking the diagonals.

The switchPlayer() function changes the currentPlayer variable from 'X' to 'O' or vice versa.

The makeMove() function prompts the current player to enter a row and column for their move, and then calls isMoveValid() to check if the move is valid.
If the move is valid, the function updates the board array with the current player's character. If the move is not valid,
the function prompts the player to enter a different row and column.

In the main() function, the initial game board is drawn using drawBoard(). The program then enters a loop that continues until checkForWin() returns true.
In each iteration of the loop, the program calls makeMove() to get a move from the current player, updates the game board by calling drawBoard(),
and switches to the next player by calling switchPlayer(). Once checkForWin() returns true, the program prints the winner to the console.





