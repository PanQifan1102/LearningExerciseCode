/*编写程序数一下 1到 100 的所有整数中出现多少个数字9*/
#include<stdio.h>

int main()
{
	int n = 0;
	int count = 0;

	for (n = 0; n < 101; n++)//生成0-100的数字
	{
		if (9 == n % 10 || 9 == n / 10)//判断其是否含有数字9
		{
			printf("%d ", n);
			count++;
		}
	}
	printf("\n 一共有%d个9 \n", count + 1);
	return 0;
}
