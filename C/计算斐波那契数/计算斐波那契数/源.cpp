#define _CRT_SECURE_NO_WARNINGS 1
/*�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
���磺
���룺5  �����5
���룺10�� �����55
���룺2�� �����1
*/

//˼·
//쳲��������й�ʽ
//Fib(n) = 1 , n = 1,2
//       = Fib(n-1) + Fib(n-2) , n > 2

#include<stdio.h>
//�ݹ鷽ʽ
int Fib(int x)
{
	if (x <= 2)
		return 1;
	else
	    return Fib(x - 1) + Fib(x - 2);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int a = Fib(n);
	printf("��%d��쳲��������ǣ�%d\n", n, a);
	return 0;
}

//�ǵݹ鷽ʽ
int Fib(int m)
{
	if (m == 1 || m == 2)
		return 1;
	int a = 1;
	int b = 1;
	int c = 0;
	while (m >= 2)
	{
		c = c + a;
		a = b;
		b = c;
		m = m - 1;
	}
	return c;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", Fib(n));
	return 0;
}
