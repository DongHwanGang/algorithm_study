#include <iostream>
#include <stack>
using namespace std;

int main () {
    int n, cnt = 0;
    cin >> n;

    while(n--){
        string s;
        stack<char> CS;
        cin >> s;
				//입력 받은 문자열 s의 원소 하나씩을 c로 받음
        for(char c : s){
						//스택이 비었거나 c와 가장 위의 원소가 다르면 스택에 넣어줌.
            if(CS.empty() || CS.top() != c){
                CS.push(c);
            }
						//스택의 탑과 현재 문자열에서 확인중인 문자와 같으면 팝연산
            else if(CS.top() == c){
                CS.pop();
            }
        }
				//스택에 아무것도 남아있지 않으면 cnt 중가.
        if(CS.empty()) cnt++;
    }
    cout << cnt;
}