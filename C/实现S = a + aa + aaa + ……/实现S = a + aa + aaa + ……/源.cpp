#define _CRT_SECURE_NO_WARNINGS 1
//实现计算 S = a + aa + …… + aaa…aaa(n个a)
#include<stdio.h>
#include<math.h>
//预计算法：S = a(1+11+111+ …… +111…1111)
int main()
{
	int a = 0;//计算的值
	int n = 0;//最大数中1的个数
	int j = 0;//求和的循环次数
	int k = 0;//生成数的循环次数
	int num = 0;//每次生成的数
	int sum = 0;//各个数之和
	int answer = 0;//答案
	printf("要计算 S = a + aa + …… + aaa…aaa(n个a) 的结果，\n");
	printf("请分别输入a和b的值：");
	scanf("%d %d", &a, &n);

	for (j = 1;j<=n;j++)//求和循环
	{
		num = 0;
		for (k = 0;k<j;k++)//生成1或11或111……
		{
			num += pow(10, k);
		}
		sum += num;
	}

	answer = sum * a;
	printf("计算的结果是：S=%d\n", answer);
	return 0;
}