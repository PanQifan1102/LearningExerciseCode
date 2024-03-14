/*写代码将三个整数数按从大到小输出。
例如：
输入：2 3 1
输出：3 2 1*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b) 
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) 
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("三个整数由大到小依次是：%d %d %d\n", a, b, c);
	return 0;
}