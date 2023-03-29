#include <iostream>
//STL 자료구조 스택 선언
#include <stack>
//STL 자료구조 벡터 선언 배열임
#include <vector>
using namespace std;


int main () {
		//long long으로 안해주면 오답 뜸
    long long int n, sum = 0;
    cin >> n;
		// 건물 관리자가 있는 건물의 높이들을 저장할 배열
    vector<int> building_ad(n);
		// 스택
    stack<int> cmp;
		// 배열에 담는 for반복문
    for(int i = 0; i < n; i++){
        cin >> building_ad[i];
    }
		//각 건물들의 크기를 비교하고 볼수있는 건물들의 수를 합산하는 반복문
    for(int i = 0; i < n; i++){
        while(!cmp.empty() && building_ad[cmp.top()] <= building_ad[i]){
            sum = sum + (i - cmp.top() - 1);
            cmp.pop();
        }
        cmp.push(i);
    }
		//마지막 처리
    while(!cmp.empty()){
        sum = sum + (n - cmp.top() - 1);
        cmp.pop();
    }
    cout<< sum;
}