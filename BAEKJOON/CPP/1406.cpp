#include <bits/stdc++.h>
using namespace std;

int main () {
    string alphabet = "";
    cin >> alphabet;
    list<char> edit;
    int n;

    for(char i : alphabet){
        edit.push_back(i);
    }

    list<char>::iterator cusor = edit.end();
    
    cin >> n;
    char ctrl, ch;
    for(int i = 0; i < n; i++){
        cin >> ctrl;
        if(ctrl == 'L'){
            if(cusor != edit.begin()){
                cusor--;
            }
        }
        else if (ctrl == 'D'){
            if (cusor != edit.end()){
                cusor++;
            }
        }
        else if (ctrl == 'B'){
            if(cusor != edit.begin()){
                cusor--;
                cusor = edit.erase(cusor);
            }/*erase연산을 위해서는
                문자가 있는 곳으로 이동할 수 밖에 없다.
                _a_b_c_
                */
        }
        else{
            cin >> ch;
            edit.insert(cusor, ch);
        }
    }

    for(char i : edit) cout << i;
    return 0;
}