#include "../headers/Game.h"
#include "../headers/Player.h"
#include "../headers/Board.h"


Game::Game()
{
	String name1, name2;
	Color c1, c2;
	this.board = Board();
	
	//Let player1 be the human
	while(1)
	{
		int mode = 0;
		std::cout << "Choose Gameplay mode:" << std::endl;
		std::cout << "1. Human vs. Human" << std::endl;
		std::cout << "2. Human vs. Computer" << std::endl;

		std::cin >> mode;

		if(mode == 1 || mode == 2) break;
		cout << "Invalid Choice" << std::endl;
	}
	
	if(mode == 1)
	{
		// Human vs. Human

		std::cout << "PLAYER1, Enter your name:" << std::endl;
		
		while(1)
		{
			std::cout << "Which side do you want to play?(B/W)" << std::endl;
			char ch = '\0';
			std::cin >> ch;
			if(ch == 'B' || ch == 'W') break;
			std::cout << "Invalid choice" << std::endl;
		}
		c1 = (ch == 'B')?WHITE:BLACK;
		c2 = (c1 == WHITE)?BLACK:WHITE;
		
		std::cout << "PLAYER2, Enter your name:" << std::endl;
		std::cin >> name2;
		
		if(c1 == WHITE)
		{
			player1 = Player(c1, board.getWhitePieces(),board, false, name1);
			player2 = Player(c2, board.getBlackPieces(),board, false, name2);
		}
		else
		{
			player1 = Player(c1, board.getBlackPieces(),board, false, name1);
			player2 = Player(c2, board.getWhitePieces(),board, false, name2);
		}
	}
	else
	{
		//Human vs. Computer
		std::cout << "Enter your name:" << std::endl;
		std::cin >> name1 >> endl;
		char ch = '\0';
		while(1)
		{
			std::cout << "Choose your side(B/W)" << std::endl;
			std::cin >> ch;
			if(ch == 'B' || ch == 'W') break;
			std::cout << "Invalid Choice." << std::endl;
		}
		c1 = (ch == 'B')?BLACK:WHITE;
		c2 = (c1 == BLACK)?WHITE:BLACK;
		if(c1 == WHITE)
		{
			player1 = Player(c1, board.getWhitePieces(), board, name1);
			player2 = Player(c2, board.getBlackPieces(), board, "Computer");
		}
		else
		{
			player1 = Player(c1, board.getBlackPieces(), board, name1);
			player2 = Player(c2, board.getWhitePieces(), board, "Computer");
		}
	}
}
void Game::Start()
{	
	//The main game loop
	board.showBoard();
}
