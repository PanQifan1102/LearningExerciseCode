#define _CRT_SECURE_NO_WARNINGS 1
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
#include<stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", *arr + i);
	}
	return 0;
}