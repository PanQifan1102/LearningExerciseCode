#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//���ܼ�����������Ķ�Ԫһ�η���
//���ʵ����
int continue_solve(int* ppa, int* ppb, int* ppc)
{
	int B = sqrt(*ppb * *ppb - 4 * *ppa * *ppc);
	int X1 = (-*ppb + B) / (2 * *ppa);
	int X2 = (-*ppb - B) / (2 * *ppa);
	printf("X1=%d X2=%d\n", X1, X2);
	return 0;
}
//�жϺ����Ƿ���ʵ����
int estimate_A(int *pa,int *pb,int *pc)
{
	
	int A = *pb * *pb - 4 * *pa * *pc;
	if (A >= 0)
	{
		continue_solve(&*pa,&*pb,&*pc);
	}
	else
	{
		printf("�÷�����ʵ���⣡\n");
	}
	return 0;
}
//��������
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("�������Ԫһ�η��̱�׼ʽa,b,c��ֵ\n");
	scanf("%d %d %d", &a, &b, &c);
	int ret = estimate_A(&a,&b,&c);
	return 0;
}