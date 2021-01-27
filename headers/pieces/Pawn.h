//HEADER GUARD
#ifndef PAWN
	#define PAWN

#include "../Piece.h"
#include "../Color.h"
#include "../Square.h"

class Pawn : public Piece
{
	public:
	Pawn(Color, Square*);
};

#endif
