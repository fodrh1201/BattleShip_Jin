#pragma once
struct Position
{
	int x, y;
};

enum HitResult
{
	MISS,
	HIT,
	DESTROY
};

enum Direction
{
	RIGHT,
	LEFT,
	UP,
	DOWN
};

enum ShipType
{
	SHIPNONE,
	AIRCRAFT,
	BATTLESHIP,
	CRUISER,
	DESTROYER
};

class Ship
{
public:
	Ship();
	~Ship();

public:
	HitResult HitCheck(Position pos);
	int GetHP();
	int GetSize();
	std::string GetName();
	void AddPosition(Position head, Direction dir);
	void AddPosition(char x, char y, Direction dir);
	void Print();
	Position m_Pos[5];

protected:
	std::string m_Name;
	int m_size;
	int m_Hp;
	/*
	Direction m_Direction;*/
	ShipType m_Type;
};
