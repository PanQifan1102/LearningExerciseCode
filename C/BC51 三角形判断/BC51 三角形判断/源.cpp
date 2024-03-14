#define _CRT_SECURE_NO_WARNINGS 1
//描述
//KiKi想知道已经给出的三条边a，b，c能否构成三角形，
//如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述：
//题目有多组输入数据，每一行输入三个a，b，c(0 < a, b, c < 1000)，
//作为三角形的三个边，用空格分隔。
//输出描述
//针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，
//等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。

#include<stdio.h>
int main()
{
	int a = 0; int b = 0; int c = 0;
	printf("请分别输入三角形的三边：");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b + c || b < a + c || c < a + b)//判断是不是三角形
	{
		//判断时什么三角形
		if (a == b && b == c)
		{
			printf("Equilateral triangle!\n");
		}
		else if (a == b || b == c || c == a)
		{
			printf("Isosceles triangle!\n");
		}
		else
		{
			printf("Ordinary triangle!");
		}
	}
	else
	{
		printf("Not a triangle!\n");
	}
}