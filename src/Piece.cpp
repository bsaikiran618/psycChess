#include "../headers/Piece.h"

Piece::Piece(Color c, Square s)
{
	this.isAlive = true;
	this.square = s;
	this.color = c
}
void Piece::setSquare(Square *s)
{
	this.square = s;
}
string Piece::getMarker()
{
	string pieceMark = color == WHITE?"W":"B";
	pieceMark.push_back(marker;)
	return pieceMarker;
}
