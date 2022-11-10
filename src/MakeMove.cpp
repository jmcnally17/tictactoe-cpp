#include <iostream>
#include "../include/MakeMove.h"

void makeMove(std::string board[3][3], int &playerTurn)
{
  {
    if (playerTurn == 1)
    {
      makeXMove(board, playerTurn);
    }
    else
    {
      makeOMove(board, playerTurn);
    }
  }
}