#include<stdio.h>
int Add(int,int)
{}
int Sub(int,int)
{}
int main()
{
	int(*pf1)(int, int) = Add;
	int(*pf2)(int, int) = Sub;
	int(*pfAr[2])(int, int) = { Add,Sub };
	return 0;
}