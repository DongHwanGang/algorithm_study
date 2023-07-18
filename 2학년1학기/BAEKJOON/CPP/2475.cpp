#include <iostream>
using namespace std;
//수학 - 사칙연산, 구현
int main () {
    int sum = 0, answer;
    for(int i = 0; i < 5; i++){
        int temp = 0;
        cin >> temp;
        temp*=temp;
        sum += temp;
    }
    answer = sum % 10;
    cout << answer;
}