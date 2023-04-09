#include <iostream>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(1){
        int n, m;
        cin >> n >> m;
        if(n == 0 && m == 0){
            return 0;
        }
        else if(n > m){
            cout << "Yes" << '\n';
        }
        else{
            cout << "No" << '\n';
        }
    }
}