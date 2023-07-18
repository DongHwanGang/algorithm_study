import sys
input = sys.stdin.readline

T = int(input())
answer = []

for i in range(T):
    R, S = input().split()
    R = int(R)
    tempS = ''

    for j in S:
        tempS += j*R
    answer.append(tempS)

for out in answer:
    print(out)