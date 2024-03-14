#define _CRT_SECURE_NO_WARNINGS 1
//将一个字符串str的内容颠倒过来，并输出。
#include<stdio.h>
#include<string.h>
#define MAX 10000

int main()
{
	char arr[MAX] = {0};
	scanf("%s", arr);
	int sz = strlen(arr);

	for (sz = strlen(arr);sz >= 0;sz--)
	{
		printf("%c ", arr[sz]);
	}
	return 0;
}