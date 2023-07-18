#include <iostream>
#include <stack>
using namespace std;

int main () {
	//아직까지 스택에 존재하는 '(', '['개수를 각각 저장
    int c_cnt = 0, C_cnt = 0;
	//')'나 ']'가 나왔을 때 연산해서 저장할 임시 변수 temp
	//총합을 저장할 변수 sum
    int temp_c = 0, temp_C = 0, sum = 0;
	//괄호의 연산이 필요함을 알려줄 변수 false
	/*괄호의 연산이 필요하다고 함은 (()[[]]) 의 경우
	  check가 없이 ')'나 ']'가 나올때마다 수식의 연산을 하면 
		2*2+2*3*3+2*3+2 = 30이 됨.
*/
    bool check = false, answer = true;
    string s = "";
    stack<char> SC;

    cin >> s;
    for(char c : s){
        if(c=='('){
            c_cnt += 1;
            check = true;
            SC.push(c);
        }
        else if(c=='['){
            C_cnt += 1;
            check = true;
            SC.push(c);
        }
        else if(c == ']'){
            if(SC.empty() || SC.top() != '['){
                answer = false;
                break;
            }
            SC.pop();
            C_cnt--;
            if(check){
                check = false;
                temp_C = 3;

                for(int i = 0; i < C_cnt; i++){
                    temp_C *= 3;
                }
                for(int i = 0; i < c_cnt; i++){
                    temp_C *= 2;
                }
                sum += temp_C;
            }
        }
        else{
            if(SC.empty() || SC.top() != '('){
                answer = false;
                break;
            }
            SC.pop();
            c_cnt--;
            if(check){
                check = false;
                temp_c = 2;

                for(int i = 0; i < C_cnt; i++){
                    temp_c *= 3;
                }
                for(int i = 0; i < c_cnt; i++){
                    temp_c *= 2;
                }
                sum += temp_c;
            }
        }
    }
	//꼭 비었는지 확인할 것.
    if(!SC.empty()) answer = false;

    if(answer){
        cout << sum;
    }
    else{
        cout << 0;
    }
}