#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3


//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//1. 玩家赢了 - *
//2. 电脑赢了 - #
//3. 平局 - Q
//4. 游戏继续 - C

//判断游戏是否有输赢
char IsWin(char board[ROW][COL], int row, int col);