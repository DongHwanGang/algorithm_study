#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
		
    while(n--){
				//O가 나왔을 때 중첩해서 더해줄 O_cnt
				//점수의 총합 sum
        int O_cnt = 0, sum = 0;
        string OX = "";
        cin >> OX;
				//문자열을 문자 단위로 확인
        for(char c : OX){
            if(c == 'O'){
                O_cnt += 1;
                sum += O_cnt;
            }
            else{
                O_cnt = 0;
            }
        }
        cout << sum << '\n';
    }
}