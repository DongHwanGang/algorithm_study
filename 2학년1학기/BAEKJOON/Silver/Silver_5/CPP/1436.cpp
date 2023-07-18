#include <iostream>
using namespace std;

int main () {
    int N, temp_num = 0, cnt= 0, rest;
    int endnum = 666, temp;
    cin >> N;

    while(1){
        temp_num++;
        temp = 0;
        for(int i = temp_num; i > 0; i /= 10){
            rest = i % 10;
            if(rest == 6){
                temp = temp * 10 + rest;
                if(temp == 666){
                    cnt++;
                    break;
                }
            }
            else{
                temp = 0;
            }
        }
        if(cnt == N){
            cout << temp_num;
            break;
        }
    }
}