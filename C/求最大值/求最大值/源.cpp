/*求10个整数中最大值*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int MAX = 0;            //定义一个MAX最大值
	int arr[10] = { 0 };      //定义一个有10个元素的整形数组
	printf("输入10个数：");
	for (i = 0; i <= 9; i++)//获取并储存10个数
	{
		scanf("%d", &arr[i]); 
	}
	
	MAX = arr[1];
	for (i = 1; i <= 9; i++)//比较
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
	}
	printf("最大的数是：%d", MAX);
	return 0;
}
