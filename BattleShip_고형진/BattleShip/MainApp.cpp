// MainApp.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "MainApp.h"
#include "Player.h"
#include <iostream>
#include <ctime>


int _tmain(int argc, _TCHAR* argv[])
{
	argc; argv;
	srand((unsigned int)time(NULL));

	Player p1;
	p1.SetUpShips();
	p1.Print();

	std::cout << std::endl;

	p1.BoardPrint();

	getchar();
	return 0;
}


MainApp::MainApp()
{
}


MainApp::~MainApp()
{
}