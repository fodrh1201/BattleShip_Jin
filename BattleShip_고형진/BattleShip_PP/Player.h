#pragma once
#include "Board.h"
#include "Ship.h"
class Player
{
public:
	Player();
	~Player();

public:
	void submit();
	void placeship();
	void Attack();
	void GiveUp();

private:
	Board myBoard;
	Board enemyBoard;
	Ship* shipList;
	int type;

};

