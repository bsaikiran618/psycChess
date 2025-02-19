#include "../headers/Board.h"
#include "../headers/pieces/Rook.h"
#include "../headers/pieces/Knight.h"
#include "../headers/pieces/King.h"
#include "../headers/pieces/Queen.h"
#include "../headers/pieces/Bishop.h"
#include "../headers/pieces/Pawn.h"

#include <iostream>
using namespace std;

Board::Board()
{

	//Initialize the first 2 rows and the last 2 rows with the pieces
	Rook 	blackRook1(BLACK, NULL), 	whiteRook1(WHITE, NULL);
	Rook 	blackRook2(BLACK, NULL), 	whiteRook2(WHITE, NULL);
	Knight 	blackKnight1(BLACK, NULL), 	whiteKnight1(WHITE, NULL);
	Knight 	blackKnight2(BLACK, NULL), 	whiteKnight2(WHITE, NULL);
	Bishop 	blackBishop1(BLACK, NULL), 	whiteBishop1(WHITE, NULL);
	Bishop 	blackBishop2(BLACK, NULL), 	whiteBishop2(WHITE, NULL);
	King	blackKing(BLACK, NULL),		whiteKing(WHITE, NULL);
	Queen	blackQueen(BLACK, NULL),	whiteQueen(WHITE, NULL);

	//We add the pawns in a loop later.

	board.push_back(vector<Square>());
	//Inserted the first row for the black pieces.

	board[0].push_back(Square(true, &blackRook1));
	board[0].push_back(Square(true, &blackKnight1));
	board[0].push_back(Square(true, &blackBishop1));
	board[0].push_back(Square(true, &blackQueen));
	board[0].push_back(Square(true, &blackKing));
	board[0].push_back(Square(true, &blackBishop2));
	board[0].push_back(Square(true, &blackKnight2));
	board[0].push_back(Square(true, &blackRook2));

	blackRook1.setSquare(	&board[0][0]);
	blackKnight1.setSquare(	&board[0][1]);
	blackBishop1.setSquare(	&board[0][2]);
	blackQueen.setSquare(	&board[0][3]);
	blackKing.setSquare(	&board[0][4]);
	blackBishop2.setSquare(	&board[0][5]);
	blackKnight2.setSquare( &board[0][6]);
	blackRook2.setSquare(	&board[0][7]);

	//Adding the black pawns
	board.push_back(vector<Square>());
	for(int i=0;i<8;i++)
	{
		Pawn p(BLACK, NULL);
		Square s(true, &p);
		board[1].push_back(s);
		p.setSquare(&s);
	}
	
	//Add 4 empty rows

	for(int i=2;i<6;i++)
	{
		board.push_back(vector<Square>());
		for(int j=0;j<8;j++)
		{
			board[i].push_back(Square(false, NULL));
		}
	}

	//Add a rows for the white pawns
	board.push_back(vector<Square>());
	for(int i=0;i<8;i++)
	{
		Pawn p(WHITE, NULL);
		Square s(true, &p);
		board[6].push_back(s);
		p.setSquare(&s);
	}
	
	//Add a row for the white powers.
	board.push_back(vector<Square>());

	board[7].push_back(Square(true, &whiteRook1));
	board[7].push_back(Square(true, &whiteKnight1));
	board[7].push_back(Square(true, &whiteBishop1));
	board[7].push_back(Square(true, &whiteQueen));
	board[7].push_back(Square(true, &whiteKing));
	board[7].push_back(Square(true, &whiteBishop2));
	board[7].push_back(Square(true, &whiteKnight2));
	board[7].push_back(Square(true, &whiteRook2));

	whiteRook1.setSquare(	&board[7][0]);
	whiteKnight1.setSquare(	&board[7][1]);
	whiteBishop1.setSquare(	&board[7][2]);
	whiteQueen.setSquare(	&board[7][3]);
	whiteKing.setSquare(	&board[7][4]);
	whiteBishop2.setSquare(	&board[7][5]);
	whiteKnight2.setSquare( &board[7][6]);
	whiteRook2.setSquare(	&board[7][7]);
	

	//add the pieces to the vectors.

	whitePieces.push_back(	&whiteRook1);
	whitePieces.push_back(	&whiteRook2);
	whitePieces.push_back(	&whiteKnight1);
	whitePieces.push_back(	&whiteKnight2);
	whitePieces.push_back(	&whiteBishop1);
	whitePieces.push_back(	&whiteBishop2);
	whitePieces.push_back(	&whiteKing);
	whitePieces.push_back(	&whiteQueen);

	blackPieces.push_back(	&blackRook1);
    blackPieces.push_back(   &blackRook2); 
    blackPieces.push_back(   &blackKnight1);
    blackPieces.push_back(   &blackKnight2);
    blackPieces.push_back(   &blackBishop1);
    blackPieces.push_back(   &blackBishop2);
    blackPieces.push_back(   &blackKing);
    blackPieces.push_back(   &blackQueen);
}

void Board::showBoard()
{
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			cout << board[i][j].getPiece()->getMarker() << " | ";
		}
		cout << endl;
	}
}
vector<Piece *> Board::getBlackPieces()
{
	return blackPieces;
}
vector<Piece *> Board::getWhitePieces()
{
	return whitePieces;
}
