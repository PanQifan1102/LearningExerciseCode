#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int input = 0;//�ṩ�����
	printf("��Է�\n");//�������
	printf("�Ի����1�����ǳԿ��⣨0����");//�������
	scanf("%d", &input);//�����ʾ��
	//ѡ�񷽰�
	if (input == 1)
	{
		printf("����������\n");
	}
	else
	{
		printf("���ſ�����\n");
	}
	return 0;
}
