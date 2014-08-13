#pragma once
#include "Board.h"
#include "Ship.h"
#include "..\BattleShip\Aircraft.h"
#include "Battleship.h"
#include "..\BattleShip\Cruiser.h"
#include "..\BattleShip\Destroyer.h"
#define SHIPNUM 5

class Player
{
public:
	Player();
	~Player();

public:
	void Submit();
	void PlaceShip();
	void Attack();
	void GiveUp();
	void PrintShips();

private:
	Board myBoard;
	Board enemyBoard;
	Aircraft m_aircraft;
	Battleship m_battleShip;
	Cruiser m_cruiser;
	Destroyer m_destroyer1;
	Destroyer m_destroyer2;
	Ship * shipList[SHIPNUM];

	int type;

};

