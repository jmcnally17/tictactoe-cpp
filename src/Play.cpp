#include <iostream>
#include "../include/Play.h"

void play(std::string board[3][3])
{
  int playerTurn = 1;
  while (true)
  {
    makeMove(board, playerTurn);
    displayBoard(board);
    if (hasAPlayerWon(board))
    {
      declareWinner(playerTurn);
      break;
    }
    else if (hasBoardBeenFilled(board))
    {
      std::cout << "\nIt's a draw!\n";
      break;
    }
  }
}
