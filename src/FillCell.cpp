#include <iostream>
#include "../include/FillCell.h"

void fillCell(std::string board[3][3], int a, int b, int &playerTurn)
{
  if (playerTurn == 1)
    fillCellX(board, a, b, playerTurn);
  else
    fillCellO(board, a, b, playerTurn);
}
