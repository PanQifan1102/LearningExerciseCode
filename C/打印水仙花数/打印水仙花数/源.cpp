#define _CRT_SECURE_NO_WARNINGS 1
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

//˼·��������0-100000�����֣������ж��Ǹ���λ������ȡ������λ�����֣���������֤��
#include<stdio.h>
#include<math.h>

#include <stdio.h>

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{  //�����жϹ��м�λ����
	for (int i = 0; i <= 100000; i++)
	{
		int n = 1; int num = i;
		while (num / 10)
		{
			n++;
			num = num / 10;
		}
		//��ÿһλ���ֽ���n�η����
		int tmp = i;
		while (tmp / 10)
		{
			num += pow(tmp % 10, n);
			tmp = tmp / 10;
		}//�����ж�
		if (num == i)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}