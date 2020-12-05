#pragma once
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
// 告诉我们四种四种游戏状态
//玩家赢  -'*'
//电脑赢  -'#'
//平局    -'C'
//游戏继续 -'Q'
char IsWin(char board[ROW][COL],int row,int col);