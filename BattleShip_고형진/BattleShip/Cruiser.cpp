#include "stdafx.h"
#include "Cruiser.h"


Cruiser::Cruiser()
{
	m_Hp = 3;
	m_Size = 3;
	m_Name = "Cruiser";
	positions = new Position[m_Size] { { 'a', 0 } };
	posCount = 0;
	type = CRUISER;
}


Cruiser::~Cruiser()
{
}
