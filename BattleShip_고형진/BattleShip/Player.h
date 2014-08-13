#pragma once
#include "Ship.h"
#include "Board.h"
#include "Aircraft.h"
#include "BattleShip.h"
#include "Cruiser.h"
#include "Destroyer.h"
#include <vector>

class Player
{
public:
	Player();
	~Player();
	
	int GetNumOfShips() { return numOfShips; }
	void SetUpShips();
	void Attack(Position pos);
	void Attack(char x, int y);
	void Print();
	void BoardPrint();

private:

	int numOfShips;
	Board myBoard;
	Board enemyBoard;
	std::vector<Ship*> shipList;
	void InputShip(Ship* ship);
	void SetToShip(Ship* ship);
};

