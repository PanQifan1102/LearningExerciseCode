#include<stdio.h>

//дһ��������ÿ����һ��num��ֵ����1
void add(int* n)
{
	(*n)++;
}
int main()
{
	int num = 0;
	add(&num);
	printf("%d\n",num);
	
	add(&num);
	printf("%d\n", num);
	return 0;
}

//Ƕ�׵���
void test3()
{
	printf("h");
}
int test2()
{
	test3();
	return 0;
}
int main()
{
	test2();
	return 0;
}

//��ʽ����
#include<string.h>
int main()
{
	printf("%d\n", strlen("abc"));
	return 0;
}

//�����������Ͷ���
int main()
{
	int a = 10;
	int b = 20;
	//��������
	int add(int, int);

	int c = add(a, b);
	printf("%d\n", c);
	return 0;
}
int add(int x,int y)//�����Ķ���
{
	return x + y;
}