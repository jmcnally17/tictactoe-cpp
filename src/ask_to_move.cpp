#include <iostream>

void askToMove(int playerTurn)
{
  std::cout << "\nPlayer " << ((playerTurn == 1) ? "1" : "2") << ", please pick a cell from 1 to 9:\n";
}
