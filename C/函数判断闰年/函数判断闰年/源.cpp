#define _CRT_SECURE_NO_WARNINGS 1
//实现函数判断year是不是润年。
#include<stdio.h>

int main()
{
	int year = 0;
	//获取年份
	printf("输入你要判断的年份：");
	scanf("%d", &year);
	//判断
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d是闰年\n", year);
	}
	else
	{
		printf("%d不是闰年\n", year);
	}
	return 0;
}