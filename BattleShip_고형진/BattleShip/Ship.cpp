#include "stdafx.h"
#include "Ship.h"
#include <iostream>


Ship::Ship()
{
	m_Hp = 0;
	m_Name = "";
	m_Size = 0;
}


Ship::~Ship()
{
	delete[] positions;
	positions = NULL;
}

void Ship::ShipPrint()
{
	std::cout << m_Name << "'s HP : " << m_Hp << std::endl;
	std::cout << m_Name << "'s Position :";
	
	for (int i = 0; i < m_Size; i++)
	{
		std::cout << " (" << positions[i].x << ", " << positions[i].y << ")";
	}
	std::cout << std::endl;
}

void Ship::AddPosition(Position pos)
{
	positions[posCount] = pos;
	posCount += 1;

	if (posCount >= m_Size)
		posCount = 0;
}

void Ship::AddPosition(char x, int y)
{
	Position pos = { x, y };
	AddPosition(pos);
}

void Ship::AddPosition(Position head, int dir)
{
	MakeDir();

	for (int i = 0; i < m_Size; ++i)
	{
		AddPosition((char)(head.x + direction[dir].x * i), 
					head.y + direction[dir].y * i);
	}
}

void Ship::Damaged()
{
	m_Hp -= 1;
}

void Ship::MakeDir()
{
	direction[0] = { 0, 1 };
	direction[1] = { 0, -1 };
	direction[2] = { -1, 0 };
	direction[3] = { 1, 0 };
}
