#include <iostream>
using namespace std;

int main () {
    string word = "";
    int alphabet[26] = {0};
		//등장 빈도가 가장 많은 알파벳의 수를 저장하는 max
		//아스키 코드 혹은 유니코드에서 'A'에서 answer만큼 떨어지게 해서 출력에 사용
    int max = 0, answer = -1;
		//가장 많이 등장한 알파벳이 중복되는지 확인하는 변수
    bool check = false;
    cin >> word;

    for(char c : word){
        if(c >= 'a' && c <= 'z'){
            alphabet[c - 'a'] += 1;
            max = alphabet[c - 'a'] < max ? max : alphabet[c - 'a'];
        }
        else{
            alphabet[c - 'A'] += 1;
            max = alphabet[c - 'A'] < max ? max : alphabet[c - 'A'];
        }
    }
    for(int i = 0; i < 26; i++){
        if(!check && max == alphabet[i]){
            answer = i;
            check = true;
        }
        else if(check && max == alphabet[i]){
            cout << "?";
            return 0;
        }
    }
    cout << (char)('A' + answer);
}