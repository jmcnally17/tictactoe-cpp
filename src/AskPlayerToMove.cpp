#include <iostream>

void askPlayerToMove(int playerTurn)
{
  if (playerTurn == 1)
    std::cout << "Player 1, please pick a cell from 1 to 9:\n";
  else
    std::cout << "Player 2, please pick a cell from 1 to 9:\n";
}