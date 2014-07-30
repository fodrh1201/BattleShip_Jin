#include "stdafx.h"
#include "Player.h"
#include <iostream>

Player::Player()
{
}


Player::~Player()
{
}

void Player::PlaceShip()
{
	// 배 배치
	int x_pos;
	int y_pos;
	int dir;
	//int ship_type = 0;
	Position pos;

	shipList[0] = &m_aircraft;
	shipList[1] = &m_battleShip;
	shipList[2] = &m_cruiser;
	shipList[3] = &m_destroyer1;
	shipList[4] = &m_destroyer2;

	int i = 0;

	while (i < SHIPNUM)
	{
		std::cout << i+1 << "번째 배 배치" << std::endl;

		x_pos = rand() % 8;
		y_pos = rand() % 8;
		dir = rand() % 4;

		pos = { x_pos, y_pos };

		shipList[i]->AddPosition(pos, Direction(dir));


// 		switch (i)
// 		{
// 		case AIRCRAFT:
// 			break;
// 		case BATTLESHIP:
// 			shipList[i].AddPosition(pos, Direction(dir));
// 			break;
// 		case CRUISER:
// 			shipList[i].AddPosition(pos, Direction(dir));
// 			break;
// 		case DESTROYER:
// 			m_destroyer1.AddPosition(pos, Direction(dir));
// 			break;
// 		case 5:
// 			m_destroyer2.AddPosition(pos, Direction(dir));
// 			break; //생각
// 		default:
//			break;
// 		}

		//충돌체크, if 충돌 이면 continue, else i++;


	}
	

}

void Player::PrintShips()
{
	for (int j = 0; j < SHIPNUM; j++)
	{
		shipList[j]->Print();
		for (int i = 0; i < shipList[j]->GetSize(); i++)
		{
			std::cout << shipList[j]->m_Pos[i].x << shipList[j]->m_Pos[i].y << " ";
		}

		std::cout << std::endl;
	}
}
