#include <iostream>
#include "../include/fill_cell.h"

void fillCell(std::string board[3][3], int a, int b, int &playerTurn)
{
  playerTurn == 1 ? fillCellX(board, a, b, playerTurn) : fillCellO(board, a, b, playerTurn);
}