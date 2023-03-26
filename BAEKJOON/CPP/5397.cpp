#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<char> key;
    string input = "";
    int n;

    cin >> n;
    while(n--){
        cin >> input;
        list<char>::iterator t = key.end();

        for(char c:input){
            if(c == '<'){
                if(t != key.begin()){t--;}
            }
            else if(c == '>'){
                if(t != key.end()){t++;}}
            else if(c == '-'){
                if(t != key.begin()){
                    t--;
                    t = key.erase(t);
                    /*알고리즘적 위치
                    _a_b_c_
                    ^커서 앞에 아무것도 존재하지 않음
                    _a_b_c_
                          ^커서 앞에 c가 존재
                        erase로 지우려면 옆으로 한칸 가야함.
                        c를 지우고 나면 마지막 반환
                    */
                }
            }
            else{
                key.insert(t, c);
                /*알고리즘에서 커서 위치
                _a_b_
                  ^ 있는데 c를 추가하는 상황이면
                    _a_c_b_
                        ^를 가르키게 되어서 커서가 오른쪽으로 한 칸식 이동한 것처럼 보인다.
                */
            }
        }

        for(char password:key) cout<<password;
        cout << '\n';
        key.clear();
        input.clear();
    }
}