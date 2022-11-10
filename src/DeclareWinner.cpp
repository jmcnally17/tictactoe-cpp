#include <iostream>

void declareWinner(int playerTurn)
{
  (playerTurn == 1) ? std::cout << "\nPlayer 2 wins!\n" : std::cout << "\nPlayer 1 wins!\n";
}
