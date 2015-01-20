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

	x = (int) spot[0];
	putchar(x);

	y = atoi(spot[1]);
	putchar(y);

	putchar('\n');

	board[x][y] = mark[0];

	print(board);
}

	
