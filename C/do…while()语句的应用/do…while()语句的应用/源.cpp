#include<stdio.h>
int main()
{
	//exercise 1
	int i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);

	//exercise 2
	int i = 1;
	do
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	} while (i <= 10);

	//exercise 3
	int i = 1;
	do
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	} while (i <= 10);

	return 0;
}