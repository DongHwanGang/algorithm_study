#include <iostream>
#include <stack>
using namespace std;

int main (){
    stack<int> menoy;
    int n, input, sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input;
        if(!input){
            if(!menoy.empty()){
                menoy.pop();
            }
        }
        else{
            menoy.push(input);
        }
    }
    while(!menoy.empty()){
        sum += menoy.top();
        menoy.pop();
    }
    cout << sum;
}