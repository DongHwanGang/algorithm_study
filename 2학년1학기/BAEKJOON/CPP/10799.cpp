#include <iostream>
#include <stack>
using namespace std;

int main () {
    string s = "";
    stack<char> bar;
    bool check = false;
    int sum = 0;
    cin >> s;
		//입력 받은 문자열을 문자 단위로 확인
    for(char c : s){
				//모든 '('은 stack으로 들어감
        if(c == '('){
						//모든 '('는 ')'와 만나 레이저가 될 수 있음
            check = true;
            bar.push(c);
        }
        else{
						//스택의 가장 위에 있는 원소가 ')'를 만나면 레이저
            if(check){
								//레이저는 이미 나왔으니 판단 도구는 false로 초기화
                check = false;
								//쌍끼리 만난건 팝
                bar.pop();
								//레이저 뒤에 있는 막대는 그 개수만큼 잘림
                sum += bar.size();
            }
            else{
								//레이저가 아닐 경우
                bar.pop();
								// 그동안 레이저 수 + 1이 진짜 막대의 수
                sum += 1;
            }
        }
    }
    cout << sum;
}