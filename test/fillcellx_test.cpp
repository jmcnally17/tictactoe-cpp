#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/fill_cell_x.cpp"

TEST_SUITE("fillCellX")
{
  TEST_CASE("changes the correct cell on the board to X")
  {
    std::string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
    int playerTurn = 1;
    fillCellX(board, 0, 1, playerTurn);
    CHECK(board[0][1] == "X");
  }

  TEST_CASE("increases playerTurn by 1")
  {
    std::string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
    int playerTurn = 1;
    fillCellX(board, 0, 1, playerTurn);
    CHECK(playerTurn == 2);
  }
}
