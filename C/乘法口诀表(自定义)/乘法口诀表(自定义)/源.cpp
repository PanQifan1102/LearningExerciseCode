/*ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
�磺����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int i = 0;
	int j = 0;

	//��ȡa��ֵ
	printf("����ھ������������");
	scanf("%d", &a);

	//��ӡ�˷��ھ���
	for (int i=1; i<=a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			printf("%d*%d=%d ", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}