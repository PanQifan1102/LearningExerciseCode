#define _CRT_SECURE_NO_WARNINGS 1
//打印平行四边形
//形状如下：
// *****
//  *****
//   ***** 
//    *****
//     *****
#include<stdio.h>

int main()
{
	char a[5] = { '*','*','*','*','*' };
	int i = 0;//打印的行数
	int j = 0;//空格子的个数
	int k = 0;//数组的下标
	char space = ' ';
	for (i = 0;i < 5;i++)//总共要打印5行
	{
		printf("\n");//每次打印完一行后换行
		printf("    ");//使打印的图形在屏幕中间，不在屏幕最左侧
		for (j = 1;j <= i;j++)//打印出每一行要空几个格子，
		{                     //每一行相较于前一行要多空一个空格
			printf("%c", space);
		}
		for (k = 0;k < 5;k++)//打印数组的内容，即将5个*都打印出来
		{
			printf("%c", a[k]);
		}
	}
	printf("\n");
	return 0;
}