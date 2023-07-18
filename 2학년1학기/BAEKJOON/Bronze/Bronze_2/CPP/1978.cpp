#include <iostream>
using namespace std;

int main () {
    int input, cnt = 0;
    cin >> input;

    while(input--){
        int number, weight = 2;
        bool check = true;
        cin >> number;
        while(number >= weight){
            if((number % weight == 0 && number != weight)){
                check = false;
                break;
            }
            weight++;
        } 
        if(check && number != 1)
            cnt++;
    }
    cout << cnt;
}