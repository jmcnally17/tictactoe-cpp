#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/fill_cell_x.cpp"

TEST_CASE("testing the fillCellX function")
{
  std::string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
  int playerTurn = 1;
  fillCellX(board, 0, 1, playerTurn);
  CHECK(board[0][1] == "X");
  CHECK(playerTurn == 2);
}