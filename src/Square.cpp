#include "../headers/Square.h"
#include "../headers/Piece.h"
Square::Square(bool occ, Piece *p)
{
	//is isOccupied is true, p has a value
	//else p is set to Null.
	this->piece = p;
}
void Square::setPiece(Piece *p)
{
	this->piece = p;
}
void Square::removePiece()
{
	this->piece = NULL;
}
bool Square::isOccupied()
{
	return (piece != NULL);
}
Piece * Square::getPiece()
{
	return piece;
}
