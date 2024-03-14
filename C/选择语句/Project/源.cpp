#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input = 0;//提供输入口
	printf("想吃饭\n");//提出问题
	printf("吃火锅（1）还是吃烤肉（0）？");//提出问题
	scanf("%d", &input);//结果显示处
	//选择方案
	if (input == 1)
	{
		printf("海底捞走起\n");
	}
	else
	{
		printf("北门口走起\n");
	}
	return 0;
}
