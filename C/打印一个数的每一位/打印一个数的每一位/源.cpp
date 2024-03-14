#define _CRT_SECURE_NO_WARNINGS 1
//递归方式实现打印一个整数的每一位
#include<stdio.h>
void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int a = 975324;
	printf("%d\n", a);
	Print(a);

	return 0;
}