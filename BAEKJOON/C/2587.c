#include <stdio.h>

void answer_median_value(int arr[], int* median){
	int cnt = 0, search = 1;
	
	while (1){
		if (arr[search]){
			cnt = cnt + arr[search];
		}
		if(cnt > 2){
			*median = search * 10;
			break;
		}
		search++;
	}
}

void input_numbers(int arr[], int* sum){
	int input, num;
	
	for(input = 0; input < 5; input++){
		scanf("%d", &num);
		*sum += num;
		arr[num / 10] += 1;
	}
}

int main (){
	int arr[10] = {0};
	int sum = 0, median = 0;
	
	input_numbers(arr, &sum);
	answer_median_value(arr, &median);
	printf("%d\n%d", sum / 5, median);
	/*
	1.입력을 받으면서 총합을 구한다.
	2.입력받는 수는 10의 배수이고 100이하이기 때문에
	크기가 10만큼 설정된 arr배열에 입력받은 수를 10으로 
	나누어 인덱스로 사용하고 입력받은 횟수만큼 더해 준다.
	3. 중앙값을 구하는데 cnt가 2를 넘어서면 (중복수가 있을
	수 있음.) 그 인덱스에 10을 곱해 중앙값에 넣어준다.
	4. 총합에 5를 나누어 주고 중앙값은 그대로 출력해 준다.
	*/ 
} 
