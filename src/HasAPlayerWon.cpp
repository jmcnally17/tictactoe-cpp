#include <iostream>

bool hasAPlayerWon(std::string board[3][3])
{
  bool condition1 = board[0][0] == board[0][1] && board[0][0] == board[0][2];
  bool condition2 = board[1][0] == board[1][1] && board[1][0] == board[1][2];
  bool condition3 = board[2][0] == board[2][1] && board[2][0] == board[2][2];
  bool condition4 = board[0][0] == board[1][0] && board[0][0] == board[2][0];
  bool condition5 = board[0][1] == board[1][1] && board[0][1] == board[2][1];
  bool condition6 = board[0][2] == board[1][2] && board[0][2] == board[2][2];
  bool condition7 = board[0][0] == board[1][1] && board[0][0] == board[2][2];
  bool condition8 = board[0][2] == board[1][1] && board[0][2] == board[2][0];
  return (condition1 || condition2 || condition3 || condition4 || condition5 || condition6 || condition7 || condition8);
}