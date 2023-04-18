#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
    int M, N, last;
    cin >> M >> N;
		//체에서 false 을 소수로 true를 합성수로 볼 것
    vector<bool> sieve(N + 1, false);
		//0과 1은 소수가 아님 
    sieve[0] = sieve[1] = true;
		// N <= 구하고자 하는 최대값^0.5
    last = (int)pow((double)N, 0.5);
		//에라스토테네스의 체 구현
    for(int i = 2; i <= last; i++){
				//이미 구해진 합성수, 소수의 배수는 건너 뜀
        if(sieve[i] != false){
            continue;
        }
				//소수의 배수의 경우 합성수로 판단
        else{
            for(int j = 2; j * i <= N; j++){
                if(sieve[j*i] == false)
                    sieve[j*i] = true;
            }
        }
    }

    for(int check = M; check <= N; check++){
        if(sieve[check] != true){
            cout << check << '\n';
        }
    }
}