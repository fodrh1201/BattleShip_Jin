#include "stdafx.h"
#include "Aircraft.h"
#include <iostream>


Aircraft::Aircraft()
{
	m_Name = "AIRCRAFT";
	m_Type = AIRCRAFT;
	m_size = 5;
	m_Hp = 5;
}

Aircraft::~Aircraft()
{

}

void Aircraft::Print()
{
	std::cout << "Aircraft's HP : " << GetHP() << "\n";
}

