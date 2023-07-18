import sys
input = sys.stdin.readline

n = int(input())
answer = [[] for i in range(51)]

for i in range(n):
    string = input().rstrip()
    strlen = len(string)
    if (string in answer[strlen]) != True:
        answer[strlen].append(string)

for i in answer:
    i.sort()
    for j in i:
        print(j)