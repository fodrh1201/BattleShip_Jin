#include "stdafx.h"
#include "Player.h"
#include "Aircraft.h"
#include "Ship.h"
#include <ctime>
#include <iostream>


Player::Player()
{
	numOfShips = 0;
	InputShip(new Aircraft());
	InputShip(new BattleShip());
	InputShip(new Cruiser());
	InputShip(new Destroyer());
	InputShip(new Destroyer());
}

Player::~Player()
{
	for (int i = 0; i < numOfShips; ++i)
	{
		delete shipList[i];
		shipList[i] = NULL;
	}
}

void Player::InputShip(Ship* ship)
{
	numOfShips += 1;
	shipList.push_back(ship);
}

void Player::SetToShip(Ship* ship)
{
	do
	{
		Position head = { (char)('a' + rand() % myBoard.GetVertical()),
							1 + rand() % myBoard.GetHorizontal() };

		int dir = rand() % 4;

		ship->AddPosition(head, dir);
	} 
	while (!myBoard.isPossibleSet(ship));
}

void Player::Print()
{
	for (int i = 0; i < numOfShips; ++i)
	{
		shipList[i]->ShipPrint();
	}
}

void Player::SetUpShips()
{
	for (int i = 0; i < numOfShips; ++i)
	{
		SetToShip(shipList[i]);
		myBoard.SetToBoard(shipList[i], i);
	}
}

void Player::BoardPrint()
{
	myBoard.PrintBoard();
}
