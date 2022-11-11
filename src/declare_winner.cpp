#include <iostream>

void declareWinner(int playerTurn)
{
  std::cout << "\nPlayer " << ((playerTurn == 1) ? "2" : "1") << " wins!\n";
}
