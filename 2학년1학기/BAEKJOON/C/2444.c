#include <stdio.h>

int main () {
	int n, row, l, r, col;
	
	scanf("%d", &n);
	
	for(row = 0; row < n; row++){
		for(col = 0; col < n + row; col++){
			if(col >= n - row - 1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	for(row = n - 1; row > 0; row--){
		for(col = 0; col < n + row - 1; col++){
			if(n - row <= col){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
