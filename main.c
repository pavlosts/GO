#include <stdio.h>
#include <stdlib.h>

#define SIZE 9

extern void init(char board[][SIZE]);
extern void print(char board[][SIZE]);

int main() {
	char board[SIZE][SIZE];
	
	init(board);										//Arxikopoiei to tamplo

	print(board);										//Typwnei to tablo
		
	return 0;
}
