#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int result = 0;
	printf("\n");
	for (i = 1;i < 10;i++)
	{
		for (j = 1;j < 10;j++)
		{
			result = i * j;
			printf("%d*%d=%-3d",i,j,result);
		}
		printf("\n");
	}
	return 0;
}