import sys
input = sys.stdin.readline

N, M, H, K = map(int, input().split())
S = input().rstrip()
arr = []
#[200001*200001]리스트 선언
#좌표를 담고, 아이템을 확인하면 시간은 확 줄 듯
#WA뜨는건 왜 그러는지 모르겠음.
for _ in range(M):
    temp = list(map(int, input().split()))
    arr.append(temp)

check = True
coordinate = [0, 0]
for c in S:
    if c == "R":
        coordinate[0] += 1
    elif c == "L":
        coordinate[0] -= 1
    elif c == "U":
        coordinate[1] += 1
    else:
        coordinate[1] -= 1
    H -= 1
    if H < 0:
        check = False
        break
    else:
        if H < K:
            try:
                arr.index(coordinate)
                H += 1
            except:
                pass

if check:
    print("Yes")
else:
    print("No")