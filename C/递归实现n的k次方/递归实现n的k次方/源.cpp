#define _CRT_SECURE_NO_WARNINGS 1
//编写一个函数实现n的k次方，使用递归实现。
#include<stdio.h>
int index(int a, int b)
{
	if (b <= 0)
		return 1;
	else
		return a * index(a, b - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	printf("请分别输入n和k的值：");
	scanf("%d %d", &n, &k);

	int result = index(n, k);

	printf("n的k次方为：%d\n", result);
	return 0;
}