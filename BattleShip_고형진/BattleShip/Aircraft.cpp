#include "stdafx.h"
#include "Aircraft.h"


Aircraft::Aircraft()
{
	m_Hp = 5;
	m_Size = 5;
	m_Name = "Aircraft";
	positions = new Position[m_Size] { { 'a', 0 } };
	posCount = 0;
	type = AIRCRAFT;
}


Aircraft::~Aircraft()
{
}
