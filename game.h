#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3


//��������
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//1. ���Ӯ�� - *
//2. ����Ӯ�� - #
//3. ƽ�� - Q
//4. ��Ϸ���� - C

//�ж���Ϸ�Ƿ�����Ӯ
char IsWin(char board[ROW][COL], int row, int col);