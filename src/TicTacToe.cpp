#include <iostream>
#include "../include/TicTacToe.h"

int main()
{
  std::cout << "Welcome to tic-tac-toe!\n\n";
  std::string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
  int playerTurn = 1;

  displayBoard(board);

  while (true)
  {
    makeMove(board, playerTurn);
    displayBoard(board);
    if (hasAPlayerWon(board))
    {
      std::cout << "You win!\n";
      break;
    }
    else if (hasBoardBeenFilled(board))
    {
      std::cout << "It's a draw!\n";
      break;
    }
  }
}