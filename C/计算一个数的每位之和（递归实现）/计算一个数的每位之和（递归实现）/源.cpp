#define _CRT_SECURE_NO_WARNINGS 1
/*дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
���룺1729�������19 */

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

	printf("����λ��֮��Ϊ��%d\n", num);
	return 0;
}