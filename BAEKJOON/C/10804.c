#include <stdio.h>

void print_card(int arr[]){
	int print;
	
	for(print = 1; print < 21; print++){
		printf("%d ", arr[print]);
	}
}

void reverse_card(int arr[], int a, int b){
	int temp;
	
	while(a <= b){
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
		a += 1;
		b -= 1;
	}
}

void input_section(int arr[]){
	int input, a, b;
	
	for(input = 0; input < 10; input++){
		scanf("%d %d", &a, &b);
		reverse_card(arr, a, b);
	}
}

int main () {
	int card[21] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	
	input_section(card);
	print_card(card);
}
