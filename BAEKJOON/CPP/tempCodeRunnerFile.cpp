#include <bits/stdc++.h>
using namespace std;

vector<int> number(1000001, 0);
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        number[temp] = 1;
    }

    int X, cnt = 0;
    cin >> X;
    for(int j = 0; j < X; j++){
        if(number[j]){
            if(number[X - j]){
                cnt++;
                number[X - j] = number[j] = 0;
            }
        }
    }
    cout << cnt;

    return 0;
}