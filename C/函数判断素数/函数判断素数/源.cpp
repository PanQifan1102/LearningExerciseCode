#define _CRT_SECURE_NO_WARNINGS 1
/*ʵ��һ���������ж�һ�����ǲ���������
��������ʵ�ֵĺ�����ӡ100��200֮���������*/
#include<stdio.h>

int estimate_num(int n)
{
	int i = 0;
	if (n == 1)
		return 0;
	for (i = 2; i <= n; ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int j = 0;
	for (j = 100; j <= 200; ++j)
	{
		int ret = estimate_num(j);
		if (ret == 1)
			printf("%d", j);
	}
	return 0;
}

