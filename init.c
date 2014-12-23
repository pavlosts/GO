#include <stdio.h>
//#include "myhead.h"

#define SIZE 9

void init(char board[][SIZE]){
	int i=0, j=0;
	
	while( i < SIZE ){
		j = 0;
		while( j < SIZE ){
			board[i][j] = '+';									//Arxikopoiei ton pinaka me +
			j++;
		}
		i++;
	}
}
