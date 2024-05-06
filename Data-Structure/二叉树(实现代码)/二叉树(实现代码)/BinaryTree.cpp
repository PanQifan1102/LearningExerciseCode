#include"BinaryTree.h"
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

void AfterOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}

	AfterOrder(root->left);
	AfterOrder(root->right);
	printf("%d ", root->data);
}

BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		return NULL;
	}

	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}

