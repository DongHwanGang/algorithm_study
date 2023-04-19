#include <iostream>
#include <deque>
using namespace std;

int main () {
    int test, n, m;
    cin >> test;
    //테스트 케이스 수 만큼 반복
    while(test--){
        cin >> n >> m;
        //입력 받을 때 문서 중요도를 저장할 데큐1
        deque<int> number;
        //입력 받을 때 문서 위치를 저장할 데큐2
        deque<int> index;
        //데큐2에 입력 받는 문서 중요도 개수 만큼 데큐2에 넣어줄 원소로 활용
        int input_index = 0; 
        //출력할 결과 값
        int result = 0; 
        //찾아야 하는 문서의 중요도 보다 높은 문서의 개수를 저장할 변수
        int big_num = 0; 
        //찾아야 하는 문서의 중요도를 저장할 변수
        int depth;

        //문서의 개수 n만큼 반복
        while(n--){
            //입력 받는 중요도를 임시로 저장할 변수
            int temp;
            //input
            cin >> temp;
            //데큐1(=중요도)에 저장
            number.push_back(temp);
            //데큐2(=순서)에 저장
            index.push_back(input_index);
            //순서 하나씩 늘려줌
            input_index++;
        }
        //중요도 데큐를 한 번 순회
        for(int i : number){
            //구하고자 하는 중요도보다 중요도가 큰 문서가 있으면 big_num 증가
            if(i > number[m]) big_num++;
        }
        //데큐1(=중요도) 중요도에 따라 데큐의 원소에 변화가 있을 것.
        //미리 구하고자 하는 문서의 중요도를 저장
        depth = number[m];
        //데큐들의 원소가 없을 때까지 반복
        while(!number.empty()){
            int temp, temp_index;
            //big_num이 0이 아니면 (= 구하고자 하는 문서보다 중요도가 큰 문서가 있으면 조건 충족)
            if(big_num){
                //데큐1(=중요도)의 front가 구하고자 하는 문서의 중요도 보다 크면
                if(number[0] > depth){
                    //데큐1(=중요도) 앞 pop
                    number.pop_front();
                    //데큐2(=순서) 앞 pop
                    index.pop_front();
                    //구하고자 하는 문서의 중요도 보다 큰 문서가 하나 줄었음
                    big_num--;
                    //문서 하나가 출력 된 상황임으로 차례 +1
                    result++;
                }
                //데큐1(=중요도)의 front가 찾아야 하는 문서의 중요도 랑 같거나 작으면
                else{
                    //데큐1(=중요도)의 front 원소 저장
                    temp = number.front();
                    //데큐2(=index)의 front 원소 저장
                    temp_index = index.front();
                    // 데큐1(=중요도)의 뒤에 추가
                    number.push_back(temp);
                    //데큐2(=index)의 뒤에 추가
                    index.push_back(temp_index);
                    //데큐1(=중요도)의 front 원소 삭제
                    number.pop_front();
                    //데큐2(=index)의 front 원소 삭제
                    index.pop_front();
                }
            }
            //big_num이 0이면
            else{
                //front가 구하고자 하는 문서의 중요도와 같을 때
                if(number[0] == depth){
                    //데큐1(=중요도) 앞 pop
                    number.pop_front();
                    //문서 하나가 출력 된 상황임으로 차례 +1
                    result++;
                    //pop해야하는 인덱스가 구하고자 하는 인덱스와 같으면 
                    if(index.front() == m){
                        //result를 출력하고 반복문을 종료
                        cout << result << '\n';
                        break;
                    }
                    //데큐2(=인덱스)의 front를 pop해준다.
                    index.pop_front();
                }
                else{
                    temp = number.front();
                    temp_index = index.front();
                    number.push_back(temp);
                    index.push_back(temp_index);
                    number.pop_front();
                    index.pop_front();
                }
            }
        }
    }
}