#include<stdio.h>
int main()
{
	//�ҳ������Ĵ�ŵ�ַ
	int a = 10;
	printf("%p\n", &a);
	int* pa = &a;

	char ch = 'w';
	printf("%p\n", &ch);
	char* pa = &ch;

	int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%d\n", a);

	//����ָ��Ĵ�С
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));

    return 0;
}