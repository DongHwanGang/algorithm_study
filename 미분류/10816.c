#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct arr{
    int* number;
    int* number_num;
}arr;

void initarrnumber(arr* AR, int data){
    AR->number = (int*)malloc(sizeof(int)*data);
    memset(AR->number, 0, sizeof(int)*data);
}

int main () {
    int N, M, i, j;
    arr AR;
    scanf("%d", &N);
    initarrnumber(&AR, N);

    for(i = 0; i < N; i++){
        AR.number[]
    }
}