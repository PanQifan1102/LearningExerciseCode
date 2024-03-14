#include <stdio.h>

int main()
{
	int result = system("jupyter notebook");
	
	if (result == 0)
	{
		printf("Successful");
	}
	else
	{
		printf("erro");
	}
	return 0;
}