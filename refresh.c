#include <stdio.h>
#include <string.h>

#define SIZE 9

extern void print(char board[][SIZE]);

void refresh(char board[][SIZE], char *color, char *spot){
	char *mark;
	int x,y;

	if(strcmp(color,"black")){
		mark = "X";
	}else{
		mark = "O";
	}

	if(spot[0] < 'I'){
		x = spot[0] - 'A';
	}else if(spot[0] > 'I'){
		x = spot[0] - 'A' - 1;
	}

	y = (int) spot[1] - '1';

	board[y][x] = mark[0];

	print(board);
}

	
