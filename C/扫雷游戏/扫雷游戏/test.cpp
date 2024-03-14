#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("********* 1.Play *********\n");
	printf("********* 2.Exit *********\n");
	printf("**************************\n");
}

void game()
{
	//存放雷的信息
	char mine[ROWS][COLS] = { 0 };
	//存放排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//无雷
	InitBoard(show, ROWS, COLS, '*');//有雷
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("选择错误，重新选择\n");
		}
	} while (input);
	return 0;
}