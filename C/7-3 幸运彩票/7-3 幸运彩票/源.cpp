#define _CRT_SECURE_NO_WARNINGS 1
//彩票的号码有 6 位数字，若一张彩票的前 3 位上的数之和等于
// 后 3 位上的数之和，则称这张彩票是幸运的。
// 本题就请你判断给定的彩票是不是幸运的。
//输入格式：
//输入在第一行中给出一个正整数 N（≤ 100）。
// 随后 N 行，每行给出一张彩票的 6 位数字。
//输出格式：
//对每张彩票，如果它是幸运的，就在一行中输出 You are lucky!；
//否则输出 Wish you good luck.。

#include<stdio.h>
int main()
{
	int n = 0;
	int a[6] = { 0 };
	int i = 0;//6为彩票数字
	int num = 0;
	scanf("%d",&n);
	for (num = 0;num < n;num++)
	{
		scanf("%d", &i);

		a[0] = i / 100000;
		a[1] = i / 10000 % 10;
		a[2] = i / 1000 % 10;
		a[3] = i / 100 % 10;
		a[4] = i / 10 % 10;
		a[5] = i % 10;
		if ((a[0] + a[1] + a[2]) == (a[3] + a[4] + a[5]))
		{
			printf("You are lucky!\n");
		}
		else
		{
			printf("Wish you good luck.\n");
		}
	}
	return 0;
}