#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//编写函数不允许创建临时变量，求字符串长度
//program 1
int my_strlen(char *str)
{
	int count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "bit";
	printf("%d\n", my_strlen(arr));
	return 0;
}
////program 2
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	printf("%d\n", my_strlen(arr));
	return 0;
}

//求n的阶乘
//program 1
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int ret = 1;
	for (i = 1;i <= n;i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}
//program 2
int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}

//求第n个斐波那契数
//program 1
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
    return 0;
}
//program 2
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}