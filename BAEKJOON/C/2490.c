#include <stdio.h>

int main () {
    char str[3] = "";
    int i, j, input, sum, print;
    char result[6] = {'D', 'C', 'B', 'A', 'E', '\n'};
    
    for(i = 0; i < 3; i++){
        sum = 0;
        for(j = 0; j < 4; j++){
            scanf("%d", &input);
            sum += input;
        }
        str[i] = result[sum];
    }
    
    for(print = 0; print < 3; print++){
        printf("%c\n", str[print]);
    }
}