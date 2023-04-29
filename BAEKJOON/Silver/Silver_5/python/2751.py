import sys
input = sys.stdin.readline

N = int(input().rstrip())
arr = []
for i in range(N):
    temp = int(input().rstrip())
    arr.append(temp)

arr.sort()

for i in arr:
    print(i)