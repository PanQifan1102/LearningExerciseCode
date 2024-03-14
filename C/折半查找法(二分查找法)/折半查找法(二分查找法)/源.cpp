#define _CRT_SECURE_NO_WARNINGS 1
//在一个有序数组中查找一个数
//折半查找法的前提——有序！！
#include<stdio.h>

int main()
{
	char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//数组元素下标   0 1 2 3 4 5 6 7 8 9
	int key = 7;//要查找的数
	//查找过程中的下标表示
	int left = 0;//左侧下标
	int right = sizeof(arr)/sizeof(arr[0])-1;//右侧下标
	int mid = 0; (left + right) / 2;//中间数的坐标
	//查找过程
	do
	{
		mid = (left + right) / 2;//mid的值是在循环中变化的
		if (arr[mid] == key)
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		else if (arr[mid] > key)//那就要在arr[mid]的左边找
		{
			right = mid - 1;
		}
		else//arr[mid]<key,就要在arr[mid]的右边找
		{
			left = mid + 1;
		}
	} while (left <= right);
	return 0;
}