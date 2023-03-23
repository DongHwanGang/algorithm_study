#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pay_calculation(int* men, int calllist[], int n, int pay, int time){
	int calculate;
	
	for(calculate = 0; calculate < n; calculate++){
		*men = *men + (calllist[calculate] / time * pay);
		if(calllist[calculate] % (time - 1) != 0){
			*men += pay;
		}
	}
}

void cmp_pay(int calllist[], int n){
	int Y = 0, M = 0, cmp;
	
	pay_calculation(&Y, calllist, n, 10, 30);
	pay_calculation(&M, calllist, n, 15, 60);
	
	if (Y < M){
		printf("Y %d", Y);
	}
	else if(Y > M){
		printf("M %d", M);
	}
	else{
		printf("Y M %d", M);
	}
}

void input_call_time(int arr[], int n){
	int input;
	
	for(input = 0; input < n; input++){
		scanf("%d", &arr[input]);
	}
}

int* dynamic_memory_allocate(int* arr, int n){
	while(!arr){
		arr = (int*)malloc(sizeof(int) * n);
	}
	memset(arr, 0, sizeof(int)*n);
	
	return arr;
}

int main () {
	int* calllist = NULL;
	int n;
	
	scanf("%d", &n);
	calllist = dynamic_memory_allocate(calllist, n);
	input_call_time(calllist, n);
	cmp_pay(calllist, n);
	
	free(calllist);
	calllist = NULL;
}
