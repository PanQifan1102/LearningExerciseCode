#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
#include<stdio.h>
//�ݹ�
int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	return Fac(n - 1) * n;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}
//�ǵݹ�
int Fac(int n)
{
	int ret = 1;
	while (n)
	{
		ret = ret * n;
		n--;
	}
	return ret;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}