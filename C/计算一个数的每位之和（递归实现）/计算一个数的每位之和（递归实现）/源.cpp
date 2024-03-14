#define _CRT_SECURE_NO_WARNINGS 1
/*写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
输入：1729，输出：19 */

#include<stdio.h>
int DigitSum(int a)
{
	int m = 0;
	int sum = 0;
	if (a != 0)
	{
		m = a % 10;
		a = a / 10;
		sum = m + DigitSum(a);
	}
	return sum;
}
int main()
{
	int x = 0;
	scanf("%d", &x);
	int num = DigitSum(x);

	printf("各个位数之和为：%d\n", num);
	return 0;
}