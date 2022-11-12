#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/has_board_been_filled.cpp"

TEST_SUITE("hasBoardBeenFilled")
{
  TEST_CASE("returns true when all the cells are longer their original numbers")
  {
    std::string board[3][3] = {{"X", "O", "O"}, {"O", "X", "X"}, {"X", "X", "O"}};
    CHECK(hasBoardBeenFilled(board) == true);
  }

  TEST_CASE("returns false when at least one of the cells are still their original number")
  {
    std::string board[3][3] = {{"1", "O", "O"}, {"O", "5", "X"}, {"X", "X", "9"}};
    CHECK(hasBoardBeenFilled(board) == false);
  }
}
