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
	1.�Է��� �����鼭 ������ ���Ѵ�.
	2.�Է¹޴� ���� 10�� ����̰� 100�����̱� ������
	ũ�Ⱑ 10��ŭ ������ arr�迭�� �Է¹��� ���� 10���� 
	������ �ε����� ����ϰ� �Է¹��� Ƚ����ŭ ���� �ش�.
	3. �߾Ӱ��� ���ϴµ� cnt�� 2�� �Ѿ�� (�ߺ����� ����
	�� ����.) �� �ε����� 10�� ���� �߾Ӱ��� �־��ش�.
	4. ���տ� 5�� ������ �ְ� �߾Ӱ��� �״�� ����� �ش�.
	*/ 
} 
