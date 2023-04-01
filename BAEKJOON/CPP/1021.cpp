#include <iostream>
#include <deque>
using namespace std;

int main () {
    int n, m, cnt = 0;
    cin >> n >> m;
    deque<int> DQ;
		//데큐에 1부터 n까지의 수를 집어 넣는 반복문
    for(int i = 1; i <= n; i++){
        DQ.push_back(i);
    }
    //m번 연산을 반복하는 반복문
    while(m--){
				//어떤 수를 빼야하는지 확인하는 변수 i
				//가장 앞의 수부터 i까지 몇번을 움직여야 하는지 확인하는 변수 temp_fornt
				//가장 뒤부터 i까지 몇번 움직여야 하는지 확인하는 변수 temp_back
        int i, temp_front = 0, temp_back = 0;
        cin >> i;
        //1번 연산 가장 앞의 수가 같으면 뱉어내고 끝내고 아니면 밑에 조건에 따름
        if(DQ.front() != i){
						//가장 뒤의 인덱스에 있는 수부터 i가 있는 곳까지 확인
            for(int b = DQ.size() - 1; DQ[b] != i; b--) temp_back++;
						//가장 앞부터 i가 있는 곳까지 얼마나 걸리는지 확인
            for(int f = 0; DQ[f] != i; f++) temp_front++;
						//temp_back에 경우는 i까지 옮겨서 앞으로 이동해야 하므로 +1해준다.
            if(temp_back + 1 > temp_front){
                while(DQ.front() != i){
                    DQ.push_back(DQ.front());
                    DQ.pop_front();
                    cnt++;
                }
            }
            else{
                while(DQ.front() != i){
                    DQ.push_front(DQ.back());
                    DQ.pop_back();
                    cnt++;
                }
            }
        }
        DQ.pop_front();
    }
    cout << cnt;
}