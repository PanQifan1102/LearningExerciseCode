#define _CRT_SECURE_NO_WARNINGS 1
//在一个有序数组中查找一个数
//折半查找法的前提——有序！！
#include<stdio.h>
#include<windows.h>//使用system("cls")函数所需要的头文件
int main()
{
	//1. 数据的输入，要求从大到小依次输入数据
	int arr[15] = { 0 };
	int i = 0;
	int count = 0;//增加记数功能，方便查看输入的是第几个数
	printf("请由大到小输入所有数据\n");
	//1.1 接受所有数据
	for (i = 0,count = 1;i < 15;i++,count++)
	{
		printf("请输入第%d个数字：", count);
		scanf("%d", &arr[i]);
	}
	system("cls");//使用windows库函数，在输入完数据后清空屏幕，
	                              //使用时需要引用头文件<windows.h>
	
     //2. 查找代码的实现
	printf("请输入你要查找的数：");
	int key = 0;//要查找的数
	scanf("%d", &key);
	//2.1 查找过程中的下标表示
	int left = 0;//左侧下标
	int right = sizeof(arr) / sizeof(arr[0]) - 1; //右侧下标
	int mid = 0;//中间数的坐标
	//2.2 查找过程
	do
	{
		mid = (left + right) / 2;//mid的值是在循环中变化的
		if (arr[mid] == key)
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		else if (arr[mid] < key)//那就要在arr[mid]的左边找
		{
			right = mid - 1;
		}
		else //arr[mid]>key,就要在arr[mid]的右边找
		{
			left = mid + 1;
		}
	} while (left <= right);
	printf("无此数！");

	return 0;
}