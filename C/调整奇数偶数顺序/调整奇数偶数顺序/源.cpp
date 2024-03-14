#define _CRT_SECURE_NO_WARNINGS 1
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//接受数字的数字
	int arr1[11] = { 0 };//存放奇数
	int arr2[11] = { 0 };//存放偶数

	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0;i < sz;i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr1[j] = arr[i];
			j += 1;
		}
		else
		{
			arr2[k] = arr[i];
			k += 1;
		}
	}
	
	int n = 0;
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	for (j=6,n = 0;n < k;j++,n++)
	{
		arr1[j] = arr2[n];
	}
	for (j = 0;j < sz1;j++)
	{
		printf("%d ", arr1[j]);
	}
	return 0;
}