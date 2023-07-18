#include <iostream>
#include <deque>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int n, m, temp;
    bool check, answer;
    cin >> n;

    while(n--){
        check = false;
        answer = true;
        string ctrl, strnum;
        cin >> ctrl;
        cin >> m;
        cin >> strnum;
        deque<int> arr;
        temp = 0;
				//배열 형태의 수 입력 받는 반복문
        for(char c : strnum){
            if(c >= '0' && c <= '9'){
                if(temp != 0){
                    temp = temp * 10;
                }
                temp = temp + c - '0';
            }
            else{
                if(temp != 0){
                    arr.push_back(temp);
                }
                temp = 0;
            }
        }
				//입력받은 함수를 진행하는 반복문
        for(char c : ctrl){
            if(c == 'R'){
								//데튜의 특성을 이용해 앞에서 뺄지 뒤에서 뺄지를 결정
                if(check){
                    check = false;
                }
                else{
                    check = true;
                }
            }

            else{
                if(arr.empty()){
                    cout << "error" << '\n';
                    answer = false;
                    break;
                }
                else{
                    if(check){
                        arr.pop_back();
                    }
                    else{
                        arr.pop_front();
                    }
                }
            }
        }
				//완전히 순회를 했으면 빈 배열이라도 내 놓아야함.
        if(answer){
            cout << '[';
            if(check){
                for(int i = arr.size() - 1; i >= 0; i--){
                    cout << arr[i];
                    if(i == 0){
                        break;
                    }
                    cout<<',';
                }
            }
            else{
                for(int i = 0; i < arr.size(); i++){
                    cout << arr[i];
                    if(i >= arr.size() - 1){
                        break;
                    }
                    cout << ',';
                }
            }
            cout << ']' << '\n';
        }
    }
}