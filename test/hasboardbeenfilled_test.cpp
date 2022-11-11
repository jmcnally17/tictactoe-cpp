#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/has_board_been_filled.cpp"

TEST_CASE("hasBoardBeenFilled returns true when all the cells are longer their original numbers")
{
  std::string board[3][3] = {{"X", "O", "O"}, {"O", "X", "X"}, {"X", "X", "O"}};
  CHECK(hasBoardBeenFilled(board) == true);
}