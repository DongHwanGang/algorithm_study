#include <iostream>
#include <vector>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int K, N;
    int MAX;
    long long int front_num, back_num, middle_num, sum = 0, result = 1;
    cin >> K >> N;
    vector<int> store (K);
    //입력을 받으면서 가장 긴 랜선을 찾아줌
    for(int i = 0; i < K; i++){
        cin >> store[i];
        if(i == 0){
            MAX = store[i];
        }
        MAX = MAX < store[i] ? store[i] : MAX;
    }

    front_num = 1;
    back_num = MAX;
		// 이진 탐색
    while(front_num <= back_num){
        middle_num = (back_num + front_num) / 2;
        sum = 0;
				//탐색으로 구해진 길이로 갖고 있는 랜선이 몇개까지 분할 하는가
        for(int i = 0; i < K; i++){
            sum = sum + store[i] / middle_num;
        }
				// N개를 넘으면
        if(sum >= N){
            front_num = middle_num + 1;
            if(result < middle_num){
                result = middle_num;
            }
        }
        else{
            back_num = middle_num - 1;
        }
    }
    cout << result;
}