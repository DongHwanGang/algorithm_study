#include <stdio.h>

void print_sort(int sort[]){
	int print;
	
	for(print = 0; print < 10; print++){
		printf("%d\n", sort[print]);
	}
}

void mod_num(int num, int sort[]){
	int mod;
	
	for(num; num > 0; num /= 10){
		sort[num%10] += 1;
	}
}

void input_mlt_num (int* num){
	int input = 0, temp;
	
	for(input = 0; input < 3; input++){
		scanf("%d", &temp);
		*num = *num * temp;
	}
}

int main () {
	int num = 1;
	int sort[10] = {0};
	
	input_mlt_num(&num);
	mod_num(num, sort);
	print_sort(sort);
}
