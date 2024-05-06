#include<stdio.h>
#include<stdlib.h>
typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;  //数据
	struct BinaryTreeNode* left;  //左子树链接
	struct BinaryTreeNode* right;  //右子树链接
}BTNode;

void PrevOrder(BTNode* root);

void InOrder(BTNode* root);

void AfterOrder(BTNode* root);

BTNode* BuyNode(BTDataType x);

BTNode* CreatBinaryTree();