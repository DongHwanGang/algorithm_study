#include <stdio.h>

void print_number(long long int a, long long int b){
	for(a = a + 1; a < b; a++){
		printf("%lld ", a);
	}
}

void swap(long long int* a, long long int* b){
	long long int temp;
	
	temp = *b;
	*b = *a;
	*a = temp;
}

int main () {
	long long int a, b;
	
	scanf("%lld %lld", &a, &b);
	
	if (a > b){
		swap(&a, &b);
	}
	
	if (a == b){
		printf("%d", 0);
	}
	
	else{
		printf("%lld\n", b - a - 1);
		print_number(a, b);
	}
	// 파이썬은 int의 크기가 상관없는데 c는 범위 잘 확인. 
} 
