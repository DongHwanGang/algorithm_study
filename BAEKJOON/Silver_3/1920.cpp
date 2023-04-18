#include <iostream>
#include <vector>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n;
    vector<int> store(n);

    for(int i = 0; i < n; i++){
        cin >> store[i];
    }

    cin >> m;

    while(m--){
        int temp;
        cin >> temp;
        for(int i = 0; i < n; i++){
            if(store[i] == temp){
                cout << 1 << '\n';
                break;
            }
            if(i == n - 1){
                cout << 0 << '\n';
            }
        }
    }
}