#include <stdio.h>

#define SIZE 9

void print(char board[][SIZE]){
	int i=0, j=0;

	while(i<SIZE){
		j = 0;
		while(j<SIZE){
			printf("%c ",board[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
}
