#define _CRT_SECURE_NO_WARNINGS 1
//给定一个整数m（50 < m < 20000），
// 找出小于m的最大的10个素数。
//	输入格式 :
//输入在一行中给出一个正整数m（50 < m < 20000）。
//	输出格式 :
//在一行中按递减顺序输出10个满足条件的素数，
//每个素数输出占6列。没有其它任何附加格式和字符。

#include<stdio.h>
int judge(int n)
{
	int i;
	for (i = 2; i < n; i++)
		if (n % i == 0)
			break;
	if (i < n) 
		return 0;
	else 
		return 1;
}
int main()
{
	int judge(int n);
	int m, i, count = 0;
	scanf("%d", &m);
	for (i = m - 1; i > 1; i--)
	{
		if (judge(i))
		{
			printf("%6d", i);
			count++;
		}
		if (count == 10)
			break;
	}
}
