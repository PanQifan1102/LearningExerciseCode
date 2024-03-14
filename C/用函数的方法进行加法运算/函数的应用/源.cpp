#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)//写出函数及描述函数内容
{
	int z = 0;
	z = x + y;
	return z;
}
//用函数表述加法运算
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}