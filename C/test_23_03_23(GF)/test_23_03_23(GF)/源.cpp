#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
#include<math.h>
int main()
{
	int a[101] = { 0 }, i = 0, j = 0;
	for (i = 1;i <= 100;i++)//创建并存放1~100的数
	{
		a[i] = i;
	}
	//注意在创建的数组中 a[i] 是比 a[j] 小的
	//下面的循环目的是用 a[j] 除以 a[i] 
	for (i = 2;i <= 100;i++)//生成除数
	{
		for (j = i + 1;j <= 100;j++)//生成被除数
		{
			if (a[i] != 0 && a[j] != 0)//除数和被除数都不能为0
			{
				if (a[j] % a[i] == 0)//素数的因数只能是它本身和1，
					                 //那如果能被生成的除数相除无余数，则不是素数
				{
					a[j] = 0;//将数组中不是素数的数全部变为0
				}
			}
		}
	}
	for (j = 2;j <= 100;j++) //判断数组中不是0的数，并打印出来
	{
		if (a[j] != 0)
			printf("%d\n", a[j]);
	}
	return 0;
}