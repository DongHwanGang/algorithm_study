#include <stdio.h>

void print_arr(int arr[]){
	int print;
	
	for(print = 0; print < 10; print++){
		printf("%d\n", arr[print]);
	}
}

void divide_value(int arr[], int value){
	int mod;
	
	for(mod = value; mod > 0; mod /= 10){
		arr[mod % 10] += 1;
	}
}

int main () {
	int num;
	int mlt, value = 1;
	int arr[10] = {0};
	
	for(mlt = 0; mlt < 3; mlt++){
		scanf("%d", &num);
		value = value * num;
	}
	
	divide_value(arr, value);
	print_arr(arr);
} 
