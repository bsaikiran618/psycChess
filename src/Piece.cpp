#include "../headers/Piece.h"
#include "Game.h"

Piece::Piece(Color c, Square s)
{
	this.isAlive = true;
	this.square = s;
	this.color = c
}
Piece::setSquare(Square *s){
	this.square = s;
}
