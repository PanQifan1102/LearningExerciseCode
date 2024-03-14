/*计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果*/
#include<stdio.h>

int main()
{
	int i = 0;
	double sum = 0;
	int m = 1;
	
	for (i = 1; i <= 100; i++) 
	{
		sum = sum + (1.0 / i) * m;   //m=1或者m=-1来变符号
		m = -m;
	}
	printf("1/1 - 1/2 + 1/3 - 1/4 + …… + 1/99 - 1/100 = %f\n", sum);
	return 0;
}
