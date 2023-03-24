/*
ũ�� 10�� �迭 ���� �Է� ���� ������ mod �����ڷ� �ڿ������� Ȯ��
6 || 9�� �������� ũ�Ⱑ ���� ������ ä���� ����
������ �迭�� ��ȸ�ؼ� ���� ū ���� ã�Ƽ� ���
O(n)
������ ���� �迭 �� ������ ���� Ȯ�ο� O(1) ��. �������� ��ȸ�ϴ� �ͱ��� O(n)
*/
#include <stdio.h>

void print_max_value(int arr[]){
	int max = 0, search;
	
	for(search = 0; search < 10; search++){
		max = arr[search] < max ? max : arr[search];
	}
	
	printf("%d", max);
}

void mod_value(int arr[], int n){
	int mod;
	
	//������ �����ڸ� ����� ���� n�� �ڿ������� Ȯ�� 
	for(mod = n; mod > 0; mod /= 10){
		if(mod%10 == 6 || mod%10 == 9){
			if(arr[6] <= arr[9]){
				arr[6] += 1;
			}
			else{
				arr[9] += 1;
			}
			//6�� 9�� �ε��� 6�� 9�� ���ų� ������ +1
			//6�� ũ�� 9 +1 
		}
		else{
			arr[mod%10] += 1;
		}
	}
}

int main () {
	int arr[10] = {0};
	int n;
	
	scanf("%d", &n);
	
	mod_value(arr, n);
	print_max_value(arr);
	
}
