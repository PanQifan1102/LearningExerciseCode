#include<stdio.h>
//一维数组的使用
int main()
{
	int arr[10] = { 0 };
	arr[4] = 5;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//一维数组在内存中的存储
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}

//二维数组的使用
int main()
{
	int arr[3][4] = { {1,2},{3,4},{4,5} };
	int j = 0;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//二维数组的存储形式
int main()
{
	int arr[3][4] = { {1,2},{3,4},{4,5} };
	int j = 0;
	int i = 0;
	int* p = &arr[0][0];
	for (i = 0; i < 12; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}

//冒泡排序
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}