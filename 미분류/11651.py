import sys
input = sys.stdin.readline

N = int(input())
arr = []
for _ in range(N):
    a = list(map(int, input().split()))
    arr.append([a[1], a[0]])

arr.sort()
for _ in arr:
    print("%d %d" %(_[1], _[0]))