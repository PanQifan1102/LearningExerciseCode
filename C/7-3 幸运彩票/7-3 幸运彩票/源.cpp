#define _CRT_SECURE_NO_WARNINGS 1
//��Ʊ�ĺ����� 6 λ���֣���һ�Ų�Ʊ��ǰ 3 λ�ϵ���֮�͵���
// �� 3 λ�ϵ���֮�ͣ�������Ų�Ʊ�����˵ġ�
// ����������жϸ����Ĳ�Ʊ�ǲ������˵ġ�
//�����ʽ��
//�����ڵ�һ���и���һ�������� N���� 100����
// ��� N �У�ÿ�и���һ�Ų�Ʊ�� 6 λ���֡�
//�����ʽ��
//��ÿ�Ų�Ʊ������������˵ģ�����һ������� You are lucky!��
//������� Wish you good luck.��

#include<stdio.h>
int main()
{
	int n = 0;
	int a[6] = { 0 };
	int i = 0;//6Ϊ��Ʊ����
	int num = 0;
	scanf("%d",&n);
	for (num = 0;num < n;num++)
	{
		scanf("%d", &i);

		a[0] = i / 100000;
		a[1] = i / 10000 % 10;
		a[2] = i / 1000 % 10;
		a[3] = i / 100 % 10;
		a[4] = i / 10 % 10;
		a[5] = i % 10;
		if ((a[0] + a[1] + a[2]) == (a[3] + a[4] + a[5]))
		{
			printf("You are lucky!\n");
		}
		else
		{
			printf("Wish you good luck.\n");
		}
	}
	return 0;
}