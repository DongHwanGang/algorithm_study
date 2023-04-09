#include <iostream>
#include <list>
#include <string>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    list<string>* s[51];

    for(int i = 1; i < 51; i++){
        s[i] = new list<string>();
    }

    int n;
    cin >> n;
    while(n--){
        string temp;
        bool check = false;
        cin >> temp;
        int temp_size = temp.size();
        
        for(auto it = s[temp_size]->begin(); it != s[temp_size]->end(); ++it){
            if(*it == temp){
                check = true;
                break;
            }
        }

        if(check){
            continue;
        }

        for(auto it = s[temp_size]->begin(); it != s[temp_size]->end(); ++it){
            for(int i = 0; i < 51; i++){
                if(temp[i] < (*it)[i]){
                    check = true;
                    s[temp_size]->insert(it, temp);
                    break;
                }
                else if(temp[i] > (*it)[i]){
                    break;
                }
            }
            if(check){
                break;
            }
        }
        if(check == false){
            s[temp_size]->push_back(temp);
        }
    }
    for(int i = 1; i < 51; i++){
        for(auto it = s[i]->begin(); it != s[i]->end(); ++it){
            cout << *it << '\n';
        }
    }
}