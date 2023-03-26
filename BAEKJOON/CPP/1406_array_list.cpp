#include <bits/stdc++.h>
using namespace std;

const int mx = 600001;
char dat[mx];
int pre[mx], nxt[mx];
int unused = 1;

void traverse(){
  int cur = nxt[0];
  while(cur != -1){
    cout << dat[cur];
    cur = nxt[cur];
  }
}

void insert(int& index, char ch){
    pre[unused] = index;
    nxt[unused] = nxt[index];
    nxt[pre[unused]] = unused;
    if(nxt[unused] != -1){
        pre[nxt[unused]] = unused;
    }
    dat[unused] = ch;
    index = unused;
    unused++;
}

void erase(int& index){
    nxt[pre[index]] = nxt[index];
    if(nxt[index] != -1)
        pre[nxt[index]] = pre[index];

    index = pre[index];
}

int main () {
    fill(pre, pre+mx, -1);
    fill(nxt, nxt+mx, -1);
    string str = "";
    int index = 0;
    
    cin >> str;

    for(char i : str){
        insert(index, i);
    }
    
    int n;

    cin >> n;
    char ctrl, ch;
    for (int j = 0; j < n; j++){
        cin >> ctrl;
        if(ctrl == 'L'){
            if(pre[index] != -1){
                index = pre[index];
            }
        }
        else if (ctrl == 'D'){
            if(nxt[index] != -1){
                index = nxt[index];
            }
        }
        else if(ctrl == 'B'){
            if(pre[index] != -1){
                erase(index);
            }
        }
        else{
            cin >> ch;
            insert(index, ch);
        }
    }
     traverse();
}