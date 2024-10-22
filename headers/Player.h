//HEADER GUARD
#ifndef PLAYER
	#define PLAYER

#include "../headers/Color.h"
#include "../headers/Board.h"
#include <vector>
#include <string>
using namespace std;

//A class to keep track of player information
//A player can be a human or a computer.

class Player
{
	//data
	string playerName;
	vector<Piece *> pieces; // The player's chesspieces.
	Board *board;
	Color playerSide;

	//flags
	bool underCheck;
	bool isComputer;

	//methods

	vector<pair<Piece *, pair<int, int>>> getPossibleMoves();
	bool checkIsUnderCheck();

	public:
	Player(Color, vector<Piece *>, Board *, bool, string);
	bool isUnderCheck();
	void makeMove();
	void makeMoveComputer();
};

#endif
