#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strcmp����
int main()
{
	int ret = strcmp("aaa","aaa");
	printf("%d\n",ret);
	return 0;
}
//ģ��strcmp������
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
//ģ��strcmp������
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

//strncpy����
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "qwer";
	strncpy(arr1, arr2, 2);
	printf("%s\n", arr1);
	return 0;
}

//strncat����
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	strncat(arr1, arr2, 10);
	printf("%s\n", arr1);
	return 0;
}

//strncmp����
int main()
{
	char p[] = "abcdef";
	char q[] = "abcqwert";
	int ret = strncmp(p, q, 4);
	printf("%d\n", ret);
	return 0;
}
