#pragma once
class Ship
{
public:
	Ship();
	~Ship();

public:
	bool HitCheck();
	int GetHP();

private:
	int hp;
	int x, y;
	int direction;
};

