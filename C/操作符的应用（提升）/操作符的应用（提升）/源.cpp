#include<stdio.h>
//��������int������ֵ������ʹ�õ���������
//��a=3,b=5����֮��a=5,b=3.
int main()
{
	int a = 3;
	int b = 5;
	//��
	int c = 0;
	c = a;
	a = b;
	b = c;
	//��
	a = a + b;
	b = a - b;
	a = a - b;
	//��
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	return 0;
}