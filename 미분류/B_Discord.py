import sys
input = sys.stdin.readline
N, M = map(int, input().split())
arr = [[0]*N for _ in range(N)]

for i in range(M):
    temp = list(map(int, input().split()))

    a = 0
    while a < N:
        if a == 0:
            temparr = temp[:2]
            arr[temparr[1]-1][temparr[0]-1] = arr[temparr[0]-1][temparr[1]-1] = 1

        elif a > 0 and a != N - 1:
            temparr = temp[a-1:a+2]
            arr[temparr[1]-1][temparr[0]-1] = arr[temparr[0]-1][temparr[1]-1] = 1
            arr[temparr[2]-1][temparr[1]-1] = arr[temparr[1]-1][temparr[2]-1] = 1
        else:
            temparr = temp[a-1:]
            arr[temparr[1]-1][temparr[0]-1] = arr[temparr[0]-1][temparr[1]-1] = 1
        a += 1

answer = 0
for i in range(0, N):
    for j in range(i + 1, N):
        if arr[i][j] != 1:
            answer+=1

print(answer)