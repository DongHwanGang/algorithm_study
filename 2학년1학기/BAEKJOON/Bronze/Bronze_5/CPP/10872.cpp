#include <iostream>
using namespace std;

int main () {
    int fato = 1, N;
    
    cin >> N;
    
    if(!N){
        cout << fato;
        return 0;
    }
    else{
        do{
            fato = fato*N;
            N--;
        }while(N != 0);
        cout << fato;
    }
}