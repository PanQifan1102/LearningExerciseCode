#define _CRT_SECURE_NO_WARNINGS 1
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子:1999 2299
//输出例子:7

#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int diff_bit(int m, int n) {
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m, n;
	printf("请输入两个数字： ");

	scanf("%d %d", &m, &n);

	int ret = diff_bit(m, n);

	printf("ret=%d\n", ret);

	system("pause");
	return 0;
}
