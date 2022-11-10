#include <iostream>

void declareWinner(int playerTurn)
{
  (playerTurn == 1) ? std::cout << "Player 2 wins!\n" : std::cout << "Player 1 wins!\n";
}
