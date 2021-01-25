//HEADER GUARD
#ifndef QUEEN
	#define QUEEN

#include "../Piece.h"
#include "../Game.h"


class Queen : public Piece
{
	public:
	Queen(Color c, Square *);
};

#endif
