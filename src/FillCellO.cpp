#include <iostream>

void fillCellO(std::string board[3][3], int a, int b, int &playerTurn)
{
  board[a][b] = "O";
  playerTurn--;
}