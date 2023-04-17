#include <iostream>
using namespace std;

int main () {
    int a, b;
    double defence;
    cin >> a >> b;
    
    defence = (double)a*b/100;
    if(a - defence >= 100){
        cout << 0;
    }
    else{
        cout << 1;
    }
}