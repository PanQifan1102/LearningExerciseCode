#define _CRT_SECURE_NO_WARNINGS 1
//��һ���ַ���str�����ݵߵ��������������
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