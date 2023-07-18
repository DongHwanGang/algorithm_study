#include <bits/stdc++.h>
using namespace std;

int main (){
    ios::sync_with_stdio(0);
    cin.tie(0);
    list<int> arr;
    list<int> out;
    int N, K, cnt = 0;

    cin >> N;
    cin >> K;

    for(int i = N; i > 0; i--) arr.push_front(i);

    list<int>::iterator t = arr.begin();

    while(arr.size()){
        for(int i = 0; i < K - 1; i++){
            if(t < arr.end()) t++;
            else t = arr.begin();
        }
        out.push_back(*t);
        t = arr.erase(t);
        if(t > arr.end()) t = arr.begin();
    }

    cout << "<";
    list<int>::iterator o = out.begin();
    for(o; ; ){
        cout << *o;
        o++;
        if(o == out.end()){
            break;
        }
        cout << ", ";
    }
    cout <<">";
}