#include <iostream>
using namespace std;

// Define the game board and the current player
char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char currentPlayer = 'X';

// Draw the game board
void drawBoard() {
  // Loop over the rows and columns of the board and print each cell
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

// Check if a move is valid
bool isMoveValid(int row, int col) {
  // Check if the row and column are within the bounds of the board
  if (row < 0 || row > 2 || col < 0 || col > 2) {
    return false;
  }
  // Check if the cell is empty
  if (board[row][col] != ' ') {
    return false;
  }
  return true;
}

// Check if a player has won the game
bool checkForWin() {
  // Check each row and column for three in a row
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
      return true;
    }
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
      return true;
    }
  }
  // Check the diagonals for three in a row
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
    return true;
  }
  if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
    return true;
  }
  return false;
}

// Switch the current player
void switchPlayer() {
  if (currentPlayer == 'X') {
    currentPlayer = 'O';
  } else {
    currentPlayer = 'X';
  }
}

// Make a move
void makeMove() {
  int row, col;
  // Get the row and column from the user
  cout << "Player " << currentPlayer << "'s turn. Enter row and column (e.g. 1 2): ";
  cin >> row >> col;
  row--;
  col--;
  // Check if the move is valid, and if it is, update the board
  if (isMoveValid(row, col)) {
    board[row][col] = currentPlayer;
  } else {
    cout << "Invalid move. Please try again.\n";
    makeMove();
  }
}

// The main function
int main() {
  // Draw the initial game board
  drawBoard();
  // Loop until a player wins the game
  while (!checkForWin()) {
    // Switch to the next player
    switchPlayer();
    // Get a move from the current player
    makeMove();
    // Draw the updated game board
    drawBoard();
  }
  // Print the winner
  cout << "Player " << currentPlayer << " wins!\n";
  return 0;
}
