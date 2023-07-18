#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main () {
		//입력 받을 수의 개수 n과 입력 받을 때 임시로 수를 저장할 input을 선언
    int n, input;
		//n을 입력 받는다.
    cin >> n;
		//STL에 있는 스택을 선언
    stack<int> S;
		//STL에 있는 벡터 선언
    vector<int> answer(n);
		//처음에 수를 입력 받는 반복문
    for(int i = 0; i < n; i++){
        cin >> input;
        answer[i] = input;
    }
		//순회를 한번 하면서 통신탑에 송신이 전달 되었나 확인
    for(int i = n - 1; i >= 0; i--){
        while(!S.empty() && answer[S.top()] < answer[i]){
            answer[S.top()] = i + 1;
            if(!S.empty()){
                S.pop();
            }
        }
        S.push(i); 
    }
		// 나머지 반복문을 한번 돌고도 남은 스택의 원소를 인덱스로 사용해 벡터 원소를 0으로 만들어줌.
    while(!S.empty()){
        answer[S.top()] = 0;
        S.pop();
    }

    for(int i : answer) cout << i << ' ';
}