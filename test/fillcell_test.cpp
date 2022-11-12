#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/fill_cell.cpp"

std::string result;
std::string board[3][3];

void mockFillCellX(std::string board[3][3], int a, int b, int &playerTurn)
{
  result = "fillCellX has been called";
}
void mockFillCellO(std::string board[3][3], int a, int b, int &playerTurn)
{
  result = "fillCellO has been called";
}

TEST_CASE("fillCell calls fillCellX when playerTurn equals 1")
{
  int playerTurn = 1;
  fillCell(board, 0, 0, playerTurn, &mockFillCellX, &mockFillCellO);
  CHECK(result == "fillCellX has been called");
}

TEST_CASE("fillCell calls fillCellO when playerTurn equals 2")
{
  int playerTurn = 2;
  fillCell(board, 0, 0, playerTurn, &mockFillCellX, &mockFillCellO);
  CHECK(result == "fillCellO has been called");
}
