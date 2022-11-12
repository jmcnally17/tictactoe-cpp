# Tic-Tac-Toe <img src="./images/tictactoe.png" width=60>

This project is a recreation of the game tic-tac-toe in C++ that can be run in the terminal. I have structured the folder directory in accordance with what I have researched about standard practice for C++ projects. The [src](https://github.com/jmcnally17/tic-tac-toe/tree/main/src) folder contains all .cpp files while the [include](https://github.com/jmcnally17/tic-tac-toe/tree/main/include) folder contains all my header files. Finally, the [bin](https://github.com/jmcnally17/tic-tac-toe/tree/main/bin) folder contains the executable [tictactoe.out](https://github.com/jmcnally17/tic-tac-toe/blob/main/bin/tictactoe.out) file while the [test](https://github.com/jmcnally17/tic-tac-toe/tree/main/test) folder contains all relevant test files.

This project has been designed with OOP principles, with great focus being applied to SRP from SOLID.

Upon loading the game, the players will be met with an interface that displays the board with each cell numbered 1-9. The two players will alternate turns where they must enter a number from 1-9 in the terminal in order to put X or O in a cell of their choosing. Once a player has won or the game has ended in a draw, the interface will ask the players if they would like to play again or exit the program.

<p align="center">
  <img src="./images/tictactoe-output.png" width="55%">
</p>

<p align="center">
  <b>Fig.1 -</b> Some example output from the program. Initially, the game starts with a welcome message before asking the player to choose a cell. The player then chooses cell number 1, which updates the board by placing X in the topleft cell.
</p>

## Getting Started

Start by cloning this repository using:

```
git clone https://github.com/jmcnally17/tic-tac-toe.git
```

## How To Run

You will need to execute the [tictactoe.out](https://github.com/jmcnally17/tic-tac-toe/blob/main/bin/tictactoe.out) file in the [bin](https://github.com/jmcnally17/tic-tac-toe/tree/main/bin) folder. While in the [main](https://github.com/jmcnally17/tic-tac-toe) directory, run:

```
./bin/tictactoe.out
```

and the game should run in your terminal.

## Testing

Tests have been written using [doctest](https://github.com/doctest/doctest) for eight functions. These tests can be run by executing the `_test.out` file found in the [test](https://github.com/jmcnally17/tic-tac-toe/tree/main/test) folder for that corresponding function.

Testing for calls to specific functions had difficulties. I managed to create somewhat of a hack for [fillcell_test.cpp](https://github.com/jmcnally17/tic-tac-toe/blob/main/test/fillcell_test.cpp), where I created two new function parameters for `fillCell` which had default values of `fillCellX` and `fillCellO`. I then passed in a mock function for each of these in the tests and checked that these mock functions had carried out their commands. This required me to define these function parameters with the same parameters passed in as `fillCellX` and `fillCellO`. Once these tests had been finished, I then tried to apply the same logic to the function that calls `fillCell` in [check_if_cell_is_valid.cpp](https://github.com/jmcnally17/tic-tac-toe/blob/main/src/check_if_cell_is_valid.cpp). However, the test file would not compile due to strict requirements of defining function parameters in C++. Even if the test file compilation had been successful, the arguments for `checkIfCellIsValid` in its function definition was very untidy.

I have researched mocking and testing function calls and have found that it is very difficult to do for free functions in C++. I therefore decided to not test anymore functions whose main responsibility was to call other functions.

Unfortunately, I was unable to strictly follow TDD as this is my first experience setting up any testing framework in C++.
