#pragma once
#include"list.h"



void TestSList1()
{
	SLTNode* plist = NULL;
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 2);
	SLPushFront(&plist, 3);
	SLPushFront(&plist, 4);

	SLTPrint(plist);
}

void TestSList2()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);

	SLTPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);

	SLInsert(&plist, plist, 2);

	SLTPrint(plist);
}

void TestSList4()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);

	SLInsertAfter(plist, 2);

	SLTPrint(plist);
}

void TestSList5()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);

	SLPopFront(&plist);

	SLTPrint(plist);
}

void TestSList6()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);

	SLPopBack(&plist);

	SLTPrint(plist);
}

void TestSList7()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);

	SLErase(&plist, plist);

	SLTPrint(plist);
}

void TestSList8()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);

	SLEraseAfter(plist);

	SLTPrint(plist);
}

#include<iostream>

void TestSList9()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);

	SLTNode* cur = NULL;
	cur = STFind(plist, 3);

	std::cout << &cur << std::endl;
}

void TestSList10()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);

	STDefine(plist, 2, 10);
	SLTPrint(plist);
}

void TestSList11()
{
	SLTNode* plist = NULL;
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLPushBack(&plist, 3);
	SLPushBack(&plist, 4);

	SLTPrint(plist);
}


int main()
{
	TestSList11();
	return 0;
}