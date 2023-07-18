import sys

input = sys.stdin.readline

N, M = map(int, input().split())
basket = [0 for i in range(N)]

for ball in range(M):
    i, j, k = map(int, input().split())
    for gall in range(i - 1, j):
        basket[gall] = k

for out in basket:
    print(out, end = ' ')