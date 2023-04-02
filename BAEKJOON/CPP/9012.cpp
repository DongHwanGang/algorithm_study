#include <iostream>
#include <stack>
using namespace std;

int main () {
    int n;
    cin >> n;
		//n번 반복
    while(n--){
        string s;
        bool sep = true;
        stack<char> CS;
        cin >> s;
				//문자열의 원소를 하나 씩 확인
        for(char c : s){
						// '('문자면 스택에 담음
            if(c == '('){
                CS.push(c);
            }
            else{
						//스택이 비었거나(비교할게 없는데 ')'가 현재 문자열의 문자인 경우)
                if(CS.empty()){
                    sep =false;
                    break;
                }
                else{
                    CS.pop();
                }
            }
        }
				//완전히 다 비어졌는지 확인
        if(!CS.empty()) sep = false;

        if (sep){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}