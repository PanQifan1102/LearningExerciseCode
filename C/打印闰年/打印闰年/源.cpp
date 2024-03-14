/*打印1000年到2000年之间的闰年*/
#include<stdio.h>
int main()
{
	int y = 0;
	int count = 0;
	
	for (y = 1000; y <= 2000; y++)
	{
		if (y % 4 == 0 && y % 100 != 0)
		{
			count++;
			printf("%d ", y);
		}
		if (y % 400 == 0)
		{
			count++;
			printf("%d ", y);
		}
	}

	printf("\ncount=%d\n", count);
	return 0;
}