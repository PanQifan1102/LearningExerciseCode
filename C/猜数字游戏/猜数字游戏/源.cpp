/*����1-100���������������*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 //��Ϸ�˵�
void menu()
{
	printf("#######################\n");
	printf("###### 1.��ʼ��Ϸ #####\n");
	printf("###### 0.�˳���Ϸ #####\n");
	printf("#######################\n");
}
//��Ϸ����
void game()
{
	//1.���������
	int ret = rand() % 100 + 1;
	//rand�������ص���һ��0-32767֮�������
	//ʱ��->ʱ���
	//%100��������0-99��Ȼ��+1��Χ����1-100
  //2.�������
	int guess = 0;
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�����\n");
			break;
		}
	}

}
//��Ϸ���
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��1/0����\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		}
	} while (input);
	return 0;
}
