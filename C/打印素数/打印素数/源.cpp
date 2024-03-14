/*写一个代码：打印100~200之间的素数*/
#include<stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	
	for (i = 100; i <= 200; i++)
	{	
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		
		if (j >= i)
		{
			printf("%d ", i);
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}
