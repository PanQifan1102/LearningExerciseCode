#include<stdio.h>
//ָ���ָ������
//��
int main()
{
	char a = 0 * 11223344;
	char* pc = &a;
	*pc = 0;
	int b = 0 * 55667788;
	int* pb = &b;
	*pb = 0;
	return 0;
}
//��
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int* pc = arr;
	printf("%p\n", p);
	printf("%p\n", pc);
	printf("%p\n", p+1);
	printf("%p\n", pc+1);
	return 0;
}

//Ұָ��
//����1.ָ��δ��ʼ����
//      2.Խ����ʣ�
//      3.�Ƿ������ڴ档
//���⣺1.ָ���ʼ����
//      2.��ָֹ��Խ�磻
//      3.ָ��ָ��ռ��ͷź�ʱ����NULL����ָ�룩��
//      4.ָ��ʹ��֮ǰ�����Ч�ԡ�

//ָ������
#define N_VALUES 5
float values[N_VALUES];
float* vp;
for (vp = &values[0]; vp < &values[N_VALUES];)
{
	*vp++;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", &arr[9] - &arr[0]);
	return 0;
}