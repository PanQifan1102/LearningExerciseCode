#define _CRT_SECURE_NO_WARNINGS 1
//����
//KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳������Σ�
//����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//����������
//��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0 < a, b, c < 1000)��
//��Ϊ�����ε������ߣ��ÿո�ָ���
//�������
//���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!����
//�����������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����

#include<stdio.h>
int main()
{
	int a = 0; int b = 0; int c = 0;
	printf("��ֱ����������ε����ߣ�");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b + c || b < a + c || c < a + b)//�ж��ǲ���������
	{
		//�ж�ʱʲô������
		if (a == b && b == c)
		{
			printf("Equilateral triangle!\n");
		}
		else if (a == b || b == c || c == a)
		{
			printf("Isosceles triangle!\n");
		}
		else
		{
			printf("Ordinary triangle!");
		}
	}
	else
	{
		printf("Not a triangle!\n");
	}
}