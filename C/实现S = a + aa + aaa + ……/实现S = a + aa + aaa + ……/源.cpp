#define _CRT_SECURE_NO_WARNINGS 1
//ʵ�ּ��� S = a + aa + ���� + aaa��aaa(n��a)
#include<stdio.h>
#include<math.h>
//Ԥ���㷨��S = a(1+11+111+ ���� +111��1111)
int main()
{
	int a = 0;//�����ֵ
	int n = 0;//�������1�ĸ���
	int j = 0;//��͵�ѭ������
	int k = 0;//��������ѭ������
	int num = 0;//ÿ�����ɵ���
	int sum = 0;//������֮��
	int answer = 0;//��
	printf("Ҫ���� S = a + aa + ���� + aaa��aaa(n��a) �Ľ����\n");
	printf("��ֱ�����a��b��ֵ��");
	scanf("%d %d", &a, &n);

	for (j = 1;j<=n;j++)//���ѭ��
	{
		num = 0;
		for (k = 0;k<j;k++)//����1��11��111����
		{
			num += pow(10, k);
		}
		sum += num;
	}

	answer = sum * a;
	printf("����Ľ���ǣ�S=%d\n", answer);
	return 0;
}