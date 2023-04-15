#include <iostream>
using namespace std;

int main () {
    int L, cnt = 0;
    cin >> L;

    for(; L > 0; L-=5) cnt++;
    cout << cnt;
}