#include <bits/stdc++.h>
using namespace std;

vector<int> number(1000001, 0);
int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    int temp, max = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        number[temp] = 1;
        max = max < temp ? temp : max;
    }
    
    int X, cnt = 0;
    cin >> X;
    for(int j = 0; j <= max; j++){
        // 인덱스에 접근하는 값 잘 확인하기
        if(X - j <= 1000000 && X - j >= 0){
            if(number[j]){
                if (j != X - j && number[X - j]){
                    cnt++;
                    number[X - j] = number[j] = 0;
                }
            }
        }
    }
    cout << cnt;

    return 0;
}