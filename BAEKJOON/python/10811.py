import sys
input = sys.stdin.readline

N, M = map(int, input().split())
numberbox = [i for i in range(1, N + 1)]

for rever in range(M):
    i, j = map(int, input().split())
    temp = numberbox[i - 1 : j]
    temp.reverse()
    numberbox[i - 1 : j] = temp

for i in numberbox:
    print(i, end = ' ')