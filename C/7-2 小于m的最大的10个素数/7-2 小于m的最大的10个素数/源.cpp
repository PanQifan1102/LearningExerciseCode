#define _CRT_SECURE_NO_WARNINGS 1
//����һ������m��50 < m < 20000����
// �ҳ�С��m������10��������
//	�����ʽ :
//������һ���и���һ��������m��50 < m < 20000����
//	�����ʽ :
//��һ���а��ݼ�˳�����10������������������
//ÿ���������ռ6�С�û�������κθ��Ӹ�ʽ���ַ���

#include<stdio.h>
int judge(int n)
{
	int i;
	for (i = 2; i < n; i++)
		if (n % i == 0)
			break;
	if (i < n) 
		return 0;
	else 
		return 1;
}
int main()
{
	int judge(int n);
	int m, i, count = 0;
	scanf("%d", &m);
	for (i = m - 1; i > 1; i--)
	{
		if (judge(i))
		{
			printf("%6d", i);
			count++;
		}
		if (count == 10)
			break;
	}
}
