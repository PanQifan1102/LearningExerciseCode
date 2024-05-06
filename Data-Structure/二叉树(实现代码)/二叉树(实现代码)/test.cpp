#include"BinaryTree.h"

BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	BTNode* node7 = BuyNode(7);
	BTNode* node8 = BuyNode(8);



	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	node5->left = node7;
	node2->right = node7;
	node3->right = node8;

	return node1;
}

void test1()
{
	BTNode* node = CreatBinaryTree();
	PrevOrder(node);
}

void test2()
{
	BTNode* node = CreatBinaryTree();
	InOrder(node);
}

void test3()
{
	BTNode* node = CreatBinaryTree();
	AfterOrder(node);
}

int main()
{
	
	test3();
	return 0;
}