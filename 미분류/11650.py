import sys
input = sys.stdin.readline

N = int(input())
arr = []
for _ in range(N):
    a = list(map(int, input().split()))
    arr.append(a)
arr.sort()

for i in arr:
    for j in i:
        print(j, end=" ")
    print()