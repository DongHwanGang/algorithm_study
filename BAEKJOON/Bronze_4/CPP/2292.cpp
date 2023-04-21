#include <iostream>
using namespace std;

int main () {
    long long int six = 6, number = 1, standard = 1, temp = 6;
    int input;
    cin >> input;
    
    while(input > standard){
        standard = temp + standard;
        number++;
        temp = six * number;
    }
    cout << number;
}