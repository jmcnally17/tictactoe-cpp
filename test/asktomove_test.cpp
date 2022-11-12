#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/ask_to_move.cpp"

TEST_SUITE("askToMove")
{
  TEST_CASE("prints a message to player 1 in the console if playerTurn is equal to 1")
  {
    int playerTurn = 1;
    std::ostringstream oss;
    askToMove(playerTurn, oss);
    CHECK(oss.str() == "\nPlayer 1, please pick a cell from 1 to 9:\n");
  }

  TEST_CASE("prints a message to player 2 in the console if playerTurn is equal to 2")
  {
    int playerTurn = 2;
    std::ostringstream oss;
    askToMove(playerTurn, oss);
    CHECK(oss.str() == "\nPlayer 2, please pick a cell from 1 to 9:\n");
  }
}
