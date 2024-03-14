#define _CRT_SECURE_NO_WARNINGS 1
//输入一个字符串，内有数字和非数字字符，例如：
//A123x456 17960？ 302tab5876
//将其中连续的数字作为一个整数，依次存放到一数组a中。
//例如，123放在a[0],456放在a[1]……统计共有多少个整数，并输出这些数。
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[50], * pstr;
	int i, j, k, m, e10, digit, ndigit, a[10], * pa;
	printf("input a string:\n");
	gets_s(str);
	pstr = &str[0];
	pa = &a[0];
	ndigit = 0;//整数的个数
	i = 0;//字符串中的第几个字符
	j = 0;
	while (*(pstr + i) != '\0')
	{
		if ((*(pstr + i) >= '0') && (*(pstr + i) <= '9'))
			j++;
		else
		{
			if (j > 0)
			{
				digit = *(pstr + i - 1) - 48;//将个数位赋予digit
				k = 1;
				while (k < j)
				{
					e10 = 1;
					for (m = 1;m <= k;m++)
						e10 = e10 * 10;
					digit = digit + (*(pstr + i - 1 - k) - 48) * e10;
					k++;
				}
				*pa = digit;
				ndigit++;
				pa++;
				j = 0;
			}
		}//
		i++;
	}
	//============================================================================
	if (j > 0)
	{
		digit = *(pstr + i - 1) - 48;
		k = 1;
		while (k < j)
		{
			e10 = 1;
			for (m = 1;m <= k;m++)
				e10 = e10 * 10;
			digit = digit + (*(pstr + i - 1 - k) - 48) * e10;
			k++;
		}
		*pa = digit;
		ndigit++;
		j = 0;
	}
	printf("There are %d numbers in this line,they are:\n", ndigit);
	j = 0;
	pa = &a[0];
	for (j = 0;j < ndigit;j++)
		printf("%d", *(pa + j));
	printf("\n");
	return 0;
}