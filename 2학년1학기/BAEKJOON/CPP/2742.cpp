#include <iostream>
using namespace std;
// 구현
int main () {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int num = 0;
    cin >> num;
    for(int i = num; i >= 1; i--){
       cout << i << '\n';
    }
}