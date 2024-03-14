/*写一个代码打印1-100之间所有3的倍数的数字*/
#include <stdio.h>
int main()
{
	int i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
		i++;
	}
	return 0;
}