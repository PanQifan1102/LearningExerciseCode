#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//仅能计算解有理数的二元一次方程
//求出实数解
int continue_solve(int* ppa, int* ppb, int* ppc)
{
	int B = sqrt(*ppb * *ppb - 4 * *ppa * *ppc);
	int X1 = (-*ppb + B) / (2 * *ppa);
	int X2 = (-*ppb - B) / (2 * *ppa);
	printf("X1=%d X2=%d\n", X1, X2);
	return 0;
}
//判断函数是否有实数解
int estimate_A(int *pa,int *pb,int *pc)
{
	
	int A = *pb * *pb - 4 * *pa * *pc;
	if (A >= 0)
	{
		continue_solve(&*pa,&*pb,&*pc);
	}
	else
	{
		printf("该方程无实数解！\n");
	}
	return 0;
}
//函数主体
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入二元一次方程标准式a,b,c的值\n");
	scanf("%d %d %d", &a, &b, &c);
	int ret = estimate_A(&a,&b,&c);
	return 0;
}