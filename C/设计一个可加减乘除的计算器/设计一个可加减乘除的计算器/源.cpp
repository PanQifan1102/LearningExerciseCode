#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//programme 1
int Add(int x, int y)//��
{
	return x + y;
}
int Sub(int x, int y)//��
{
	return x - y;
}
int Mul(int x, int y)//��
{
	return x * y;
}
int Div(int x, int y)//��
{
	return x / y;
}
void menu()
{
	printf("*****************************\n");
	printf("******* 1.Add  2.Sub  *******\n");
	printf("******* 3.Mul  4.Div  *******\n");
	printf("*********** 0.Exit **********\n");
	printf("*****************************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("�������������");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret=%d\n", ret);
		}
		else if(input == 0)
		{
			printf("�˳�����\n");
			break;
		}
		else 
		{ 
			printf("ѡ�����\n"); 
		}
	} while (input);
	return 0;
}

//programme 2
int Add(int x, int y)//��
{
	return x + y;
}
int Sub(int x, int y)//��
{
	return x - y;
}
int Mul(int x, int y)//��
{
	return x * y;
}
int Div(int x, int y)//��
{
	return x / y;
}
void menu()
{
	printf("*****************************\n");
	printf("******* 1.Add  2.Sub  *******\n");
	printf("******* 3.Mul  4.Div  *******\n");
	printf("*********** 0.Exit **********\n");
	printf("*****************************\n");
}
int Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("�������������");
	scanf("%d %d", &x, &y);
	return pf(x, y);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		int ret = 0;
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			ret = Calc(Add);
			printf("ret=%d\n", ret);
			break;
		case 2:
			ret = Calc(Sub);
			printf("ret=%d\n", ret);
			break;
		case 3:
			ret = Calc(Mul);
			printf("ret=%d\n", ret);
			break;
		case 4:
			ret = Calc(Div);
			printf("ret=%d\n", ret);
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} 
	while (input);
	return 0;
}