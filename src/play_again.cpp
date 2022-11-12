#include <iostream>

bool playAgain(std::ostream &os = std::cout, std::istream &is = std::cin, bool isTesting = false)
{
  while (true)
  {
    os << "\nEnter p to play again, e to exit:\n";
    std::string option;
    is >> option;

    if (option == "p")
    {
      return true;
    }
    else if (option == "e")
    {
      return false;
    }
    else
    {
      os << "Invalid input!\n";
      if (isTesting)
        return false;
    }
  }
}
