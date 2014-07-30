#include "stdafx.h"
#include "Ship.h"
#include "iostream"


Ship::Ship()
{
	m_Type = SHIPNONE;
	m_size = 0;
	m_Hp = 0;
}


Ship::~Ship()
{
}




HitResult Ship::HitCheck(Position pos)
{
	for (int i = 0; i < m_size; ++i)
	{
		if (pos.x == m_Pos[i].x && pos.y == m_Pos[i].y)
		{
			m_Hp -= 1;

			if (m_Hp == 0)
				return DESTROY;

			return HIT;
		}
	}
	return MISS;
}

void Ship::AddPosition(Position head, Direction dir)
{
	switch (dir)
	{
	case RIGHT:
		for (int i = 0; i < m_size; ++i)
		{
			Position p = { head.x + i, head.y };
			m_Pos[i] = p;
		}
		break;
	case LEFT:
		for (int i = 0; i < m_size; ++i)
		{
			Position p = { head.x - i, head.y };
			m_Pos[i] = p;
		}
		break;
	case UP:
		for (int i = 0; i < m_size; ++i)
		{
			Position p = { head.x, head.y + i };
			m_Pos[i] = p;
		}
		break;
	case DOWN:
		for (int i = 0; i < m_size; ++i)
		{
			Position p = { head.x, head.y - i };
			m_Pos[i] = p;
		}
		break;
	default:
		break;
	}


	std::cout << "x: " << head.x << std::endl;
	std::cout << "y: " << head.y << std::endl;
}

void Ship::AddPosition(char x, char y, Direction dir)
{
	int x_pos;
	int y_pos;

	if (x > 'H' || x < 'A')
		return;

	x_pos = (int)(x - 'A');
	
	y_pos = (int)(y - '0');

	Position head = { x_pos, y_pos };
	AddPosition(head, dir);
}

int Ship::GetHP()
{
	return m_Hp;
}

int Ship::GetSize()
{
	return m_size;
}

std::string Ship::GetName()
{
	return m_Name;
}
