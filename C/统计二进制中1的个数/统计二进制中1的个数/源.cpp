#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数返回参数二进制中 1 的个数。
//比如:15——00000000 00000000 00000000 00001111——共4个1
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
	printf("请输入要查询的数：");
	scanf("%d", &n);
	int num = NUM(n);
	printf("数字%d的二进制中有%d个1", n, num);
	return 0;
}