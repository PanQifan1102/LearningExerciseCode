/*���������������������������Լ��
���磺
���룺20 40
�����20*/

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d", &a, &b);
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d ", b);
	return 0;
}