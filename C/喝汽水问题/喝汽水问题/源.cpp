#define _CRT_SECURE_NO_WARNINGS 1
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���

#include <stdio.h>
int main()

{
	int money = 20;  
	int price = 1;    
	int soda = money / price;    
	int exchange = soda;     
	do
	{
		if (exchange % 2 == 0) 
		{
			exchange = exchange / 2;
			soda = exchange + soda;
		}                    
		else
		{
			exchange = exchange / 2 + 1;
			soda = soda + exchange - 1;
		}
	} while (exchange != 1);
	printf("����Ժ�%dƿ��ˮ��\n", soda);
	return 0;
}