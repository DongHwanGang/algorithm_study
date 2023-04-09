#include <iostream>
#include <vector>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, temp;

    cin >> n >> m;
    vector<vector<int>> nm (n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> nm[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> temp;
            nm[i][j] += temp;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << nm[i][j] << ' ';
        }
        cout << '\n';
    }
}