//HEADER GUARD
#ifndef PIECE
	#define PIECE


#include "Game.h"
#include "Square.h"

// This Class is a super class for all the chess pieces.
// It encapsulates the common functionality and properties of all chess pieces
class Piece
{
	Color color;
	bool isAlive;
	Square *square;
	public:
	Piece(Color , Square *);
};

#endif
