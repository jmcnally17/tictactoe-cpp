#include <iostream>

void makeXMove(std::string board[3][3], int &playerTurn)
{
  int cell;
  std::cout << "Player 1, please pick a cell from 1 to 9:\n";
  std::cin >> cell;
  switch (cell)
  {
  case 1:
    if (board[0][0] != "X" && board[0][0] != "O")
    {
      board[0][0] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
    break;
  case 2:
    if (board[0][1] != "X" && board[0][1] != "O")
    {
      board[0][1] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
    break;
  case 3:
    if (board[0][2] != "X" && board[0][2] != "O")
    {
      board[0][2] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
    break;
  case 4:
    if (board[1][0] != "X" && board[1][0] != "O")
    {
      board[1][0] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
    break;
  case 5:
    if (board[1][1] != "X" && board[1][1] != "O")
    {
      board[1][1] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
    break;
  case 6:
    if (board[1][2] != "X" && board[1][2] != "O")
    {
      board[1][2] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
    break;
  case 7:
    if (board[2][0] != "X" && board[2][0] != "O")
    {
      board[2][0] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
    break;
  case 8:
    if (board[2][1] != "X" && board[2][1] != "O")
    {
      board[2][1] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
    break;
  case 9:
    if (board[2][2] != "X" && board[2][2] != "O")
    {
      board[2][2] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
    break;
  default:
    std::cout << "Invalid input\n";
    break;
  }
}