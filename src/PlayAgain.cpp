#include <iostream>

bool playAgain()
{
  while (true)
  {
    std::cout << "Enter p to play again, e to exit:\n";
    std::string option;
    std::cin >> option;

    if (option == "p")
      return true;
    else if (option == "e")
      return false;
    else
      std::cout << "Invalid input!\n";
  }
}