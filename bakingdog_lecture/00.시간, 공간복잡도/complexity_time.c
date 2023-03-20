#include <stdio.h>

int func1(int n){
	int div, sum = 0;
	
	for(div = n; div > 0; div--){
		if(div % 3 == 0 || div % 5 == 0){
			sum += div;
		}
	}
	printf("%d", sum); //시간복잡도는 O(n) 
}

int main () {
	int n;
	
	scanf("%d", &n);
	func1(n);
}
