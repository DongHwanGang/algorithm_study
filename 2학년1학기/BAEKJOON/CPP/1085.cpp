#include <iostream>
using namespace std;

int main () {
    int x, y, w, h, min = 1000;

    cin >> x >> y >> w >> h;
    // 지금 있는 직사각형의 꼭짓점 위에서 작은 값 찾기
    min = x < y ? x : y;
    // 지금 있는 직사각형의 꼭짓점에서 넓은 직사각형의 방향으로 탈출
    min = w - x < min ? w - x : min;
    min = h - y < min ? h - y : min;
    cout << min;
}