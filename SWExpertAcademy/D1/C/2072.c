#include <stdio.h>
#define MAX 10

int main (){
    int n, input, add, sum, temp;

    scanf("%d", &n);

    for(input = 0; input < n; input++){
    	sum = 0;
        for(add = 0; add < MAX; add++){
            scanf("%d", &temp);
            if (temp%2){
                sum += temp;
            }
        }
        printf("#%d %d", input +1, sum);
    }
    
    return 0;
}
