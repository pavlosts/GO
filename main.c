#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 9

extern void init(char board[][SIZE]);
extern void print(char board[][SIZE]);
extern void refresh(char board[][SIZE], char *color, char *spot);

int main() {
	char board[SIZE][SIZE];
	char arg1[] = "white";
	char arg2[] = "C3";
	char command[] = "play";
	int pass = 0, i=0;
	
	init(board);										//Arxikopoiei to tamplo

	print(board);										//Typwnei to tablo

	while(pass < 10){
		/* Read command from command line*/

		scanf("%s",arg2);
		if(!strcmp(command,"play")){
			refresh(board, arg1, arg2);
		}

		//print(board);
		pass++;
	}
	return 0;
}
