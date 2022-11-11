#include <iostream>
#include "../include/make_move.h"

void makeMove(std::string board[3][3], int &playerTurn)
{
  askToMove(playerTurn);
  std::string cell;
  std::cin >> cell;
  if (cell == "1")
  {
    checkIfCellIsValid(board, 0, 0, playerTurn);
  }
  else if (cell == "2")
  {
    checkIfCellIsValid(board, 0, 1, playerTurn);
  }
  else if (cell == "3")
  {
    checkIfCellIsValid(board, 0, 2, playerTurn);
  }
  else if (cell == "4")
  {
    checkIfCellIsValid(board, 1, 0, playerTurn);
  }
  else if (cell == "5")
  {
    checkIfCellIsValid(board, 1, 1, playerTurn);
  }
  else if (cell == "6")
  {
    checkIfCellIsValid(board, 1, 2, playerTurn);
  }
  else if (cell == "7")
  {
    checkIfCellIsValid(board, 2, 0, playerTurn);
  }
  else if (cell == "8")
  {
    checkIfCellIsValid(board, 2, 1, playerTurn);
  }
  else if (cell == "9")
  {
    checkIfCellIsValid(board, 2, 2, playerTurn);
  }
  else
  {
    std::cout << "Invalid input!\n";
  }
}
