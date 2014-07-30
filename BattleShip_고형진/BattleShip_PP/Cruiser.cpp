#include "stdafx.h"
#include "Cruiser.h"


Cruiser::Cruiser()
{
	m_Name = "CRUISER";
	m_Type = CRUISER;
	m_size = 3;
	m_Hp = 3;
}

Cruiser::~Cruiser()
{

}

void Cruiser::Print()
{
	std::cout << "Cruiser's HP : " << GetHP() << "\n";
}


