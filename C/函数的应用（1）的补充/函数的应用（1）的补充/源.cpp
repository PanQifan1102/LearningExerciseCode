//对“‘函数的应用（1）’写一个交换两个整型变量的值的函数”swap函数定义部分的自我思考及优化
#include<stdio.h>
////原程序代码
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
	printf("交换前：a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后：a=%d b=%d", a, b);

	return 0;
}*/
////自我思考及优化后的代码
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
	printf("交换前：a=%d b=%d", a, b);
	swap(&a, &b);
	printf("交换后：a=%d b=%d", a,b);
    return 0;
}
//自我思考后的总结：
//在定义新函数的过程中，定义的函数的参数的选值取决于主函数的参
//数，因此在引用主函数的参数时不仅要引用参数的值还要取其地址。
// 这样在新定义的函数中主函数的参数才能准确表现出来。