import sys
input = sys.stdin.readline

n = int(input())
twice = []
for i in range(n):
    twice.append(int(input()))

X = int(input())
cnt = 0
for i in range(n):
    if X - twice[i] > 0:
        temp = X - twice[i]
        twice.