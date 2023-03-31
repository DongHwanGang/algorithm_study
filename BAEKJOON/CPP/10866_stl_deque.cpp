#include <iostream>
#include <deque>
using namespace std;

int main () {
    int n;
    deque<int> DQ;

    cin >> n;
    while(n--){
        string s = "";
        cin >> s;
        if("push_front" == s){
            int i;
            cin >> i;
            DQ.push_front(i);
        }
        else if("push_back" == s){
            int i;
            cin >> i;
            DQ.push_back(i);
        }
        else if("pop_front" == s){
            if(DQ.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << DQ.front() << '\n';
                DQ.pop_front();
            }
        }
        else if("pop_back" == s){
            if(DQ.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << DQ.back() << '\n';
                DQ.pop_back();
            }
        }
        else if("size" == s){
            cout << DQ.size() << '\n';
        }
        else if("empty" == s){
            cout << DQ.empty() << '\n';
        }
        else if("front" == s){
            if(DQ.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << DQ.front() << '\n';
            }
        }
        else{
            if(DQ.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << DQ.back() << '\n';
            }
        }
    }
}