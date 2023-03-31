#include <iostream>
#include <queue>
using namespace std;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> card_box;
    int n;
    cin >> n;
		//큐의 처음 카드를 정렬하는 반복문
    for(int i = 1; i <= n; i++)
        card_box.push(i);
    //큐의 size가 1이 되면 반복문 종료
    while(card_box.size() > 1){
				//맨 위의 카드를 삭제
        card_box.pop();
				//맨 위의 카드를 맨 아래 삽입
        card_box.push(card_box.front());
				//삽입한 맨 위의 카드 삭제
        card_box.pop();
    }
    cout << card_box.front();
}