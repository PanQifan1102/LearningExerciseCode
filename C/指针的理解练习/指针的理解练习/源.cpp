#include<stdio.h>
int main()
{
	//找出变量的存放地址
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

	//测量指针的大小
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(long*));

    return 0;
}