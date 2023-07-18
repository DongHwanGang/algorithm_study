#include <iostream>
using namespace std;

int main () {
    string speaking;
    string listening;

    cin >> speaking >> listening;

    if(speaking.size() < listening.size()){
        cout<<"no";
    }
    else{
        cout << "go";
    }
}