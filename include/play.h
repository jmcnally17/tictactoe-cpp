void makeMove(std::string board[3][3], int &playerTurn);

void displayBoard(std::string board[3][3]);

bool hasAPlayerWon(std::string board[3][3]);

void declareWinner(int playerTurn, std::ostream &os = std::cout);

bool hasBoardBeenFilled(std::string board[3][3]);
