#include<string.h>
#include<stdio.h>
//�º�������ϰ��
int main()
{
	char arr1  [20] = { 0 };
	char arr2 [] = "hello";
	strcpy (arr1, arr2);
	printf("%s", arr1);
	return 0;
}

//�º�������ϰ��
int main()
{
	char arr[] = "hello,Lihua";
	memset(arr, 'x', 5);
	printf("%s", arr);
	return 0;
}

//�ҳ��������������ֵ
int get_max(int x, int y)//�Զ��庯��
{
	int z = 0;
	if (x < y)
		z = y;
	else
		z = x;
	return z;
}
int main()//��������
{
	int a = 20;
	int b = 10;
	int max = get_max(a, b);
	printf("max=%d", max);
	return 0;
}

//дһ�����������������͵�ֵ�ĺ���
void swap(int *pa,int *pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}
int main()
{
	int a = 20;
	int b = 10;
	printf("����ǰ��a=%d b=%d", a, b);
	swap(&a, &b);
	printf("������a=%d b=%d", a, b);
	return 0;
}//��ָ��ʹ��������swap����������ַ����ֵ�ϵ���ϵ

