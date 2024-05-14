#include"CBTree.h"

void preorderTraversal(ElementType tree[], int size, int index) {
    if (index >= size || tree[index] == 0) return; // Խ���սڵ���ֹͣ  
    printf("%d ", tree[index]); // ���ʽڵ�  
    preorderTraversal(tree, size, 2 * index + 1); // �������ӽڵ�  
    preorderTraversal(tree, size, 2 * index + 2); // �������ӽڵ�  
}
 
void inorderTraversal(ElementType tree[], int size, int index) {
    if (index >= size || tree[index] == 0) return; // Խ���սڵ���ֹͣ  
    inorderTraversal(tree, size, 2 * index + 1); // �������ӽڵ�  
    printf("%d ", tree[index]); // ���ʽڵ�  
    inorderTraversal(tree, size, 2 * index + 2); // �������ӽڵ�  
}

void postorderTraversal(ElementType tree[], int size, int index) {
    if (index >= size || tree[index] == 0) return; // Խ���սڵ���ֹͣ  
    postorderTraversal(tree, size, 2 * index + 1); // �������ӽڵ�  
    postorderTraversal(tree, size, 2 * index + 2); // �������ӽڵ�  
    printf("%d ", tree[index]); // ���ʽڵ�  
}

int BTreeHeight(ElementType tree[], int size, int index)
{
    if (index >= size || tree[index] == NULL)
        return 0;

    int leftHeight = BTreeHeight(tree, size, 2 * index + 1);
    int rightHeight = BTreeHeight(tree, size, 2 * index + 2);

    return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}