// BattleShip_PP.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	srand((unsigned int)time(NULL));
	char* result_arr[3] = { "hit", "miss", "distroy" };
	
	int input_x, input_y;
	std::cin >> input_x;
	std::cin >> input_y;
	fflush(stdin);


	int result = rand() % 3;
	printf_s("%s", result_arr[result]);

	getchar();

}

