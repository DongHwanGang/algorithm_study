#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(201, 0);
    int n, temp, searchnum;

    cin >> n;
    while(n--){
        cin >> temp;
        v[temp + 100] += 1;
    }
    cin>>searchnum;
    cout<<v[searchnum + 100];
}