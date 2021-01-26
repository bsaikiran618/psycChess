//HEADER GUARD
#ifndef SQUARE
	#define SQUARE

#include "Piece.h"

//A Square class is used to encapsulate a square on a chessboard.
//It may be occupied, attacked,
class Square
{
	bool occupied;
	Piece *piece;
	public:
	Square(bool, Piece *);
	void setPiece(Piece *);
	void removePiece();
	bool isOccupied();
	Piece * getPiece();
};

#endif
