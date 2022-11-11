#include <iostream>
#include "../include/check_if_cell_is_valid.h"

void checkIfCellIsValid(std::string board[3][3], int a, int b, int &playerTurn)
{
  if (board[a][b] != "X" && board[a][b] != "O")
    fillCell(board, a, b, playerTurn);
  else
    std::cout << "That cell is already taken!\n";
}
