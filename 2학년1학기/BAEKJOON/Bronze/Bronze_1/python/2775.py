import sys
input = sys.stdin.readline
T = int(input().rstrip())

arr = [[0]*15 for i in range(15)]
for i in range(15):
    temp = 0
    for j in range(1, 15):
        if i == 0:
            arr[i][j] = j
        else:
            temp = temp + arr[i - 1][j]
            arr[i][j] = temp

for i in range(T):
    k = int(input().rstrip())
    n = int(input().rstrip())
    print(arr[k][n])