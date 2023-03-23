#include <stdio.h>

void print_arr(int length[]){
	int print = 0;
	
	for(print = 2; print < 9; print++){
		printf("%d\n", length[print]);
	}
}

void bubble_sort(int length[]){
	int std, cmp, temp, flag;
	
	for(std = 0; std < 8; std++){
		flag = 0;
		for(cmp = 0; cmp < 8 - std; cmp++){
			if(length[cmp] > length[cmp + 1]){
				temp = length[cmp + 1];
				length[cmp + 1] = length[cmp];
				length[cmp] = temp;
				flag = 1;
			}
		}
		if(!flag){
			break;
		}
	}
}

void search_dwarf(int length[], int rest){
	int search, cmp, temp;
	
	for(search = 0; search < 9; search++){
		temp = rest - length[search];
		if (temp < 0){
			continue;
		}
		for(cmp = 0; cmp < 9; cmp++){
			if(search != cmp){
				if(temp == length[cmp]){
					length[cmp] = length[search] = -1;
					return ;
				}
			}
		}
	}
}

void input_length(int length[], int* sum){
	int input;
	
	for(input = 0; input < 9; input++){
		scanf("%d", &length[input]);
		*sum = *sum + length[input];
	}
}

int main () {
	int length[9] = {0};
	int sum = 0;
	
	input_length(length, &sum);
	search_dwarf(length, sum - 100);
	bubble_sort(length);
	print_arr(length);
}
