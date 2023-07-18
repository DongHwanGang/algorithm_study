#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    stack<int> S;
    char ctrl[6] = "";
    int num;

    cin >> n;

    vector<int> arr(n,0);
    int cnt = 0;

    for(int i = 0; i < n; i++){
        scanf("%s", ctrl);
        if(!strcmp("push", ctrl)){
            cin >> num;
            S.push(num);
        }
        else if(!strcmp("pop", ctrl)){
            if(S.empty()){
                arr[cnt] = -1;
                cnt++;
            }
            else {
                arr[cnt] = S.top();
                cnt++;
                S.pop();
            }
        }
        else if(!strcmp("size", ctrl)){
            arr[cnt] = S.size();
            cnt++;
        }
        else if(!strcmp("empty", ctrl)) {
            arr[cnt] = S.empty();
            cnt++;
        }
        else{
            if(S.empty()){
                arr[cnt] = -1;
                cnt++;
            }
            else{
                arr[cnt] = S.top();
                cnt++;
            }
        }
        memset(ctrl, 0, sizeof(char)*6);
    }

    for(int i = 0; i < cnt; i++){
        cout << arr[i] << '\n';
    }
}