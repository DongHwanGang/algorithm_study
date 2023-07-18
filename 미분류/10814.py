import sys
input = sys.stdin.readline

N = int(input())
arr = [[] for i in range(201)]

maxnum = 0

for _ in range(N):
    age, name = input().split()
    age = int(age)
    if maxnum < age:
        maxnum = age
    arr[age].append(name)

for j in range(maxnum+1):
        for k in arr[j]:
            print("%d %s" %(j, k))