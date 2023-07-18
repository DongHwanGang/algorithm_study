#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<int> num;
    int n, temp, searchnum, cnt = 0;

    cin >> n;
    while(n--){
        cin>>temp;
        num.push_back(temp);
    }
    cin >> searchnum;
    for(int i : num){
        if(i == searchnum){
            cnt++;
        }
    }
    cout <<cnt;
}