//#define _CRT_SECURE_NO_WARNINGS 1
/*编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列，不是逆序打印。
要求：不能使用C函数库中的字符串操作函数。
比如:char arr[] = "abcdef";
逆序之后数组的内容变成：fedcba */

#include<stdio.h>
void reverse_string(char* string)
{
	if (*string != '\0')//当指针string指向'\0'时，不再递归
	{
		string++;
		reverse_string(string);
		printf("%c", *(string - 1));
	}
}

int main()
{
	char* arr = "abcdefgh";
	reverse_string(arr);
	return 0;
}
