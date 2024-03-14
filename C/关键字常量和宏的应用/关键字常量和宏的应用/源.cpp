#include<stdio.h>
//typedef的应用
int main()
{
	unsigned int num = 200;
	return 0;
}
typedef unsigned int u_int;
int main()
{
	u_int num= 200;
	printf("%d\n", num);
	return 0;
}
//static的应用①
void test()
{
	static int a = 1;//若不加static，结果为十个2；若添加，结果为：2，3，……，10，11.
	a++;
	printf("%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}
//static的应用②
extern int g_val;
int main()
{
    printf("%d\n", g_val);
	return 0;
}

//static的应用③
extern int Add(int x, int y);
int main()
{
	int x = 2;
	int y = 3;
	int sum = Add(2,3);
	printf("%d\n", sum);
    return 0;
}
//常量和宏的应用
#define ADD(x,y) x+y
int main()
{
	printf("%d\n", ADD(2, 3));//得5
	return 0;
}
int main()
{
	printf("%d\n", 4*ADD(2, 3));//得11
	return 0;
}
#define ADD(x,y) (x+y)
int main()
{
	printf("%d\n", 4*ADD(2, 3));//得20
	return 0;
}

