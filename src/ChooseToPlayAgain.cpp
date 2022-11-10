#include <iostream>

bool chooseToPlayAgain()
{
  while (true)
  {
    std::cout << "Enter p to play again, e to exit:\n";
    std::string option;
    std::cin >> option;

    if (option == "p")
    {
      return true;
    }
    else if (option == "e")
    {
      std::cout << "Thank you for playing tic-tac-toe\n";
      return false;
    }
    else
    {
      std::cout << "Invalid input!\n";
    }
  }
}