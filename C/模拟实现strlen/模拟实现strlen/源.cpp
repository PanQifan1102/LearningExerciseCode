#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ�ֿ⺯��strlen
#include<stdio.h>
#include<assert.h>

int mystrlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}