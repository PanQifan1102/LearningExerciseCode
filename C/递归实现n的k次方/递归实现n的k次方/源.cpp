#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
#include<stdio.h>
int index(int a, int b)
{
	if (b <= 0)
		return 1;
	else
		return a * index(a, b - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	printf("��ֱ�����n��k��ֵ��");
	scanf("%d %d", &n, &k);

	int result = index(n, k);

	printf("n��k�η�Ϊ��%d\n", result);
	return 0;
}