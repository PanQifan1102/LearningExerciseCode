#define _CRT_SECURE_NO_WARNINGS 1
//ʵ�ֺ����ж�year�ǲ������ꡣ
#include<stdio.h>

int main()
{
	int year = 0;
	//��ȡ���
	printf("������Ҫ�жϵ���ݣ�");
	scanf("%d", &year);
	//�ж�
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d������\n", year);
	}
	else
	{
		printf("%d��������\n", year);
	}
	return 0;
}