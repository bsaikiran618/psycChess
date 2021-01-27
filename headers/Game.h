//HEADER GUARD
#ifndef GAME
	#define GAME

#include "Board.h"
#include "Player.h"
#include "Color.h"

//A class to hold the current Game state.
//Has players, and a board
//and timers.

class Game
{
	public:
	Board *board;
	Player *player1, *player2;
	
	Game();
	void Start();
};


#endif
