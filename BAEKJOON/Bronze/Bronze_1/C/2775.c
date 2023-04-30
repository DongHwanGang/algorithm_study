#include <stdio.h>
#define MAX 15

void printPersonNumber(int (*arr)[MAX], int k, int n){
	printf("%d\n", arr[k][n]);
}

void fillPerson(int(*arr)[MAX]){
	int rows, cols, temp;
	
	for(rows = 0; rows < MAX; rows++){
		temp = 0;
		for(cols = 1; cols < MAX; cols++){
			if(rows == 0){
				arr[rows][cols] = cols;
			}
			else{
				temp = temp + arr[rows-1][cols];
				arr[rows][cols] = temp;
			}
		}
	}
}

int main (void) {
	int arr[MAX][MAX];
	int k, n, T;
	int input;
	
	fillPerson(arr);
	
	scanf("%d", &T);
	for(input = 0; input < T; input++){
		scanf("%d", &k);
		scanf("%d", &n);
		printPersonNumber(arr, k, n);
	}
}
