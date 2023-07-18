#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> v1 = {1, 2, 3, 4, 5, 6};

    for(int e : v1)
        cout << e << ' ';
    
    cout << '\n';

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << ' ';
    
    cout << '\n';

    for(int i = 0; i <= v1.size()-1; i++)
        cout << v1[i] << ' ';
    // 위험함. 오버플로우 가능성
}