#include "stdafx.h"
#include "BattleShip.h"


BattleShip::BattleShip()
{
	m_Hp = 4;
	m_Size = 4;
	m_Name = "BattleShip";
	positions = new Position[m_Size] { { 'a', 0 } };
	posCount = 0;
	type = BATTLESHIP;
}


BattleShip::~BattleShip()
{
}
