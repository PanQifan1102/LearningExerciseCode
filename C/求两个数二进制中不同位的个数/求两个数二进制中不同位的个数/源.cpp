#define _CRT_SECURE_NO_WARNINGS 1
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//��������:1999 2299
//�������:7

#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

int diff_bit(int m, int n) {
	int tmp = m ^ n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m, n;
	printf("�������������֣� ");

	scanf("%d %d", &m, &n);

	int ret = diff_bit(m, n);

	printf("ret=%d\n", ret);

	system("pause");
	return 0;
}
