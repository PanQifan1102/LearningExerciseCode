#define _CRT_SECURE_NO_WARNINGS 1
//编写程序，将两个字符串连接起来。不准使用strcat函数

#include<stdio.h>

int main()
{
	char s1[80] = { 0 };
	char s2[40] = { 0 };
	int i = 0; 
	int j = 0;
	printf("input string1:");
	scanf("%s", s1);
	printf("input string2:");
	scanf("%s", s2);
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[i++] = s2[j++];
	}
	s1[i] = '\0';
	printf("\nThe new string is:%s\n", s1);
	return 0;
}