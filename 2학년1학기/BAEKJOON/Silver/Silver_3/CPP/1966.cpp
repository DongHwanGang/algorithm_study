#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main () {
    int test, n, m;
    cin >> test;

    while(test--){
        cin >> n >> m;
        deque<int> number;
        deque<int> index_store;
        vector<int> importance(10, 0);
        int input_index = 0, result = 0, depth;

        while(n--){
            int temp;
            cin >> temp;
            number.push_back(temp);
            index_store.push_back(input_index);
            input_index++;
            importance[temp] += 1;
        }

        depth = number[m];
        int index = 9;
        while(index > depth) {
            if(importance[index] == 0){
                index--;
                continue;
            }

            int temp, temp_index;
            temp = number.front();
            if(temp == index){
                number.pop_front();
                index_store.pop_front();
                importance[index] -= 1;
                result++;
            }
            else{
                temp_index = index_store.front();
                number.push_back(temp);
                index_store.push_back(temp_index);
                number.pop_front();
                index_store.pop_front();
            }
        }
            

        while(importance[index] != 0) {
            int temp, temp_index;
            temp = number.front();
            temp_index = index_store.front();
            if(temp == depth){
                number.pop_front();
                importance[index] -= 1;
                result++;
                if(temp_index == m){
                    cout << result << '\n';
                    break;
                }
                index_store.pop_front();
            }
            else{
                number.push_back(temp);
                index_store.push_back(temp_index);
                number.pop_front();
                index_store.pop_front();
            }
        }       
        
    }
}