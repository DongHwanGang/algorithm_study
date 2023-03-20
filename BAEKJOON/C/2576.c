#include <stdio.h>

int main () {
    int sum = 0, min = 0, i, input;
    
    for(i = 0; i < 7; i++){
        scanf("%d", &input);
        if(min == 0 && input % 2 == 1){
            min = input;
            sum += input;
        }
        
        else if(input % 2 == 1){
            sum += input;
            min = min < input ? min : input;
        }
    }
    if(sum == 0){
        printf("%d", -1);
    }
    else{
        printf("%d\n%d", sum, min);
    }
}//O(1)