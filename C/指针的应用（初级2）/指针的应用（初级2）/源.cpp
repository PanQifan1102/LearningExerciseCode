#include <stdio.h>
//����ָ��
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	printf("%p\n", *pa);
	printf("%p\n", *ppa);
	return 0;
}

//ָ������
int main()
{
	int arr[10];//��������
	char ch[5];//�ַ�����
	int* parr[5];//ָ������
	return 0;
}