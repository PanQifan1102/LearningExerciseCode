#define _CRT_SECURE_NO_WARNINGS 1
//дһ���������ز����������� 1 �ĸ�����
//����:15����00000000 00000000 00000000 00001111������4��1
#include<stdio.h>
int NUM(int n)
{
	int num = 0;
	while (n)
	{
		n &= (n - 1);
		num++;
	}
	return num;
}

int main()
{
	int n = 0;
	printf("������Ҫ��ѯ������");
	scanf("%d", &n);
	int num = NUM(n);
	printf("����%d�Ķ���������%d��1", n, num);
	return 0;
}