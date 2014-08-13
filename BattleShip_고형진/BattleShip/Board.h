#pragma once
#include "TypeOfShip.h"
#include "Ship.h"
#include "Position.h"

class Board
{
public:
	Board();
	Board(int ver, int hor);
	~Board();

	int GetVertical() { return vertical; }
	int GetHorizontal() { return horizontal; }
	void SetToBoard(Ship* ship, int num);
	bool isPossibleSet(Ship* ship);
	void PrintBoard();

private:
	int horizontal;
	int vertical;
	int** board;
	bool isExist(Position pos);
	void MakeBoard();
	void SetPosition(Position pos, int num);
};

