#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/declare_winner.cpp"

TEST_SUITE("declareWinner")
{
  TEST_CASE("prints a message that says player 1 has won")
  {
    int playerTurn = 2;
    std::ostringstream oss;
    declareWinner(playerTurn, oss);
    CHECK(oss.str() == "\nPlayer 1 wins!\n");
  }

  TEST_CASE("prints a message that says player 2 has won")
  {
    int playerTurn = 1;
    std::ostringstream oss;
    declareWinner(playerTurn, oss);
    CHECK(oss.str() == "\nPlayer 2 wins!\n");
  }
}
