#pragma once

//头文件的包含
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//符号定义
#define ROW 3
#define COL 3

//函数的声明
////初始化棋盘的函数
void InitBoard(char board[ROW][COL], int row, int col);
////打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);
////玩家下棋的函数
void PlayerMove(char board[ROW][COL], int row, int col);
////电脑下棋的函数
void ComputerMove(char board[ROW][COL], int row, int col);

//判断结果
//1.玩家赢------*；
//2.电脑赢------#；
//3.平局--------Q；
//4.游戏继续----C。

//判断是否有输赢
char IsWin(char board[ROW][COL], int row, int col);



