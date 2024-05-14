#include"CBTree.h"

void preorderTraversal(ElementType tree[], int size, int index) {
    if (index >= size || tree[index] == 0) return; // 越界或空节点则停止  
    printf("%d ", tree[index]); // 访问节点  
    preorderTraversal(tree, size, 2 * index + 1); // 遍历左子节点  
    preorderTraversal(tree, size, 2 * index + 2); // 遍历右子节点  
}
 
void inorderTraversal(ElementType tree[], int size, int index) {
    if (index >= size || tree[index] == 0) return; // 越界或空节点则停止  
    inorderTraversal(tree, size, 2 * index + 1); // 遍历左子节点  
    printf("%d ", tree[index]); // 访问节点  
    inorderTraversal(tree, size, 2 * index + 2); // 遍历右子节点  
}

void postorderTraversal(ElementType tree[], int size, int index) {
    if (index >= size || tree[index] == 0) return; // 越界或空节点则停止  
    postorderTraversal(tree, size, 2 * index + 1); // 遍历左子节点  
    postorderTraversal(tree, size, 2 * index + 2); // 遍历右子节点  
    printf("%d ", tree[index]); // 访问节点  
}

int BTreeHeight(ElementType tree[], int size, int index)
{
    if (index >= size || tree[index] == NULL)
        return 0;

    int leftHeight = BTreeHeight(tree, size, 2 * index + 1);
    int rightHeight = BTreeHeight(tree, size, 2 * index + 2);

    return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}