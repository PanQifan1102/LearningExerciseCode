#include<stdio.h>
//typedef��Ӧ��
int main()
{
	unsigned int num = 200;
	return 0;
}
typedef unsigned int u_int;
int main()
{
	u_int num= 200;
	printf("%d\n", num);
	return 0;
}
//static��Ӧ�â�
void test()
{
	static int a = 1;//������static�����Ϊʮ��2������ӣ����Ϊ��2��3��������10��11.
	a++;
	printf("%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}
//static��Ӧ�â�
extern int g_val;
int main()
{
    printf("%d\n", g_val);
	return 0;
}

//static��Ӧ�â�
extern int Add(int x, int y);
int main()
{
	int x = 2;
	int y = 3;
	int sum = Add(2,3);
	printf("%d\n", sum);
    return 0;
}
//�����ͺ��Ӧ��
#define ADD(x,y) x+y
int main()
{
	printf("%d\n", ADD(2, 3));//��5
	return 0;
}
int main()
{
	printf("%d\n", 4*ADD(2, 3));//��11
	return 0;
}
#define ADD(x,y) (x+y)
int main()
{
	printf("%d\n", 4*ADD(2, 3));//��20
	return 0;
}

