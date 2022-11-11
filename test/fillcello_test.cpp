#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/fill_cell_o.cpp"

TEST_CASE("testing the fillCellO function")
{
  std::string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
  int playerTurn = 2;
  fillCellO(board, 2, 0, playerTurn);
  CHECK(board[2][0] == "O");
  CHECK(playerTurn == 1);
}
