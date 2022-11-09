#include <iostream>

void makeMove(std::string board[3][3])
{
  int cell;
  std::cout << "Please pick a cell from 1 to 9\n";
  std::cin >> cell;
  switch (cell)
  {
  case 1:
    board[0][0] = "X";
    break;
  case 2:
    board[0][1] = "X";
    break;
  case 3:
    board[0][2] = "X";
    break;
  case 4:
    board[1][0] = "X";
    break;
  case 5:
    board[1][1] = "X";
    break;
  case 6:
    board[1][2] = "X";
    break;
  case 7:
    board[2][0] = "X";
    break;
  case 8:
    board[2][1] = "X";
    break;
  case 9:
    board[2][2] = "X";
    break;
  default:
    std::cout << "Invalid input\n";
    break;
  }
}