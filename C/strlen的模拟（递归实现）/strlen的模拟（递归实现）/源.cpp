#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
#include<stdio.h>
//�ݹ�
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
	printf("�ַ����ĳ���: %d ", result);
	printf("\n");

}
//�ǵݹ�
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
	printf("�ַ����ĳ��ȣ�%d ", result);
	printf("\n");
}

