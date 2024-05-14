#include"CBTree.h"
void test1() {
    ElementType tree[MAX_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }; // 完全二叉树顺序表  
    int size = sizeof(tree) / sizeof(tree[0]); // 数组大小

    // 找出完全二叉树的节点数 
    int nonZeroCount = 0;
    for (int i = 0; i < size; ++i) {
        if (tree[i] != 0) {
            ++nonZeroCount;
        }
    }

    preorderTraversal(tree, nonZeroCount, 0);
    printf("\n");
}

void test2() {
    ElementType tree[MAX_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }; // 完全二叉树顺序表  
    int size = sizeof(tree) / sizeof(tree[0]); // 数组大小

    // 找出完全二叉树的节点数  
    int nonZeroCount = 0;
    for (int i = 0; i < size; ++i) {
        if (tree[i] != 0) {
            ++nonZeroCount;
        }
    }

    inorderTraversal(tree, nonZeroCount, 0);
    printf("\n");
}

void test3() {
    ElementType tree[MAX_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }; // 完全二叉树顺序表  
    int size = sizeof(tree) / sizeof(tree[0]); // 数组大小

    // 找出完全二叉树的节点数
    int nonZeroCount = 0;
    for (int i = 0; i < size; ++i) {
        if (tree[i] != 0) {
            ++nonZeroCount;
        }
    }

    postorderTraversal(tree, nonZeroCount, 0);
    printf("\n");
}

void test4() {
    ElementType tree[MAX_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 }; // 完全二叉树顺序表  
    int size = sizeof(tree) / sizeof(tree[0]); // 数组大小

    // 找出完全二叉树的节点数
    int nonZeroCount = 0;
    for (int i = 0; i < size; ++i) {
        if (tree[i] != 0) {
            ++nonZeroCount;
        }
    }

    int high = BTreeHeight(tree, nonZeroCount, 0);
    printf("%d\n", high);
}

int main() {
    test1();
    test2();
    test3();
    test4();
    return 0;
}