#include <iostream>

bool hasAPlayerWon(std::string board[3][3])
{
  bool conditionOne = board[0][0] == board[0][1] && board[0][0] == board[0][2];
  bool conditionTwo = board[1][0] == board[1][1] && board[1][0] == board[1][2];
  bool conditionThree = board[2][0] == board[2][1] && board[2][0] == board[2][2];
  bool conditionFour = board[0][0] == board[1][0] && board[0][0] == board[2][0];
  bool conditionFive = board[0][1] == board[1][1] && board[0][1] == board[2][1];
  bool conditionSix = board[0][2] == board[1][2] && board[0][2] == board[2][2];
  bool conditionSeven = board[0][0] == board[1][1] && board[0][0] == board[2][2];
  bool conditionEight = board[0][2] == board[1][1] && board[0][2] == board[2][0];
  if (conditionOne || conditionTwo || conditionThree || conditionFour || conditionFive || conditionSix || conditionSeven || conditionEight)
  {
    return true;
  }
  return false;
}