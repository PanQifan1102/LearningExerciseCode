#pragma once
#include <stdio.h>  
#include <stdlib.h>  
//��ȫ�������Ķ���
#define MAX_SIZE 100 // ����˳��������С  
typedef int ElementType; // �������ڵ�Ԫ������ 
// ǰ��������ݹ飩  
void preorderTraversal(ElementType tree[], int size, int index);
// ����������ݹ飩  
void inorderTraversal(ElementType tree[], int size, int index);
// ����������ݹ飩  
void postorderTraversal(ElementType tree[], int size, int index);
//����ȫ�������ĸ߶�
int BTreeHeight(ElementType tree[], int size, int index);