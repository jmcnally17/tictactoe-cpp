#include <iostream>

void askToMove(int playerTurn, std::ostream &os = std::cout)
{
  os << "\nPlayer " << ((playerTurn == 1) ? "1" : "2") << ", please pick a cell from 1 to 9:\n";
}
