#include<stdio.h>
int main()
{
	//exercise 1
	int i = 0;
	for(i = 1; i <= 10 ; i++)
	{
		printf("%d ",i);
	}

	//exercise 2
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			break;
		printf("%d ", i);
	}

	//exercise 3
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
	}

	//exercise 4
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("houhou\n");
         }
	}

	//exercise 5
	int i = 0;
	int j = 0;
	for (/*i = 0*/; i < 3; i++)
	{
		for (/*j = 0*/; j < 3; j++)
		{
			printf("hehe\n");
		}
	}

		return 0;
}