#include <stdio.h>

int func(int N){
    if (N == 0) return 1;
    return func(N - 1)* N;
}

int main () {
    int N, K, answer;

    scanf("%d %d", &N, &K);
    
    answer = func(N) / (func(K) * func(N - K));
    
    printf("%d", answer);
}