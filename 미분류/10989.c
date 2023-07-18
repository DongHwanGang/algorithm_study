#include <stdio.h>

int main () {
    int arr[10001] = {0};
    int N, temp, i;

    scanf("%d", &N);

    while(N--){
        scanf("%d", &temp);
        arr[temp] += 1;
    }

    for(temp = 0; temp < 10001; temp++){
        if(arr[temp] != 0){
            for(i = 0; i < arr[temp]; i++)
                printf("%d\n", temp);
            
        }
    }
}