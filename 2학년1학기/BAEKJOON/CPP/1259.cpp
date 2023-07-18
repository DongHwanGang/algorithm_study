#include <iostream>
#include <string>
using namespace std;

int main () {
    while(1){
        string num = "";
        cin >> num;
        if(num == "0"){
            return 0;
        }
        else{
            int left = 0, right = num.size() - 1;
            bool check = true;
            while(left <= right){
                if(num[left] != num[right]){
                    check = false;
                    break;
                }
                left++;
                right--;
            }
            if(check){
                cout<< "yes" << '\n';
            }
            else{
                cout << "no" << '\n';
            }
        }
    }
}