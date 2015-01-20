#include <stdio.h>

#define SIZE 9

void print(char board[][SIZE]){
	int i=0, j=0;

	printf("  ");
	for(i=65; i<65+SIZE+1; i++){
		if(i=='I')
			continue;
		printf("%c ",i);
	}
	printf(" \n");

	i=1;
	while(i<=SIZE){
		j = 1;
		printf("%d ",i);
		while(j<=SIZE){
			printf("%c ",board[i-1][j-1]);
			j++;
		}
		printf("%d\n",i);
		i++;
	}

	printf("  ");
	for(i=65; i<65+SIZE+1; i++){
		if(i=='I')
			continue;
		printf("%c ",i);
	}
	printf(" \n");
}
