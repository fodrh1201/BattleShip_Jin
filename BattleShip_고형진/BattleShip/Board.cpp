#include "stdafx.h"
#include "Board.h"
#include <memory.h>
#include <iostream>


Board::Board()
{
	horizontal = 8;
	vertical = 8;
	MakeBoard();
}


Board::~Board()
{
	for (int i = 0; i < vertical; ++i)
	{
		delete[] board[i];
		board[i] = NULL;
	}
	delete[] board;
	board = NULL;
}

void Board::SetToBoard(Ship* ship, int num)
{
	Position* positions = ship->GetPositions();
	int size = ship->GetSize();

	for (int i = 0; i < size; ++i)
	{
		SetPosition(positions[i], num);
	}
}

void Board::MakeBoard()
{
	board = new int*[vertical];
	for (int i = 0; i < vertical; ++i)
	{
		board[i] = new int[horizontal];
		memset(board[i], -1, (sizeof (int))*horizontal);
	}
}

bool Board::isExist(Position pos)
{
	int x = pos.x - 'a';
	int y = pos.y - 1;

	if (board[x][y] == -1)
		return false;
	else
		return true;
}

void Board::SetPosition(Position pos, int num)
{
	int x = pos.x - 'a';
	int y = pos.y - 1;

	board[x][y] = num;
}

void Board::PrintBoard()
{
	for (int i = 0; i < vertical; ++i)
	{
		for (int j = 0; j < horizontal; ++j)
		{
			if (board[i][j] == -1)
				std::cout << '*' << " ";
			else
				std::cout << board[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

bool Board::isPossibleSet(Ship* ship)
{
	Position* positions = ship->GetPositions();
	int size = ship->GetSize();
	Position tail = positions[size - 1];
	int i = 0;

	if (tail.x < 'a' || tail.x > 'a' + vertical-1 
		|| tail.y < 1 || tail.y > horizontal)
		return false;

	while (i < size && !isExist(positions[i]))
		i++;

	if (i < size)
		return false;
	else
		return true;


	//for (int i = 0; i < size; ++i)
	//{
	//	if (isExist(positions[i]))
	//		return false;
	//}

	//return true;
}
