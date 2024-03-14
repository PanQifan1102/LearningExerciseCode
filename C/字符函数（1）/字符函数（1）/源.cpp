#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strcpy
int main()
{
	char arr[20] = "hello";
	strcpy(arr, "qintian");
	printf("%s\n", arr);
	return 0;
}

//stract
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "qintian";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}

//Ä£Äâstrcat
char* my_strcat(char* dest, char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src--)
	{
		;
	}
	return ret;
}