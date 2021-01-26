//HEADER GUARD
#ifndef PIECE
	#define PIECE


#include "Game.h"
#include "Square.h"
#include <string>

// This Class is a super class for all the chess pieces.
// It encapsulates the common functionality and properties of all chess pieces
class Piece
{
	Color color;
	bool isAlive;
	Square *square;
	char marker;
	public:
	Piece(Color , Square *);
	void setSquare(Square *);
	string getMarker();
};

#endif
