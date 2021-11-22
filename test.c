#define _CRT_SECURE_NO_WARNINGS 1

//������������Ϸ
#include"game.h"

void menu()
{
	printf("***********************************\n");
	printf("******** 1. paly    0. exit *******\n");
	printf("***********************************\n");
}

//��Ϸ��ʵ��
void game()
{
	//����-�������
	char board[ROW][COL];//ȫ���ո�
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	char ret = 0;//����״̬
	while (1)
	{
		PlayMove(board, ROW, COL);//�����
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
			break;
		ComputerMove(board, ROW, COL);//������
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
				printf("�˳���Ϸ\n");
				break;
		default:
			    printf("ѡ�����������ѡ��\n");
			    break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}