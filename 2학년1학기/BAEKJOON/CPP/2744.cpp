#include <iostream>
using namespace std;

int main () {
    string s = "";

    cin >> s;

    for(char i : s){
        if(i >= 'a' && i <= 'z'){
            cout << char(i - 'a' + 'A');
        }
        else{
            cout << (char)(i - 'A' + 'a');
        }
    }
}