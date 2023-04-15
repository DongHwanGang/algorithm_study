#include <iostream>
using namespace std;

int main () {
    int n, m, k, temp_row = 0, temp_col = 0;
    cin >> n >> m >> k;

    temp_row = k / m;
    temp_col = k % m;
    cout << temp_row << ' ' << temp_col;
}