#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** free_str(char** ch_board, int row){
	int del;
	
	for(del = 0; del < row; del++){
		free(ch_board[del]);
	}
	free(ch_board);
	
	return NULL;
}

void judge_board(char** ch_board, int row, int col, int* min){
	int i, j, cnt = 0, row_cnt, col_cnt;
	char* W_start = "WBWBWBWB";
	char* B_start = "BWBWBWBW";
	
	for(i = 0; i < row - 8 + 1; i++){
		for(j = 0; j < col - 8 + 1; j++){
			cnt = 0;
			for(row_cnt = i; row_cnt < i + 8; row_cnt++){
				if((row_cnt - i) % 2 == 0){
					for(col_cnt = j; col_cnt < j + 8; col_cnt++){
						if(ch_board[row_cnt][col_cnt] != B_start[col_cnt - j]){
							cnt++;
						}
					}
				}
				else{
					for(col_cnt = j; col_cnt < j + 8; col_cnt++){
						if(ch_board[row_cnt][col_cnt] != W_start[col_cnt - j]){
							cnt++;
						}
					}
				}
			}
			*min = *min < cnt ? *min : cnt;
			cnt = 0;
			for(row_cnt = i; row_cnt < i + 8; row_cnt++){
				if((row_cnt - i) % 2 == 0){
					for(col_cnt = j; col_cnt < j + 8; col_cnt++){
						if(ch_board[row_cnt][col_cnt] != W_start[col_cnt - j]){
							cnt++;
						}
					}
				}
				else{
					for(col_cnt = j; col_cnt < j + 8; col_cnt++){
						if(ch_board[row_cnt][col_cnt] != B_start[col_cnt - j]){
							cnt++;
						}
					}
				}
			}
			
			*min = *min < cnt ? *min : cnt;
		}
	}
}

void input_board(char** ch_board, int row){
	int i;
	
	for(i = 0; i < row; i++){
		scanf("%s", ch_board[i]);
	}
}

char** dynamic_memory_str(int row, int col){
	char** temp = NULL;
	int i;
	
	while(!temp){
		temp = (char**)malloc(sizeof(char*)*row);
	}
	
	for(i = 0; i < row; i++){
		temp[i] = (char*)malloc(sizeof(char) * (col +1));
		memset(temp[i], 0, col + 1);
	}
	
	return temp;
}

int main () {
	int n, m, min = 64;
	char** ch_board = NULL;
	
	scanf("%d %d", &n, &m);
	ch_board = dynamic_memory_str(n, m);
	input_board(ch_board, n);
	judge_board(ch_board, n, m, &min);
	printf("%d", min);
	ch_board = free_str(ch_board, n);
}
