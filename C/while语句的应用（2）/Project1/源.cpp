#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//exercise 1
	char password[20] = { 0 };
	printf("please set down your password:");
	scanf("%s", password);
	printf("please make sure your password!(y/f)");
	//To solve the word of buffer(»º³åÇø)
	int tmp = 0;
	while ((tmp = getchar()) != '\n')
	{
		;
	}

	int ch = getchar();
	if (ch == 'y')
	{
		printf("success\n");
	}
	else
	{
		printf("fault\n");
	}

	//exercise 2
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}