#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"
//���Եĺ���
void test1()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushFront(plist, 4);
	LTPrint(plist);
}
//�������߼�ʵ��
int main()
{
	test1();
	return 0;
}