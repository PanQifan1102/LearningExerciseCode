#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ�ֿ⺯��strcpy
#include<stdio.h>
#include<assert.h>
char* mystrcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}

