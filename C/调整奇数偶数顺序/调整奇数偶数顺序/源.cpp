#define _CRT_SECURE_NO_WARNINGS 1
//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//�������ֵ�����
	int arr1[11] = { 0 };//�������
	int arr2[11] = { 0 };//���ż��

	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0;i < sz;i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr1[j] = arr[i];
			j += 1;
		}
		else
		{
			arr2[k] = arr[i];
			k += 1;
		}
	}
	
	int n = 0;
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	for (j=6,n = 0;n < k;j++,n++)
	{
		arr1[j] = arr2[n];
	}
	for (j = 0;j < sz1;j++)
	{
		printf("%d ", arr1[j]);
	}
	return 0;
}