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
    int input, num, intger = 1;
    
    for(input = 0; input < row; input++){
        for(num = 0; num <= input; num++){
            arr[input - num][num] = intger;
            intger++;
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