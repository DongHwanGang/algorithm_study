import sys
N, M = map(int, sys.stdin.readline().split())

tempN = tempM = 0
for i in range(3):
    tempN = tempN*10 + N % 10
    tempM = tempM*10 + M % 10
    N //= 10
    M //= 10

print(tempN) if tempN > tempM else print(tempM)