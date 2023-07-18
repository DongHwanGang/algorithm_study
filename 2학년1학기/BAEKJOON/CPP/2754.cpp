#include <iostream>
using namespace std;

int main () {
    string score;
    double temp = 4.0;

    cin >> score;

    if(score == "F"){
        printf("%.1lf", 0.0);
        return 0;
    }

    for(int i = 0; i < 4; i++){
        if(score[0] == 'A' + i){
            break;
        }
        temp = temp - 1.0;
    }


    if(score[1] == '+'){
        printf("%.1lf", temp + 0.3);
    }
    else if(score[1] == '0'){
        printf("%.1lf", temp);
    }
    else{
        printf("%.1lf", temp - 0.3);
    }
}