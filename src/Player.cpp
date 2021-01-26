#include "../headers/Player.h"
#include <iostream>
using namespace std;

Player::Player(Color c, vector<Piece *> pcs, Board *b, bool isComp)
:playerSide(c), underCheck(false), pieces(pcs), board(b), isComputer(isComp)
{
	cout << "Player " << (c == WHITE?"WHITE":"BLACK") << "Initialized" << endl;
}


bool Player::isUnderCheck()
{
	return underCheck;
}

bool Player::checkIsUnderCheck()
{
	
	//check if the player is under check and set the flag and also return it.
}
void Player::makeMoveComputer()
{
	// Use MinMax and make the best move.
}
void Player::makeMove()
{
	//get the best move and make the move.
	if(isComputer) return makeMoveComputer();

	//ask human for a move and make it.
}
