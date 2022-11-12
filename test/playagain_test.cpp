#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/play_again.cpp"

TEST_CASE("playAgain prints a message to console asking the player if they want to play again")
{
  std::ostringstream oss;
  std::istringstream iss("p");
  playAgain(oss, iss);
  CHECK(oss.str() == "\nEnter p to play again, e to exit:\n");
}

TEST_CASE("playAgain returns true if the player enters p into the terminal")
{
  std::ostringstream oss;
  std::istringstream iss("p");
  CHECK(playAgain(oss, iss) == true);
}

TEST_CASE("playAgain returns false if the player enters e into the terminal")
{
  std::ostringstream oss;
  std::istringstream iss("e");
  CHECK(playAgain(oss, iss) == false);
}

TEST_CASE("playAgain prints an invalid input message if the player enters an input that is not p or e")
{
  bool isTesting = true;
  std::ostringstream oss;
  std::istringstream iss("random");
  playAgain(oss, iss, isTesting);
  CHECK(oss.str() == "\nEnter p to play again, e to exit:\nInvalid input!\n");
}
