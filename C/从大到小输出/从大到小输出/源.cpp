/*д���뽫�������������Ӵ�С�����
���磺
���룺2 3 1
�����3 2 1*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	printf("����������������");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b) 
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) 
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("���������ɴ�С�����ǣ�%d %d %d\n", a, b, c);
	return 0;
}