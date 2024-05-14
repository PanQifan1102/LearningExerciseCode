#pragma once
#include <stdio.h>  
#include <stdlib.h>  
//完全二叉树的定义
#define MAX_SIZE 100 // 假设顺序表的最大大小  
typedef int ElementType; // 二叉树节点元素类型 
// 前序遍历（递归）  
void preorderTraversal(ElementType tree[], int size, int index);
// 中序遍历（递归）  
void inorderTraversal(ElementType tree[], int size, int index);
// 后序遍历（递归）  
void postorderTraversal(ElementType tree[], int size, int index);
//求完全二叉树的高度
int BTreeHeight(ElementType tree[], int size, int index);