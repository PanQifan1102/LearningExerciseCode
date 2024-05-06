#include<stdio.h>
#include<stdlib.h>
typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;  //����
	struct BinaryTreeNode* left;  //����������
	struct BinaryTreeNode* right;  //����������
}BTNode;

void PrevOrder(BTNode* root);

void InOrder(BTNode* root);

void AfterOrder(BTNode* root);

BTNode* BuyNode(BTDataType x);

BTNode* CreatBinaryTree();