#include<stdio.h>
int main ()
{
	//Á·Ï°¢Ù
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}

	//Á·Ï°¢Ú
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d\n", i);
		i++;
	}

	//Á·Ï°¢Û
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;
	}

	//Á·Ï°¢Ü
	int ch = getchar();
	putchar( ch);

	//Á·Ï°¢Ý
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
    return 0;
}