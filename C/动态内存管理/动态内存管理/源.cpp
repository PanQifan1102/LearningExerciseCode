#include<stdio.h>
#include<stdlib.h>

//��̬�ڴ泣������
//�ٶ�NULLָ��Ľ����ò���
void test()
{
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;//���p��ֵΪNULL�������
	free(p);
}

//�ڶԶ�̬�ڴ��Խ�����
int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	int i = 0;
	for (i = 0;i < 40;i++)
	{
		*(p + i) = i;
	}
	return 0;
}

//��ʹ��free�ͷŷǶ�̬�ڴ濪�ٵĿռ�
int main()
{
	int arr[10] = { 0 };//ջ��
	int* p = arr;
	//ʹ��
	free(p);//ʹ��free�ͷŷǶ�̬�ڴ�ռ�
	p = NULL;
	return 0;
}

//��ʹ��free�ͷŶ�̬�ڴ��һ����
int main()
{
	int* p = malloc(10 * sizeof(int));
	if (p == NULL)
	{
		return 1;
	}
	int i = 0;
	for (i = 0;i < 5;i++)
	{
		*p++ = i;
	}
	return 0;
}

//�ݶ�ͬһ�鶯̬�ڴ濪�ٵĿռ����ͷ�
int main()
{
	int* p = (int*)malloc(100);
	//ʹ��
	//�ͷ�
	free(p);
	//�ͷ�
	free(p);return 0;
}

//�޶�̬�ڴ濪��ʱ�����ͷţ��ڴ�й©��
void test()
{
	int* p = (int*)malloc(100);
	if (NULL != p)
	{
		*p = 20;

	}
}
int main()
{
	test();
	while (1);
}