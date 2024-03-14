#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
//测试的函数
void test1()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushFront(plist, 4);
	LTPrint(plist);
}
//函数的逻辑实现
int main()
{
	test1();
	return 0;
}