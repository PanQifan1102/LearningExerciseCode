#include<stdio.h>
//给出大写字母输出小写字母
int main()
{
	char c1, c2;
	c1 = getchar();
	c2 = c1 + 32;
	putchar(c2);
	putchar('\n');
	return 0;
}