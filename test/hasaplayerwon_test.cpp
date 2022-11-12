#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/has_a_player_won.cpp"

TEST_CASE("hasAPlayerWon returns true when the cells in the first row are the same")
{
  std::string board[3][3] = {{"X", "X", "X"}, {"4", "5", "6"}, {"7", "8", "9"}};
  CHECK(hasAPlayerWon(board) == true);
}

TEST_CASE("hasAPlayerWon returns true when the cells in the second row are the same")
{
  std::string board[3][3] = {{"1", "2", "3"}, {"X", "X", "X"}, {"7", "8", "9"}};
  CHECK(hasAPlayerWon(board) == true);
}

TEST_CASE("hasAPlayerWon returns true when the cells in the third row are the same")
{
  std::string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"X", "X", "X"}};
  CHECK(hasAPlayerWon(board) == true);
}

TEST_CASE("hasAPlayerWon returns true when the cells in the first column are the same")
{
  std::string board[3][3] = {{"X", "2", "3"}, {"X", "5", "6"}, {"X", "8", "9"}};
  CHECK(hasAPlayerWon(board) == true);
}

TEST_CASE("hasAPlayerWon returns true when the cells in the second column are the same")
{
  std::string board[3][3] = {{"1", "X", "3"}, {"4", "X", "6"}, {"7", "X", "9"}};
  CHECK(hasAPlayerWon(board) == true);
}

TEST_CASE("hasAPlayerWon returns true when the cells in the third column are the same")
{
  std::string board[3][3] = {{"1", "2", "X"}, {"4", "5", "X"}, {"7", "8", "X"}};
  CHECK(hasAPlayerWon(board) == true);
}

TEST_CASE("hasAPlayerWon returns true when the cells in the descending diagonal are the same")
{
  std::string board[3][3] = {{"X", "2", "3"}, {"4", "X", "6"}, {"7", "8", "X"}};
  CHECK(hasAPlayerWon(board) == true);
}

TEST_CASE("hasAPlayerWon returns true when the cells in the ascending diagonal are the same")
{
  std::string board[3][3] = {{"1", "2", "X"}, {"4", "X", "6"}, {"X", "8", "9"}};
  CHECK(hasAPlayerWon(board) == true);
}

TEST_CASE("hasAPlayerWon returns false when none of the win conditions have been met")
{
  std::string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
  CHECK(hasAPlayerWon(board) == false);
}
