#include "../headers/Square.h"

Square::Square(bool occ, Piece *p)
{
	this.occupied = occ;
	//is isOccupied is true, p has a value
	//else p is set to Null.
	this.piece = p;
}
void Square::setPiece(Piece *p)
{
	this.piece = p;
}
void Square::removePiece()
{
	this.piece = NULL;
}
bool Square::isOccupied()
{
	return (piece != NULL)
}
bool Square::getPiece()
{
	return piece;
}
