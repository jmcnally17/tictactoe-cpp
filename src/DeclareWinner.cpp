#include <iostream>

void declareWinner(int playerTurn) {
  if (playerTurn == 1) {
    std::cout << "Player 2 wins!\n";
  } else {
    std::cout << "Player 1 wins!\n";
  }
}