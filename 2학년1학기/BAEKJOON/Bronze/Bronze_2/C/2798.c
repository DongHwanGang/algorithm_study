#include <stdio.h>
#include <stdlib.h>

int checkCard(int* arr, int N, int M){
	int one, two, three, temp, return_answer = 0;
	
	for(one = 0; one < N; one++){
		for(two = 0; two < N; two++){
			for(three = 0; three < N; three++){
				if(one != two && two != three && three != one){
					temp = arr[one] + arr[two] + arr[three];
					if(temp <= M){
						if(temp > return_answer){
							return_answer = temp;
						}
					}
				}
			}
		}
	}
	
	return return_answer;
}

void inputNumber(int* arr, int N){
	int input;
	
	for(input = 0; input < N; input++){
		scanf("%d", &arr[input]);
	}
}

int* allocateDynamicMemory(int N){
	int* temp = (int*)malloc(sizeof(int)*N);
	return temp;
}

int main (void) {
	int* arr = NULL;
	int N, M, answer;
	
	scanf("%d %d", &N, &M);
	arr = allocateDynamicMemory(N);
	inputNumber(arr, N);
	answer = checkCard(arr, N, M);
	printf("%d", answer);
	free(arr);
	arr = NULL;
}
