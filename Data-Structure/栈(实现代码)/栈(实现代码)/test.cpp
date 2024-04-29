#include "Stack.h"
#include<iostream>
void test1()
{
	ST plist;
	STInit(&plist);
	int cur = 0;

	STPush(&plist, 1);
	STPush(&plist, 2);
	STPush(&plist, 3);
	STPush(&plist, 4);	
	STPush(&plist, 5);
	cur = STTop(&plist);
	std::cout << cur << std::endl;
}

void test2()
{
	ST plist;
	STInit(&plist);
	int cur = 0;

	STPush(&plist, 1);
	STPush(&plist, 2);
	STPush(&plist, 3);
	STPush(&plist, 4);
	STPush(&plist, 5);

	STPop(&plist);
	cur = STTop(&plist);
	std::cout << cur << std::endl;
}

void test3()
{
	ST plist;
	STInit(&plist);
	int cur = 0;

	STPush(&plist, 1);
	STPush(&plist, 2);
	STPush(&plist, 3);
	STPush(&plist, 4);
	STPush(&plist, 5);

	cur = STTop(&plist);
	std::cout << cur << std::endl;
}

void test4()
{
	ST plist;
	STInit(&plist);
	int cur = 0;

	STPush(&plist, 1);
	STPush(&plist, 2);
	STPush(&plist, 3);
	STPush(&plist, 4);
	STPush(&plist, 5);

	int size =  STSize(&plist);
	std::cout << size << std::endl;
}

int main()
{
	test4();
	return 0;
}