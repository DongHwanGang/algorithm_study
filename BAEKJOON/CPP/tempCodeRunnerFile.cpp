#include <iostream>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

int main () {
    int n;
    long long int cnt = 0;
    cin >> n;
    stack<int> length;
    queue<int> temp;
    vector<int> storage(n);

    for(int i = 0; i < n; i++){
        cin >> storage[i];
    }

    for(int i = 0; i < n; i++){
        while(!length.empty()){
            if(storage[length.top()] < storage[i]){
                cnt++;
                length.pop();
            }
            else if(storage[length.top()] == storage[i]){
                cnt++;
                temp.push(length.top());
                length.pop();
            }
            else{
                cnt++;
                break;
            }
        }
        while(!temp.empty()){
            length.push(temp.front());
            temp.pop();
        }
        length.push(i);
    }
    cout << cnt;
}