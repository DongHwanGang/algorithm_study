#include <iostream>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int num = 0;
    cin >> num;
    for(int i = 1; i <= num; i++){
       cout << i << '\n';
    }
}