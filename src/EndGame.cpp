#include <iostream>
#include "../include/EndGame.h"

void endGame(int (*func)())
{
  if (playAgain())
    func();
  else
    std::cout << "\nThank you for playing tic-tac-toe. :)\n";
}
