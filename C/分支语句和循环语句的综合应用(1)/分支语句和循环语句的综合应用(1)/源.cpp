#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算n的阶乘
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;//阶乘从1开始，因为0乘任何数均为0
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}

//计算:1!+2!+3!+4!+5!+6!+7!+8!+9!+10!
  //普通方案
int main()
{
	int i = 0;    int n = 0;
	int ret = 1;  int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for (i = 1;i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
  //优化方案
int main()
{
	int i = 0;    int n = 0;
	int ret = 1;  int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}

//在一个有序数列数列中找出具体的某个数字
int main()
	{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("找不到");
		}
	}
		return 0;
	}

