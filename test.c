#define _CRT_SECURE_NO_WARNINGS 1

//测试三子棋游戏
#include"game.h"

void menu()
{
	printf("***********************************\n");
	printf("******** 1. paly    0. exit *******\n");
	printf("***********************************\n");
}

//游戏的实现
void game()
{
	//数组-存放棋盘
	char board[ROW][COL];//全部空格
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘
	char ret = 0;//接受状态
	while (1)
	{
		PlayMove(board, ROW, COL);//玩家下
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);//电脑下
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
				printf("退出游戏\n");
				break;
		default:
			    printf("选择错误，请重新选择！\n");
			    break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}