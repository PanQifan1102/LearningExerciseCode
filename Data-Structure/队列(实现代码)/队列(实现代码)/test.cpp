#include"Queue.h"
#include<iostream>


void test1()
{
	Queue plist;
	QueueInit(&plist);

	QueuePush(&plist, 1);
	QueuePush(&plist, 2);
	QueuePush(&plist, 3);
	QueuePush(&plist, 4);
	QueuePush(&plist, 5);

	int front = QueueFront(&plist);
	int back = QueueBack(&plist);
	std::cout << front << std::endl;
	std::cout << back << std::endl;
}

void test2()
{
	Queue plist;
	QueueInit(&plist);

	QueuePush(&plist, 1);
	QueuePush(&plist, 2);
	QueuePush(&plist, 3);
	QueuePush(&plist, 4);
	QueuePush(&plist, 5);
	QueuePop(&plist);
	int front = QueueFront(&plist);
	int back = QueueBack(&plist);
	std::cout << front << "-" << back << std::endl;
	QueuePop(&plist);
	front = QueueFront(&plist);
	back = QueueBack(&plist);
	std::cout << front << "-" << back << std::endl;
}

void test3()
{
	Queue plist;
	QueueInit(&plist);

	QueuePush(&plist, 1);
	QueuePush(&plist, 2);
	QueuePush(&plist, 3);
	QueuePush(&plist, 4);
	QueuePush(&plist, 5);

	int front = QueueFront(&plist);
	std::cout << front << std::endl;
}

void test4()
{
	Queue plist;
	QueueInit(&plist);

	QueuePush(&plist, 1);
	QueuePush(&plist, 2);
	QueuePush(&plist, 3);
	QueuePush(&plist, 4);
	QueuePush(&plist, 5);
	int back = QueueBack(&plist);
	std::cout << back << std::endl;
}

void test5()
{
	Queue plist;
	QueueInit(&plist);

	QueuePush(&plist, 1);
	QueuePush(&plist, 2);
	QueuePush(&plist, 3);
	QueuePush(&plist, 4);
	QueuePush(&plist, 5);
	int num = QueueSize(&plist);
	std::cout << num << std::endl;
}

int main()
{
	test5();
	return 0;
}