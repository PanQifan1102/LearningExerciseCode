#include<stdio.h>
int main ()
{
	//��ϰ��
	int i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}

	//��ϰ��
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d\n", i);
		i++;
	}

	//��ϰ��
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d\n", i);
		i++;
	}

	//��ϰ��
	int ch = getchar();
	putchar( ch);

	//��ϰ��
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
    return 0;
}