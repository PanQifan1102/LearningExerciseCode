#define _CRT_SECURE_NO_WARNINGS 1
//实现一个对整形数组的冒泡排序
#include<stdio.h>

void Bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = i + 1; j < sz; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = {3,4,7,4,23,5,7,9,2,14,};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	printf("排序之前:");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	Bubble_sort(arr, sz);
	printf("\n排序之后:");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}