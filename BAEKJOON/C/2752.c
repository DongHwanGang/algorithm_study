#include <stdio.h>

int main (){
    int a, b, c;
    int max, min;
    
    scanf("%d %d %d", &a, &b, &c);
    
    max = a < b ? b < c ? c : b : a < c ? c : a;
    min = a < b ? a < c ? a : c : b < c ? b : c;
    
    printf("%d %d %d", min, a + b + c - (max + min), max);
}//O(1)
