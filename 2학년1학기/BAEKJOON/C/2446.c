#include <stdio.h>

int main () {
	int n, row, col;
	
	scanf("%d", &n);
	
	for(row = 0; row < n; row++){
		for(col = 0; col < 2*n - 1 - row; col++){
			if(col >= row){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for(row = n - 1; row > 0; row--){
		for(col = 0; col < 2*n - row; col++){
			if(col >= row - 1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
