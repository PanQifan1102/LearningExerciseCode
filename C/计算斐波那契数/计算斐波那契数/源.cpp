#define _CRT_SECURE_NO_WARNINGS 1
/*递归和非递归分别实现求第n个斐波那契数
例如：
输入：5  输出：5
输入：10， 输出：55
输入：2， 输出：1
*/

//思路
//斐波那契数列公式
//Fib(n) = 1 , n = 1,2
//       = Fib(n-1) + Fib(n-2) , n > 2

#include<stdio.h>
//递归方式
int Fib(int x)
{
	if (x <= 2)
		return 1;
	else
	    return Fib(x - 1) + Fib(x - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a = Fib(n);
	printf("第%d个斐波那契数是：%d\n", n, a);
	return 0;
}

//非递归方式
int Fib(int m)
{
	if (m == 1 || m == 2)
		return 1;
	int a = 1;
	int b = 1;
	int c = 0;
	while (m >= 2)
	{
		c = c + a;
		a = b;
		b = c;
		m = m - 1;
	}
	return c;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", Fib(n));
	return 0;
}
