//�ԡ���������Ӧ�ã�1����дһ�������������ͱ�����ֵ�ĺ�����swap�������岿�ֵ�����˼�����Ż�
#include<stdio.h>
////ԭ�������
/*void swap(int* pa, int* pb)
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
	printf("����ǰ��a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("������a=%d b=%d", a, b);

	return 0;
}*/
////����˼�����Ż���Ĵ���
void swap(int *a, int *b)
{
	int sum = *a + *b;
	*a = sum - *a;
	*b = sum - *b;
	return ;
	
}
int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d b=%d", a, b);
	swap(&a, &b);
	printf("������a=%d b=%d", a,b);
    return 0;
}
//����˼������ܽ᣺
//�ڶ����º����Ĺ����У�����ĺ����Ĳ�����ѡֵȡ�����������Ĳ�
//��������������������Ĳ���ʱ����Ҫ���ò�����ֵ��Ҫȡ���ַ��
// �������¶���ĺ������������Ĳ�������׼ȷ���ֳ�����