#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//10104->B
//int main()
//{
//	int i = 1, j = 2, k, * p = &k;
//	*p = i;
//	p = i * j;
//	*p = i + j;
//	p = &j;
//	return 0;
//}

//20102
//看不清题
//#define N 5
//int main()
//{
//	float arr[N] = { 0 };
//	float max = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%f", &arr[i]);
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%f\n", max);
//
//	return 0;
//}

//20101
//void fun(char s1[], char s2[])
//{
//	int i = 0, j = 0;
//	while (s1[i] != '\0')
//	{
//		i++;
//	}
//	while (s2[j] != '\0')
//	{
//		s1[i] = s2[j];
//		i++, j++;
//	}
//	puts(s1);
//}

//20109->C
//puts(s1); puts(s2);


//20109->A
//int main()
//{
//	int a[3][3] = { {1,2,3},{3,4,5},{5,6,7} }, i, j, s = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i; j < 3; j++)
//		{
//			s += a[i][j];
//		}
//	}
//	printf("%d\n", s);
//	return 0;
//}

//20101->BC
//int main()
//{
//	int a[10] = {};
//	int a[10] = { 10 * 1 };
//	return 0;
//}

//20103->A
//int main()
//{
//	int a[10] = { 2,4,6,8,10 }, * p, y = 1, x;
//	p = &a[1];
//
//	for (x = 0; x < 3; x++)
//	{
//		y += *(p + x);
//	}
//	printf("%d\n", y);
//	return 0;
//}

//20101->D
//int main()
//{
//	char ch[] = "600";
//	int  a, s = 0;
//	
//	for (a = 0; ch[a] >= '0' && ch[a] <= '9'; a++)
//	{
//		s = 10 * s + ch[a] - '0';
//	}
//	printf("%d\n", s);
//	return 0;
//}

//20103->B

