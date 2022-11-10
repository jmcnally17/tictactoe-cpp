#include <iostream>

bool hasBoardBeenFilled(std::string board[3][3])
{
  bool condition1 = board[0][0] != "1";
  bool condition2 = board[0][1] != "2";
  bool condition3 = board[0][2] != "3";
  bool condition4 = board[1][0] != "4";
  bool condition5 = board[1][1] != "5";
  bool condition6 = board[1][2] != "6";
  bool condition7 = board[2][0] != "7";
  bool condition8 = board[2][1] != "8";
  bool condition9 = board[2][2] != "9";
  if (condition1 && condition2 && condition3 && condition4 && condition5 && condition6 && condition7 && condition8 && condition9)
  {
    return true;
  }
  return false;
}