#include<stdio.h>
#include<math.h>

//写一个函数判断其是不是素数
int is_prime(int n)
{
	int j = 0;
	for (j = 2;j < n;j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100;i <= 200;i++)
	{
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}

//写一个函数判断其是不是闰年
int is_leap_year(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int y = 0;
	for (y = 1000;y <= 2000;y++)
	{
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}
	return 0;
}

//写一个函数，实现一个征信有序数组的二分查找
int binary_search(int a[], int k,int s)
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if(a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}