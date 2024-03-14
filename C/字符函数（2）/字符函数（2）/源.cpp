#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strcmp函数
int main()
{
	int ret = strcmp("aaa","aaa");
	printf("%d\n",ret);
	return 0;
}
//模拟strcmp函数①
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s1++;
		s2++;
	}
	if (*s1 > *s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
//模拟strcmp函数②
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == *s2)
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

//strncpy函数
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "qwer";
	strncpy(arr1, arr2, 2);
	printf("%s\n", arr1);
	return 0;
}

//strncat函数
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	strncat(arr1, arr2, 10);
	printf("%s\n", arr1);
	return 0;
}

//strncmp函数
int main()
{
	char p[] = "abcdef";
	char q[] = "abcqwert";
	int ret = strncmp(p, q, 4);
	printf("%d\n", ret);
	return 0;
}
