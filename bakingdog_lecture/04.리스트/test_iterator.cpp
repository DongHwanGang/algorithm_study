#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> v;
 
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    vector<int>::iterator iter_begin = v.begin(); // 첫번째 원소 위치
    vector<int>::iterator iter_end = v.end(); // 마지막 원소 다음 위치
    
    for (; iter_begin != iter_end; ++iter_begin) // 증감 연산자로 순회 가능
        cout << *iter_begin << endl; 
}