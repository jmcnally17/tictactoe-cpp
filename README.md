# Tic-Tac-Toe

This project is an attempt at making a game of tic-tac-toe in C++ that can be run in the terminal. I have structured the folder directory in accordance with what I have researched about standard practice for C++ projects. The [src](https://github.com/jmcnally17/tic-tac-toe/tree/main/src) folder contains all .cpp files while the [include](https://github.com/jmcnally17/tic-tac-toe/tree/main/include) folder contains all my header files. Finally, the [bin](https://github.com/jmcnally17/tic-tac-toe/tree/main/bin) folder contains the executable [tictactoe.out](https://github.com/jmcnally17/tic-tac-toe/blob/main/bin/tictactoe.out) file.

Upon loading the game, the players will be met with an interface that displays the board with each cell numbered 1-9. The two players will alternate turns where they must enter a number from 1-9 in the terminal in order to put X or O in a cell of their choosing. Once a player has won or the game has ended in a draw, the interface will ask the players if they would like to play again or exit the program.

<p align="center">
  <img src="./tictactoe-output.png" width="55%">
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

So far, tests have been written using [doctest](https://github.com/doctest/doctest) for three functions. These tests can be run by executing the \*\_test.out file found in the [test](https://github.com/jmcnally17/tic-tac-toe/tree/main/test) folder for that corresponding function.

I have been unable to follow TDD as this is my first experience setting up any testing framework in C++.
