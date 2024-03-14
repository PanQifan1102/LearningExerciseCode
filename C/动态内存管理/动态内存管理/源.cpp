#include<stdio.h>
#include<stdlib.h>

//动态内存常见错误
//①对NULL指针的解引用操作
void test()
{
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;//如果p的值为NULL，则错误
	free(p);
}

//②对动态内存的越界访问
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

//③使用free释放非动态内存开辟的空间
int main()
{
	int arr[10] = { 0 };//栈区
	int* p = arr;
	//使用
	free(p);//使用free释放非动态内存空间
	p = NULL;
	return 0;
}

//④使用free释放动态内存的一部分
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

//⑤对同一块动态内存开辟的空间多次释放
int main()
{
	int* p = (int*)malloc(100);
	//使用
	//释放
	free(p);
	//释放
	free(p);return 0;
}

//⑥动态内存开辟时忘记释放（内存泄漏）
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