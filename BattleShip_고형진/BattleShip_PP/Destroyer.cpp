#include "stdafx.h"
#include "Destroyer.h"


Destroyer::Destroyer()
{
	m_Name = "DESTROYER";
	m_Type = DESTROYER;
	m_size = 2;
	m_Hp = 2;
}

Destroyer::~Destroyer()
{

}

void Destroyer::Print()
{
	std::cout << "Destroyer's HP : " << GetHP() << "\n";
}


