CC = g++
CFLAGS = -Wall
LDFLAGS = -l

main: Game.o Computer.o Player.o Square.o Piece.o Rook.o Knight.o Bishop.o King.o Queen.o Pawn.o Main.o Board.o
	$(CC) Game.o Computer.o Player.o Square.o Piece.o Rook.o Knight.o Bishop.o King.o Queen.o Pawn.o Main.o Board.o -o main

Game.o: ../src/Game.cpp ../headers/Game.h
	g++ -c ../src/Game.cpp ../headers/Game.h
Board.o: ../src/Board.cpp ../headers/Board.h
	g++ -c ../src/Board.cpp ../headers/Board.h
Computer.o: ../src/Computer.cpp ../headers/Computer.h
	g++ -c ../src/Computer.cpp ../headers/Computer.h
Player.o: ../src/Player.cpp ../headers/Player.h
	g++ -c ../src/Player.cpp ../headers/Player.h
Square.o: ../src/Square.cpp ../headers/Square.h
	g++ -c ../src/Square.cpp ../headers/Square.h
Piece.o: ../src/Piece.cpp ../headers/Piece.h
	g++ -c ../src/Piece.cpp ../headers/Piece.h
Rook.o: ../src/pieces/Rook.cpp	../headers/pieces/Rook.h
	g++ -c ../src/pieces/Rook.cpp ../headers/pieces/Rook.h
Knight.o: ../src/pieces/Knight.cpp	../headers/pieces/Knight.h
	g++ -c ../src/pieces/Knight.cpp ../headers/pieces/Knight.h
Bishop.o: ../src/pieces/Bishop.cpp	../headers/pieces/Bishop.h
	g++ -c ../src/pieces/Bishop.cpp ../headers/pieces/Bishop.h
King.o: ../src/pieces/King.cpp	../headers/pieces/King.h
	g++ -c ../src/pieces/King.cpp ../headers/pieces/King.h
Queen.o: ../src/pieces/Queen.cpp ../headers/pieces/Queen.h
	g++ -c ../src/pieces/Queen.cpp ../headers/pieces/Queen.h
Pawn.o: ../src/pieces/Pawn.cpp	../headers/pieces/Pawn.h
	g++ -c ../src/pieces/Pawn.cpp ../headers/pieces/Pawn.h
Main.o: ../src/Main.cpp
	g++ -c ../src/Main.cpp
