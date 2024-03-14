#include<stdio.h>

//写一个函数，每调用一次num的值便会加1
void add(int* n)
{
	(*n)++;
}
int main()
{
	int num = 0;
	add(&num);
	printf("%d\n",num);
	
	add(&num);
	printf("%d\n", num);
	return 0;
}

//嵌套调用
void test3()
{
	printf("h");
}
int test2()
{
	test3();
	return 0;
}
int main()
{
	test2();
	return 0;
}

//链式访问
#include<string.h>
int main()
{
	printf("%d\n", strlen("abc"));
	return 0;
}

//函数的声明和定义
int main()
{
	int a = 10;
	int b = 20;
	//函数声明
	int add(int, int);

	int c = add(a, b);
	printf("%d\n", c);
	return 0;
}
int add(int x,int y)//函数的定义
{
	return x + y;
}