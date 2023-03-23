#include <stdio.h>

int main () {
	int n, row, col;
	
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
}
