#include <iostream>
#include <deque>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    deque<int> DQ;
    int N,L;
    cin >> N >> L;

    while(N--){
        int temp, min;
        cin >> temp;
        min = temp;
        DQ.push_back(temp);
        if(DQ.size() > L){
            DQ.pop_front();
        }

        int size = DQ.size();

        for(int i = 0; i < size; i++){
            min = min < DQ[i] ? min : DQ[i];
        }
        cout << min << ' ';
    }
}