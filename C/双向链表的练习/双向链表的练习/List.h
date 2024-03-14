#pragma once
//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>//����ֵʹ�õ�ͷ�ļ�

//���͵��ض���
typedef int LTDataType;

//˫����Ĵ���
typedef struct ListNode
{
	struct ListNode* next;//��һ���ڵ�ĵ�ַ
	struct ListNode* prev;//��һ���ڵ�ĵ�ַ
	LTDataType data;//��������
}LTNode;

//����������
//˫�����β��
void LTPushBack(LTNode* phead,LTDataType x);
LTNode* BuyLTNode(LTDataType x);
//˫����ĳ�ʼ��
LTNode* LTInit();
//˫�����βɾ
void LTPopback(LTNode* phead);
//˫�����ͷ��
void LTPushFront(LTNode* phead, LTDataType x);
//˫�����ͷɾ
void LTPopFront(LTNode* phead);
//˫����Ĵ�ӡ(����)
void LTPrint(LTNode* phead);
//�ж������Ƿ�Ϊ��
bool LTEmpty(LTNode* phead);
//����˫���������
LTNode* LTFind(LTNode* phead, LTDataType x);
//��˫���������λ�ò���
void LTInsert(LTNode* pos, LTDataType x);
//��˫���������λ��ɾ��
void LTErase(LTNode* pos);
//˫���������
void LTDestory(LTNode* phead);