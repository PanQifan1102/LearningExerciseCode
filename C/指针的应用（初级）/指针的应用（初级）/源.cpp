#include<stdio.h>
//指针和指针类型
//①
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
//②
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

//野指针
//成因：1.指针未初始化；
//      2.越界访问；
//      3.非法访问内存。
//避免：1.指针初始化；
//      2.防止指针越界；
//      3.指针指向空间释放后及时放置NULL（空指针）；
//      4.指针使用之前检查有效性。

//指针运算
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