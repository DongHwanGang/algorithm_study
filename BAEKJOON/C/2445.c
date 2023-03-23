#include <stdio.h>

int main () {
	int n, row, col;
	
	scanf("%d", &n);
	
	for(row = 0; row < n; row++){
		for(col = 0; col < n*2; col++){
			if (col <= row || col >= n*2 - row - 1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for(row = n - 1; row > 0; row--){
		for(col = 0; col < n*2; col++){
			if(col <= row - 1 || col >= n*2 - row){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
