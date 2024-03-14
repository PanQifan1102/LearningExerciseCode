//实现一个函数来交换两个整数的内容。
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	//获取两个数
	printf("请输入要交换的两个数：");
	scanf("%d %d",&a,&b);

	int i = 0;//中间数
	//交换过程
	i = a;
	a = b;
	b = i;
	//结果输出
	printf("交换后的结果：a=%d,b=%d", a, b);

	return 0;
}