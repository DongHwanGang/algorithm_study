#include <stdio.h>

int main () {
	int n, row, col;
	
	scanf("%d", &n);
	
	for(row = 0; row < n; row++){
		for(col = 0; col < n*2 - row - 1; col++){
			if(col >= row){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
