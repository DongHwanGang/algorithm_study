#include <stdio.h>
#include <stdlib.h>

int** free_dynamic_array (int** arr, int row){
    int del;
    
    for(del = 0; del < row; del++){
        free(arr[del]);
    }
    free(arr);
    
    return NULL;
}

void print_numberbox (int** arr, int row, int col){
    int print, num;
    
    for(print = 0; print < row; print++){
        for(num = 0; num < col; num++){
            printf("%d ", arr[print][num]);
        }
        printf("\n");
    }
}

void input_numberbox (int** arr, int row, int col){
    int intger = 1;
    int subrow = 0, addcol = 0;
    int colmax = 0, num = 0;
    
    while(intger <= row * col){
		for(subrow, addcol; addcol + num <= colmax; num++){
	    	arr[subrow - num][addcol + num] = intger;
	    	intger++;
	    }
	    num = 0;
	    if(subrow < row - 1){
	    	subrow++;
		}
		else{
			addcol++;
		}
		
		if(colmax < col - 1){
			colmax++;
		}
	}
}

int** dynamic_memory_array (int** arr, int row, int col){
    int allocate;
    
    while(!arr){
        arr = (int**)malloc(sizeof(int*) * row);
    }
    
    for(allocate = 0; allocate < row; allocate++){
        arr[allocate] = (int*)malloc(sizeof(int) * col);
    }
    
    return arr;
}

int main () {
    int n, m;
    int** numberbox = NULL;
    
    scanf("%d %d", &n, &m);
    
    numberbox = dynamic_memory_array (numberbox, n, m);
    input_numberbox (numberbox, n, m);
    print_numberbox (numberbox, n, m);
    numberbox = free_dynamic_array (numberbox, n);
} 
