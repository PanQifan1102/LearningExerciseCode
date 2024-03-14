#define _CRT_SECURE_NO_WARNINGS 1
//获取一个整数二进制序列中所有的偶数位和奇数位，
//分别打印出二进制序列
#include<stdio.h>

int main()
{
	int n = 0;
	printf("请输入要查询的数：");
	scanf("%d", &n);
	//查询
	//奇数位
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	//偶数位
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
		
	return 0;
}