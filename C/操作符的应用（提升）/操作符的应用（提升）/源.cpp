#include<stdio.h>
//交换两个int变量的值，不能使用第三个变量
//即a=3,b=5交换之后a=5,b=3.
int main()
{
	int a = 3;
	int b = 5;
	//①
	int c = 0;
	c = a;
	a = b;
	b = c;
	//②
	a = a + b;
	b = a - b;
	a = a - b;
	//③
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	return 0;
}