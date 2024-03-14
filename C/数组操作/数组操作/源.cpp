#define _CRT_SECURE_NO_WARNINGS 1
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
#include <stdio.h>

//实现函数init() 初始化数组为全0
void init(int a[], int sz) 
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		a[i] = 0;
	}
}

//实现print()  打印数组的每个元素
void print(int arr[], int sz) 
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//实现reverse()  函数完成数组元素的逆置。
void reverse(int a[], int sz) 
{
	int t = 0;
	int left = 0;
	int right = sz - 1;
	while (left < right) 
	{
		t = a[left];
		a[left] = a[right];
		a[right] = t;
		left++;
		right--;
	}
}
int main() 
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr, sz);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	return 0;
}
