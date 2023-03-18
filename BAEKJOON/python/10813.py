import sys
input = sys.stdin.readline

N, M = map(int, input().split())
basket = [i for i in range(1, N + 1)]
temp = 0

for change in range(M):
    i, j = map(int, input().split())
    basket[j - 1], basket[i - 1] = basket[i - 1], basket[j - 1]

for out in basket:
    print(out, end = ' ')