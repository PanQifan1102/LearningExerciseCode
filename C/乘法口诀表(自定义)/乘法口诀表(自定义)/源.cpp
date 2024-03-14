/*实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int i = 0;
	int j = 0;

	//获取a的值
	printf("输入口诀表的行列数：");
	scanf("%d", &a);

	//打印乘法口诀表
	for (int i=1; i<=a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}