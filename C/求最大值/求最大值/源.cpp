/*��10�����������ֵ*/
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int MAX = 0;            //����һ��MAX���ֵ
	int arr[10] = { 0 };      //����һ����10��Ԫ�ص���������
	printf("����10������");
	for (i = 0; i <= 9; i++)//��ȡ������10����
	{
		scanf("%d", &arr[i]); 
	}
	
	MAX = arr[1];
	for (i = 1; i <= 9; i++)//�Ƚ�
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
	}
	printf("�������ǣ�%d", MAX);
	return 0;
}
