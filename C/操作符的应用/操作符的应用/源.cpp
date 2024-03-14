#include<stdio.h>
int main()
{
	//算术操作符的应用
	int a = 15 / 2;
	float b = 15 / 2.0;
	int c = 15 % 2;
	printf("%d\n", a);
	printf("%f\n", b);
	printf("%d\n", c);
	//赋值操作符的应用
	int d = 10;
	  //e=d+4
	int e = d += 4;
	  //f=d/5
	int f = d /= 5;
	  //g=d<<5
	int g = d <<= 4;
	printf("%d\n", e);
	printf("%d\n", f);
	printf("%d\n", g);
	//单目操作符的应用
	int h = 10;
	int i = ++h;
	int j = 10;
	int k = j--;
	printf("%d\n", i);
	printf("%d\n", k);
	//逻辑操作符的应用
	int l = 0;
	int m = 3;
	int n = l && m;
	printf("%d\n", n);
	//条件操作符的应用
	int o = 2;
	int p = 5;
	int max = 0;
	max = o > p ? o : p;
	//if (o > p)
	  //	max = o;
	  //else
	  //	max = p;
	printf("%d\n", max);
	//逗号表达式
	int q = 3;
	int r = 7;
	int s = 11;
	int u = (r = q - 1, s = r - 3, q = s - 2);
	printf("%d\n", u);


	return 0;
}
