#include <iostream>

void fillCell(std::string board[3][3], int a, int b, int &playerTurn)
{
  if (playerTurn == 1)
  {
    board[a][b] = "X";
    playerTurn++;
  }
  else
  {
    board[a][b] = "O";
    playerTurn--;
  }
}