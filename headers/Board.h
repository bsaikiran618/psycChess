//HEADER GUARD

#ifndef BOARD
	#define BOARD

#include "Square.h"

//A Class that handles all chessboard related stuff
//Has the current board state
//Holds pieces

class Board
{
	vector<vector<Square>> board;
	vector<Piece *> whitePieces, blackPieces;
	public:
	Board();
	void showBoard();
	vector<Piece *> getBlackPieces();
	vector<Piece *> getWhitePieces();
};
#endif
