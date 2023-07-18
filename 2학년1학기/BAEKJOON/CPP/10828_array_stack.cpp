#include <bits/stdc++.h>
using namespace std;

int stck[10000];
int pos = 0;

int top(){
    return stck[pos - 1];
}

void push (int temp){
    stck[pos] = temp;
    pos++;
}

int main (){
    char ctrl[6] = "";
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    int temp, cnt = 0;

    for(int i = 0; i < n; i++){
        scanf("%s", ctrl);
        if(!strcmp("push", ctrl)){
            cin >> temp;
            push(temp);
        }
        else if(!strcmp("pop", ctrl)){
            if(pos > 0){
                arr[cnt] = top();
                pos--;
                cnt++;
            }
            else{
                arr[cnt] = -1;
                cnt++;
            }
        }
        else if(!strcmp("size", ctrl)){
            arr[cnt] = pos;
            cnt++;
        }
        else if(!strcmp("empty", ctrl)){
            if(pos != 0){
                arr[cnt] = 0;
                cnt++;
            }
            else{
                arr[cnt] = 1;
                cnt++;
            }
        }
        else{
            if(pos > 0){
                arr[cnt] = top();
                cnt++;
            }
            else{
                arr[cnt] = -1;
                cnt++;
            }
        }
        memset(ctrl, 0, sizeof(char)*6);
    }
    for(int i = 0; i < cnt; i++)
        cout << arr[i] <<'\n';
}