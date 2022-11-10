#include <iostream>

void displayBoard(std::string board[3][3])
{
  std::cout << "     |     |     \n";
  std::cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  \n";
  std::cout << "_____|_____|_____\n";
  std::cout << "     |     |     \n";
  std::cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  \n";
  std::cout << "_____|_____|_____\n";
  std::cout << "     |     |     \n";
  std::cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  \n";
  std::cout << "     |     |     \n\n";
}
