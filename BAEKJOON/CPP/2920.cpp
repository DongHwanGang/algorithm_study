#include <iostream>
#define SIZE 8

int main () {
    int ascending[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};
    int input[SIZE] = {0};
    int num, cnt = 0;

    for(int i = 0; i < SIZE; i++){
        std::cin >> num;
        if(ascending[i] == num){
            cnt++;
        }
        input[i] = num;
    }
    if(SIZE == cnt){
        std::cout<<"ascending";
        return 0;
    }
    else if(SIZE != cnt){
        cnt = 0;
        for(int i = SIZE - 1; i >= 0; i--){
            if(ascending[i] == input[SIZE - i - 1])cnt++;
            else break;
        }
        if(SIZE == cnt){
            std::cout << "descending";
            return 0;
        }
    }
    std::cout << "mixed";
    return 0;
}