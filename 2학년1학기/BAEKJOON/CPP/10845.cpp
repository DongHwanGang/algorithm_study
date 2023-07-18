#include <iostream>
//STL 큐
#include <queue>
using namespace std;

int main () {
		//큐 저장공간 생성
    queue<int> storage;
		//명령어의 개수를 입력 받을 n
		//push연산때 임시저장 공간 temp
    //얼마나 answer공간을 사용했는지 나타내는 cnt
    int n, temp, cnt = 0;
    //명령어를 입력 받을 s
    string s = "";
		//명령 횟수 입력
    cin >> n;
		//push입력 외에 다른 명령들을 수행하고 저장할 공간 할당
    vector<int> answer(n, 0);
		//반복문은 n번 수행
    while(n--){
				//명령어를 받아들임
        cin >> s;
        if("push" == s){
            cin >> temp;
            storage.push(temp);
        }
        else if("front" == s){
            if(storage.empty()){
                answer[cnt++] = -1;
            }
            else{
                answer[cnt++] = storage.front();  
            }
        }
        else if("back" == s){
            if(storage.empty()){
                answer[cnt++] = -1;
            }
            else{
                answer[cnt++] = storage.back();  
            }
        }
        else if("empty" == s){
            answer[cnt++] = storage.empty();
        }
        else if("pop" == s){
            if(storage.empty())
                answer[cnt++] = -1;
            else{
                answer[cnt++] = storage.front();
                storage.pop();
            }
        }
        else{
            answer[cnt++] = storage.size();
        }
				//s문자열 초기화 ""
        s.clear();
    }

    for(int i = 0; i < cnt; i++){
        cout << answer[i] << '\n';
    }
}