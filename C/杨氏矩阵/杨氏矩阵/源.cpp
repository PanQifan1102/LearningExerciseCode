#define _CRT_SECURE_NO_WARNINGS 1
//有一个数字矩阵，矩阵的每行从左到右是递增的，
//矩阵从上到下是递增的，请编写程序在这样的矩阵中
//查找某个数字是否存在。
#include<stdio.h>

int find(int a[3][3], int row, int col, int key)
{
	int i = 0;//从第0行开始找
	int j = col - 1;//从第0行的最后一位开始找
	while (i < row && j >= 0)//条件小于第row行,大于等于第0位
	{
		if (key > a[i][j])//大于最后一位，行数+1
		{
			i++;
		}
		else if (key < a[i][j])//小于最后一位，位数向前-1
		{
			j--;
		}
		else {
			return 1;//找到返回1值
		}
	}
	return 0;
}

int main()
{
	int a[3][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
	int res = find(a, 3, 3, 7);
	if (res == 1)
	{
		printf("找到了。\n");
	}
	else {
		printf("没找到。\n");
	}
	return 0;
}

