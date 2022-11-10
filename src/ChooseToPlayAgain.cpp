#include <iostream>

void chooseToPlayAgain(bool &playAgain)
{
  while (true)
  {
    std::cout << "Enter p to play again, e to exit:\n";
    std::string option;
    std::cin >> option;

    if (option == "p")
    {
      playAgain = true;
      break;
    }
    else if (option == "e")
    {
      std::cout << "Thank you for playing tic-tac-toe\n";
      break;
    }
    else
    {
      std::cout << "Invalid input!\n";
    }
  }
}