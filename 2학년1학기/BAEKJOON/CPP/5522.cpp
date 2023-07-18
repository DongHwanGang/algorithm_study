#include <iostream>
using namespace std;

int main () {
    int temp, sum = 0, i = 5;
    while(i--){
        cin >> temp;
        sum = sum + temp;
    }
    cout << sum;
}