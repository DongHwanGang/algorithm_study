#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main () {
		//입력 받을 수열의 크기
    int n;
		//cnt는 push와 pop연산 횟수
		//temp는 스택에 담긴 원소와 배열에 담긴 수열의 수를 확인하기 위한
		//인덱스
    int cnt = 0, temp = 0;
    int sum = 0;
    cin >> n;
		//수열을 순서대로 담을 벡터(배열)
    vector<int> v(n, 0);
		//push와 pop연산을 담을 벡터
    vector<char> c(n*2);
		//직접 stack을 적용할 stack
    stack<int> S;
		//수열에 수를 담는 for 반복문
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
		
    for(int i = 0; i < n; i++){
				//오름차순 대로 스택에 원소를 추가
        S.push(i + 1);
				//push 연산후 추가
        c[cnt] = '+';
				//인덱스 추가
        cnt++;
				//조건문 스택이 비어 있지 않고 가장 위에 있는 원소와 배열의 인덱스가
				//현재 가르키는 원소가 같으면
        if(S.empty() == 0 && S.top()==v[temp]){
						//while 반복문 사용
            while(S.empty() == 0 && S.top() == v[temp]){
								//pop연산
                S.pop();
								//문자 배열에 추가
                c[cnt] = '-';
                cnt++;
								//더 뺄게 있는지 확인
                temp++;
            }
        }
    }
		//push + pop은 n*2 확인
    if(cnt == n*2){
        for(char i: c) cout << i << '\n';
    }
    else{
        cout << "NO";
    }
}