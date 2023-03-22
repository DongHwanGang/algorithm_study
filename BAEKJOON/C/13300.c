#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int** free_memory(int** student){
	int del;
	
	for(del = 0; del < 2; del++){
		free(student[del]);
	}
	free(student);
	
	return NULL;
}

void assign_room(int** student, int n, int k){
	int assign, cnt = 0, s;
	
	for(s = 0; s < 2; s++){
		for(assign = 0; assign < 6; assign++){
			cnt = cnt + student[s][assign] / k;
			if (student[s][assign] % k != 0){
				cnt += 1;
			}
		}
	}
	printf("%d", cnt);
}

void input_student(int** student, int n){
	int s, y, input;
	
	for(input = 0; input<n; input++){
		scanf("%d %d", &s, &y);
		if(s == 0){
			student[0][y - 1] += 1;
		}
		else{
			student[1][y - 1] += 1;
		}
	}
}

int** dynamic_memory_arr(int** student){
	int allocate, set;
	
	while(!student){
		student = (int**)malloc(sizeof(int*)*2);
	}
	
	for(allocate = 0; allocate < 2; allocate++){
		student[allocate] = (int*)malloc(sizeof(int)*6);
	}
	
	for(set = 0; set < 2; set++){
		memset(student[set], 0, sizeof(int)*6);
	}
	
	return student;
}

int main (){
	int n, k, s, y;
	int** student = NULL;
	
	scanf("%d %d", &n, &k);
	student = dynamic_memory_arr(student);
	input_student(student, n);
	assign_room(student, n, k);
	student = free_memory(student);
}
