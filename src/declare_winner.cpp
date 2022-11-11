#include <iostream>

void declareWinner(int playerTurn, std::ostream &os = std::cout)
{
  os << "\nPlayer " << ((playerTurn == 1) ? "2" : "1") << " wins!\n";
}
