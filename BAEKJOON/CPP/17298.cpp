#include <iostream>
//STL 스택 헤더
#include <stack>
//STL 벡터 헤더(배열임)
#include <vector>
using namespace std;

int main () {
		//입력받을 개수를 담을 변수
    int n;
    cin >> n;
		//입력받은 n만큼 크기의 배열 선언
    vector<int> NGE(n);
		//스택선언
    stack<int> storage;
		//입력 값을 받음
    for(int i = 0; i < n; i++){
        cin >> NGE[i];
    }
		//n번 데이터 처리를 해준다.
    for(int i = 0; i < n; i++){
				// 스택에 무언가 들어있고 해당 탑이 갖고 있는 인덱스와 수를 비교 오큰수를 찾음
        while(!storage.empty() && NGE[storage.top()] < NGE[i]){
						//오큰수로 원소 교체
            NGE[storage.top()] = NGE[i];
						//다쓴 원소 없애기
            storage.pop();
        }
				//현재 원소 넣기
        storage.push(i);
    }
		//스택에 남은 원소들 오큰수를 찾지 못한 수들을 -1로 처리
    while(!storage.empty()){
        NGE[storage.top()] = -1;
        storage.pop();
    }
		//python에 for i in (시퀀스 자료형): 이랑 동일
    for(int i : NGE){cout << i << ' ';}
}