#include <iostream>
#include "../include/tictactoe.h"

int main()
{
  std::cout << "\nWelcome to tic-tac-toe!\n";
  std::string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
  displayBoard(board);
  play(board);
  endGame(&main);
}
