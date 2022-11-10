#include <iostream>

void makeOMove(std::string board[3][3], int &playerTurn)
{
  int cell;
  std::cout << "Player 2, please pick a cell from 1 to 9\n";
  std::cin >> cell;
  switch (cell)
  {
  case 1:
    board[0][0] = "O";
    playerTurn--;
    break;
  case 2:
    board[0][1] = "O";
    playerTurn--;
    break;
  case 3:
    board[0][2] = "O";
    playerTurn--;
    break;
  case 4:
    board[1][0] = "O";
    playerTurn--;
    break;
  case 5:
    board[1][1] = "O";
    playerTurn--;
    break;
  case 6:
    board[1][2] = "O";
    playerTurn--;
    break;
  case 7:
    board[2][0] = "O";
    playerTurn--;
    break;
  case 8:
    board[2][1] = "O";
    playerTurn--;
    break;
  case 9:
    board[2][2] = "O";
    playerTurn--;
    break;
  default:
    std::cout << "Invalid input\n";
    break;
  }
}