#pragma once

//ͷ�ļ��İ���
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//���Ŷ���
#define ROW 3
#define COL 3

//����������
////��ʼ�����̵ĺ���
void InitBoard(char board[ROW][COL], int row, int col);
////��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);
////�������ĺ���
void PlayerMove(char board[ROW][COL], int row, int col);
////��������ĺ���
void ComputerMove(char board[ROW][COL], int row, int col);

//�жϽ��
//1.���Ӯ------*��
//2.����Ӯ------#��
//3.ƽ��--------Q��
//4.��Ϸ����----C��

//�ж��Ƿ�����Ӯ
char IsWin(char board[ROW][COL], int row, int col);



