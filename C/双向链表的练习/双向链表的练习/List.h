#pragma once
//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>//布尔值使用的头文件

//类型的重定义
typedef int LTDataType;

//双链表的创建
typedef struct ListNode
{
	struct ListNode* next;//下一个节点的地址
	struct ListNode* prev;//上一个节点的地址
	LTDataType data;//数据内容
}LTNode;

//函数的声明
//双链表的尾插
void LTPushBack(LTNode* phead,LTDataType x);
LTNode* BuyLTNode(LTDataType x);
//双链表的初始化
LTNode* LTInit();
//双链表的尾删
void LTPopback(LTNode* phead);
//双链表的头插
void LTPushFront(LTNode* phead, LTDataType x);
//双链表的头删
void LTPopFront(LTNode* phead);
//双链表的打印(遍历)
void LTPrint(LTNode* phead);
//判断链表是否为空
bool LTEmpty(LTNode* phead);
//查找双链表的数据
LTNode* LTFind(LTNode* phead, LTDataType x);
//在双链表的任意位置插入
void LTInsert(LTNode* pos, LTDataType x);
//在双链表的任意位置删除
void LTErase(LTNode* pos);
//双链表的销毁
void LTDestory(LTNode* phead);