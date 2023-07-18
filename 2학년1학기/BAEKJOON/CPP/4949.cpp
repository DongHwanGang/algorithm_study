#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main () {
    while(1){
        string s;
        bool sep = true;
        stack<char> CS;
        getline(cin, s);
        if(s == "."){
            return 0;
        }
        for(char c : s){
            if(c == '(' || c == '['){
                CS.push(c);
            }
            else if (c == ')') {
                if(CS.empty() || CS.top() != '('){
                    sep = false;
                    break;
                }
                else{
                    CS.pop();
                }
            }
            else if (c == ']') {
                if(CS.empty() || CS.top() != '['){
                    sep = false;
                    break;
                }
                else{
                    CS.pop();
                }
            }
        }
        if(!CS.empty()) sep = false;
        if(sep){
            cout << "yes" << '\n';
        }
        else{
            cout << "no" << '\n';
        }
    }
}