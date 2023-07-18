#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, m = -200000000, p = 200000000, temp;
    cin >> n;
    vector<int> val(n);

    for(int i = 0; i < n; i++){
        cin >> val[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                temp = val[i] + val[j];
                if(temp >= 0){
                    p = temp < p ? temp : p;
                }
                else{
                    m = temp < m ? m : temp;
                }
            }
        }
    }

    temp = p < -m ? p : m;
    cout << temp;
}