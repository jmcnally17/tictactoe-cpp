#include <iostream>

void fillCellX(std::string board[3][3], int a, int b, int &playerTurn)
{
  board[a][b] = "X";
  playerTurn++;
}
