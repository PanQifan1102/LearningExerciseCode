/*��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9*/
#include<stdio.h>

int main()
{
	int n = 0;
	int count = 0;

	for (n = 0; n < 101; n++)//����0-100������
	{
		if (9 == n % 10 || 9 == n / 10)//�ж����Ƿ�������9
		{
			printf("%d ", n);
			count++;
		}
	}
	printf("\n һ����%d��9 \n", count + 1);
	return 0;
}
