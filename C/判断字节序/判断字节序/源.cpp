#include<stdio.h>
int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}