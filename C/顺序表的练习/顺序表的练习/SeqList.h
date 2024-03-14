#pragma once
//头文件包含
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//=======================================
//宏的定义
#define N 10
//=======================================
//类型的重定义
typedef int SLDatatype;
//=======================================
//创建顺序表
////静态数据表
//struct SeqList
//{
//	SLDatatype a[N];
//	int size;
//};
//动态顺序表
typedef struct SeqList
{
	SLDatatype* a;
	int size;//存储的有效数据个数
	int capacity;//总容量
}SL;
//=======================================
//相关函数的声明
//初始化顺序表的函数
void SLInit(SL *psl);
//销毁顺序表的函数
void SLDestroy(SL *psl);
//顺序表的尾插
void SLPushBack(SL* psl, SLDatatype x);
//顺序表的头插
void SLPushFront(SL* psl, SLDatatype x);
//顺序表的尾删
void SLPopBack(SL* psl);
//顺序表的头删
void SLPopFront(SL* psl);
//检查容量的函数
void SLCheckCapacity(SL* psl);
//顺序表的打印函数
void SLPrint(SL* psl);
//顺序表任意位置数据的插入
void SLInsert(SL* psl, int pos,SLDatatype x);
//顺序表任意位置数据的删除
void SlErase(SL* psl, int pos);
//顺序表数据的查找
int SLFind(SL* psl, SLDatatype x);
//顺序表数据的修改
void SLModify(SL* psl, int pos, SLDatatype x);