#define _CRT_SECURE_NO_WARNINGS 1
//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
#include <stdio.h>

//ʵ�ֺ���init() ��ʼ������Ϊȫ0
void init(int a[], int sz) 
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		a[i] = 0;
	}
}

//ʵ��print()  ��ӡ�����ÿ��Ԫ��
void print(int arr[], int sz) 
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//ʵ��reverse()  �����������Ԫ�ص����á�
void reverse(int a[], int sz) 
{
	int t = 0;
	int left = 0;
	int right = sz - 1;
	while (left < right) 
	{
		t = a[left];
		a[left] = a[right];
		a[right] = t;
		left++;
		right--;
	}
}
int main() 
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr, sz);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	return 0;
}
