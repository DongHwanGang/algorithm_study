#include <stdio.h>

int func4(int N){
	int two;
	
	for(two = 1; two*2 <= N; two*=2){
	}
	//O(lgN)
	return two;
}

int main (){
	printf("%d", func4(1024));
}
