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
	//����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//����Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');//����
	InitBoard(show, ROWS, COLS, '*');//����
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//�Ų���
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("ѡ���������ѡ��\n");
		}
	} while (input);
	return 0;
}