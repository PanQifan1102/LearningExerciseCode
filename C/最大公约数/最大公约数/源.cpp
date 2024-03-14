/*给定两个数，求这两个数的最大公约数
例如：
输入：20 40
输出：20*/

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d ", b);
	return 0;
}