#include <iostream>
using namespace std;

int main () {
    long long int n, m, temp;

    cin >> n >> m ;

    temp = n - m;

    (temp < 0) ? cout<< -temp : cout << temp;
}