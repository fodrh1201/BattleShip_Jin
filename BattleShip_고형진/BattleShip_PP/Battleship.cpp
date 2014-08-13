#include "stdafx.h"
#include "Battleship.h"
#include <iostream>



Battleship::Battleship()
{
	m_Name = "BATTLESHIP";
	m_Type = BATTLESHIP;
	m_size = 4;
	m_Hp = 4;
}

Battleship::~Battleship()
{

}

void Battleship::Print()
{
	std::cout << "Battleship's HP : " << GetHP() << "\n";
}
