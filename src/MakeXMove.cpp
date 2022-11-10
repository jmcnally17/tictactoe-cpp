#include <iostream>

void makeXMove(std::string board[3][3], int &playerTurn)
{
  std::string cell;
  std::cout << "Player 1, please pick a cell from 1 to 9:\n";
  std::cin >> cell;
  if (cell == "1")
  {
    if (board[0][0] != "X" && board[0][0] != "O")
    {
      board[0][0] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
  }
  else if (cell == "2")
  {
    if (board[0][1] != "X" && board[0][1] != "O")
    {
      board[0][1] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
  }
  else if (cell == "3")
  {
    if (board[0][2] != "X" && board[0][2] != "O")
    {
      board[0][2] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
  }
  else if (cell == "4")
  {
    if (board[1][0] != "X" && board[1][0] != "O")
    {
      board[1][0] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
  }
  else if (cell == "5")
  {
    if (board[1][1] != "X" && board[1][1] != "O")
    {
      board[1][1] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
  }
  else if (cell == "6")
  {
    if (board[1][2] != "X" && board[1][2] != "O")
    {
      board[1][2] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
  }
  else if (cell == "7")
  {
    if (board[2][0] != "X" && board[2][0] != "O")
    {
      board[2][0] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
  }
  else if (cell == "8")
  {
    if (board[2][1] != "X" && board[2][1] != "O")
    {
      board[2][1] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
  }
  else if (cell == "9")
  {
    if (board[2][2] != "X" && board[2][2] != "O")
    {
      board[2][2] = "X";
      playerTurn++;
    }
    else
    {
      std::cout << "That cell is already taken!\n";
    }
  }
  else
  {
    std::cout << "Invalid input\n";
  }
}