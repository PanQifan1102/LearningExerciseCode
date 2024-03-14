#include <stdio.h>
//二级指针
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	printf("%p\n", *pa);
	printf("%p\n", *ppa);
	return 0;
}

//指针数组
int main()
{
	int arr[10];//整形数组
	char ch[5];//字符数组
	int* parr[5];//指针数组
	return 0;
}