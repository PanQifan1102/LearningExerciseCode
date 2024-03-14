#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
#include<stdio.h>
//递归
int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return Fac(n - 1) * n;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}
//非递归
int Fac(int n)
{
	int ret = 1;
	while (n)
	{
		ret = ret * n;
		n--;
	}
	return ret;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}