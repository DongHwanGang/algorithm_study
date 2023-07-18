#include <stdio.h>
#include <stdlib.h>
#include <string.h>
////////////////////핵심////////////////////////// 
void distingush_true_false(int* tf, int n){
	int distingush;
	
	for(distingush = 0; distingush < n; distingush++){
		if(tf[distingush] == 1){
			printf("Possible\n");
		}
		else{
			printf("Impossible\n");
		}
	}
}

void cmp_str(char* str1, char* str2, int* tf, int n){
	int std, cmp, len = strlen(str1), cnt = 0;
	
	for(std = 0; std < len; std++){
		for(cmp = 0; cmp < len; cmp++){
			if(str1[std] == str2[cmp]){
				str2[cmp] = '0';
				cnt++;
				break;
			}
		}
	}
	
	if(cnt == len){
		tf[n] = 1;
	}
}

void input_str(char* str1, char* str2, int* tf, int n){
	int input;
	
	for(input = 0; input < n; input++){
		scanf("%s %s", str1, str2);
		cmp_str(str1, str2, tf, input);
		memset(str1, 0, strlen(str1));
		memset(str2, 0, strlen(str2));
	}
	/*
	1. 문자열을 받을 때 마다 비교해서 tf배열에 
	맞으면 1, 아니면 0을 저장
	*/ 
}
 
/////////////////핵심/////////////////////////// 
int* dynamic_memory_arr(int* tf, int n){
	while(!tf){
		tf = (int*)malloc(sizeof(int) * n);
	}
	
	memset(tf, 0, sizeof(int) * n);
	
	return tf;
}

int main () {
	int n;
	char str1[1001] = "";
	char str2[1001] = "";
	int* tf = NULL;
	
	scanf("%d", &n);
	tf = dynamic_memory_arr(tf, n);
	input_str(str1, str2, tf, n);
	distingush_true_false(tf, n);
	
	free(tf);
	tf = NULL;
}
