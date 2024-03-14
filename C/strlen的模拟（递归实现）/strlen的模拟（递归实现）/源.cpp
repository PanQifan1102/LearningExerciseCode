#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现strlen
#include<stdio.h>
//递归
int Strlen(char* ch)
{
	if (*ch != '\0') {
		return 1 + Strlen(ch + 1);
	}
	return 0;
}
void main()
{
	char ch[] = "abcdefg";
	int result = Strlen(ch);
	printf("字符串的长度: %d ", result);
	printf("\n");

}
//非递归
int Strlen(char* ch)
{
	int x = 0;
	while (*ch != '\0')
	{
		*ch++;
		x++;
	}
	return x;
}
void main()
{
	char ch[] = "abcedfg";
	int result = Strlen(ch);
	printf("字符串的长度：%d ", result);
	printf("\n");
}

