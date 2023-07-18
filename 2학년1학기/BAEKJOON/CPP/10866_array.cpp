#include <iostream>
using namespace std;

const int mx = 5005;
int dat[mx*2+1];
int head = mx, tail = mx;

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

int front(){
    return dat[head];
}

void pop_front(){
    head++;
}

int back(){
    return dat[tail - 1];
}

void pop_back(){
    tail--;
}

int main () {
    int n;
    cin >> n;

    while (n--){
        string s = "";
        cin >> s;
        if("push_front" == s){
            int i;
            cin >> i;
            push_front(i);
        }
        else if("push_back" == s){
            int i;
            cin >> i;
            push_back(i);
        }
        else if("pop_front" == s){
            if(head == tail){
                cout << -1 << '\n';
            }
            else{
                cout << front() << '\n';
                pop_front();
            }
        }
        else if("pop_back" == s){
            if(head == tail){
                cout << -1 << '\n';
            }
            else{
                cout << back() << '\n';
                pop_back();
            }
        }
        else if("size" == s){
            cout << tail - head << '\n';
        }
        else if("empty" == s){
            if(tail == head)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if("front" == s){
            if(head == tail){
                cout << -1 << '\n';
            }
            else{
                cout << front() << '\n';
            }
        }
        else {
            if(head == tail){
                cout << -1 << '\n';
            }
            else{
                cout << back() << '\n';
            }
        }
    }
}