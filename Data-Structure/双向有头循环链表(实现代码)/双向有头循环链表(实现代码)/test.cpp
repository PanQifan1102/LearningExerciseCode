#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void TestList1()
{
	LTNode* plist = LTInit();
	LTPushFront(plist, 1);
	LTPushFront(plist, 2);
	LTPushFront(plist, 3);
	LTPushFront(plist, 4);
	LTPushFront(plist, 5);

	LTPrint(plist);

}

void TestList2()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);

	LTPrint(plist);

}

void TestList3()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);

	LTInsert(plist, 10);

	LTPrint(plist);

}

void TestList4()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);

	LTPopFront(plist);

	LTPrint(plist);

}

void TestList5()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);

	LTPopBack(plist);

	LTPrint(plist);

}

void TestList6()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);

	LTNode*  cur = LTFind(plist, 3);
	LTErase(cur);

	LTPrint(plist);

}

#include<iostream>
void TestList7()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);

	LTNode* cur = LTFind(plist, 3);
	std::cout << &cur << std::endl;

}

void TestList8()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);


	LTPrint(plist);

}

int main()
{
	TestList8();

	return 0;
}

