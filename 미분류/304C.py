import sys
input = sys.stdin.readline

N, D = map(int, input().split())
arr = []
tf = [0]*N
graph = [[0]*N for i in range(N)]
for _ in range(N):
    temp = list(map(int, input().split()))
    arr.append(temp)

tf[0] = 1

for i in range(N):
    for j in range(N):
        if i != j:
            temp = ((arr[i][0] - arr[j][0])**2 + (arr[i][1] - arr[j][1])**2)**0.5
            if temp <= D:
                graph[i][j] = temp

for i in range(N):
    for j in range(N):
        if i != j and graph[i][j] <= D and graph[i][j] != 0 and tf[i] == 1:
            tf[j] = 1

for i in range(N):
    for j in range(N):
        if i != j and graph[j][i] <= D and graph[j][i] != 0 and tf[j] == 1:
            tf[i] = 1

for i in tf:
    if i:
        print("Yes")
    else:
        print("No")