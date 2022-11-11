#include <iostream>
#include "../include/end_game.h"

void endGame(int (*func)())
{
  if (playAgain())
    func();
  else
    std::cout << "\nThank you for playing tic-tac-toe. :)\n";
}
