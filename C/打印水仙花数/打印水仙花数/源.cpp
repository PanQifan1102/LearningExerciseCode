#define _CRT_SECURE_NO_WARNINGS 1
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//思路：①生成0-100000的数字；②先判断是个几位数；③取出各个位的数字；④运算验证。
#include<stdio.h>
#include<math.h>

#include <stdio.h>

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{  //首先判断共有几位数字
	for (int i = 0; i <= 100000; i++)
	{
		int n = 1; int num = i;
		while (num / 10)
		{
			n++;
			num = num / 10;
		}
		//对每一位数字进行n次方求和
		int tmp = i;
		while (tmp / 10)
		{
			num += pow(tmp % 10, n);
			tmp = tmp / 10;
		}//进行判断
		if (num == i)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}