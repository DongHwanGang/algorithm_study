#include <iostream>
using namespace std;

int main () {
    int n, modvalue, disassemble, temp, temp_n, rester = 0;

    cin >> n;

    temp_n = n;

    while(temp_n--){
        disassemble = temp = temp_n;
        while(temp){
            modvalue = temp % 10;
            disassemble = disassemble + modvalue;
            temp = temp / 10;
        }
        if(disassemble == n){
            if(rester == 0){
                rester = temp_n;
            }
            else{
                rester = rester < temp_n ? rester : temp_n;
            }
        }
    }
    cout << rester;
}