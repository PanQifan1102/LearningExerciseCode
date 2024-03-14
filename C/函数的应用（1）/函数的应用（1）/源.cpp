#include<string.h>
#include<stdio.h>
//新函数的练习①
int main()
{
	char arr1  [20] = { 0 };
	char arr2 [] = "hello";
	strcpy (arr1, arr2);
	printf("%s", arr1);
	return 0;
}

//新函数的练习②
int main()
{
	char arr[] = "hello,Lihua";
	memset(arr, 'x', 5);
	printf("%s", arr);
	return 0;
}

//找出两个整数的最大值
int get_max(int x, int y)//自定义函数
{
	int z = 0;
	if (x < y)
		z = y;
	else
		z = x;
	return z;
}
int main()//主函数体
{
	int a = 20;
	int b = 10;
	int max = get_max(a, b);
	printf("max=%d", max);
	return 0;
}

//写一个交换两个变量整型的值的函数
void swap(int *pa,int *pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 20;
	int b = 10;
	printf("交换前：a=%d b=%d", a, b);
	swap(&a, &b);
	printf("交换后：a=%d b=%d", a, b);
	return 0;
}//用指针使主函数与swap函数产生地址与数值上的联系

