//ʵ��һ�������������������������ݡ�
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	//��ȡ������
	printf("������Ҫ��������������");
	scanf("%d %d",&a,&b);

	int i = 0;//�м���
	//��������
	i = a;
	a = b;
	b = i;
	//������
	printf("������Ľ����a=%d,b=%d", a, b);

	return 0;
}