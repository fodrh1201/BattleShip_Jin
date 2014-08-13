#pragma once
#include "Position.h"
#include <string>
#include "TypeOfShip.h"

enum HitResult
{
	HIT,
	MISS,
	DESTROY
};

class Ship
{
public:
	Ship();
	~Ship();
	int GetHP() { return m_Hp; }
	void Damaged();
	int GetSize() { return m_Size; }
	std::string GetName() { return m_Name; }
	Position* GetPositions() { return positions; }
	void HitCheck();
	void AddPosition(Position pos);
	void AddPosition(char x, int y);
	void AddPosition(Position head, int direction);
	void ShipPrint();

protected:
	void MakeDirection();
	std::string m_Name;
	int posCount;
	int m_Hp;
	int m_Size;
	TypeOfShip type;
	Position* positions;
	void MakeDir();

	Position direction[4];
};

