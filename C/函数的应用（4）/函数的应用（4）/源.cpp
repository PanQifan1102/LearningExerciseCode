#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//接受一个整型值，按照顺序打印它的每一位
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}