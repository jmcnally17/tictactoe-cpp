#include <iostream>
#include "../include/fill_cell.h"

void fillCell(std::string board[3][3],
              int a,
              int b,
              int &playerTurn,
              void (*funcOne)(std::string board[3][3], int a, int b, int &playerTurn) = &fillCellX,
              void (*funcTwo)(std::string board[3][3], int a, int b, int &playerTurn) = &fillCellO)
{
  playerTurn == 1 ? funcOne(board, a, b, playerTurn) : funcTwo(board, a, b, playerTurn);
}
