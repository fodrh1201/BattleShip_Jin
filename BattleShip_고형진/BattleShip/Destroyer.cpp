#include "stdafx.h"
#include "Destroyer.h"


Destroyer::Destroyer()
{
	m_Hp = 2;
	m_Size = 2;
	m_Name = "Destroyer";
	positions = new Position[m_Size] { { 'a', 0 } };
	posCount = 0;
	type = DESTROYER;
}


Destroyer::~Destroyer()
{
}
