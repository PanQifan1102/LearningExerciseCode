#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����n�Ľ׳�
int main()
{
	int i = 0;
	int n = 0;
	int ret = 1;//�׳˴�1��ʼ����Ϊ0���κ�����Ϊ0
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}

//����:1!+2!+3!+4!+5!+6!+7!+8!+9!+10!
  //��ͨ����
int main()
{
	int i = 0;    int n = 0;
	int ret = 1;  int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret = 1;
		for (i = 1;i <= n; i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}
  //�Ż�����
int main()
{
	int i = 0;    int n = 0;
	int ret = 1;  int sum = 0;
	for (n = 1; n <= 10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}

//��һ�����������������ҳ������ĳ������
int main()
	{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
		if (left > right)
		{
			printf("�Ҳ���");
		}
	}
		return 0;
	}

