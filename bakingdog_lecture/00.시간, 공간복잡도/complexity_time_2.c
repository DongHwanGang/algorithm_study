#include <stdio.h>

int func2(int arr[], int N){
	int std, ed, answer = 0;
	
	for(std = 0; std < N; std++){
		for(ed = 0; ed < N; ed++){
			if (arr[std] + arr[ed] == 100){
				answer = 1;
				break;
			}
		}
	}
	print(answer);
}

