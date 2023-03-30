#include <iostream>
//STL 큐
#include <queue>
using namespace std;

int main () {
		//c언어 stdio.h랑 iostream이랑 연결 끊기
    ios::sync_with_stdio(false);
		// 입력 버퍼 줄이기
    cin.tie(0);
		// 출력 버퍼 줄이기
    cout.tie(0);
		// 입력 개수 
    int n;
		// 큐 컨테이너
    queue<int> ctrl;
    cin >> n;
	
    while(n--){
        string s = "";
        cin >> s;
        if("push" == s){
            int temp;
            cin >> temp;
            ctrl.push(temp);
        }
        else if("pop" == s){
            if(ctrl.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << ctrl.front() << '\n';
                ctrl.pop();
            }
        }
        else if("size" == s){
            cout << ctrl.size() << '\n';
        }
        else if("empty" == s){
            cout << ctrl.empty() << '\n';
        }
        else if("front" == s){
            if(ctrl.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << ctrl.front() << '\n';
            }
        }
        else{
            if(ctrl.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << ctrl.back() << '\n';
            }
        }
    }
}