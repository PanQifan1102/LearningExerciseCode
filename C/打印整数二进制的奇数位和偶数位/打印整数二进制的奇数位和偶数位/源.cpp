#define _CRT_SECURE_NO_WARNINGS 1
//��ȡһ���������������������е�ż��λ������λ��
//�ֱ��ӡ������������
#include<stdio.h>

int main()
{
	int n = 0;
	printf("������Ҫ��ѯ������");
	scanf("%d", &n);
	//��ѯ
	//����λ
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
	printf("\n");
	//ż��λ
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >> i) & 1);
	}
		
	return 0;
}