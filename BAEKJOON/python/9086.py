import sys
input = sys.stdin.readline

T = int(input())
arr = []
for i in range(T):
    s = input().rstrip()
    arr.append(s[0]+s[-1])

for i in arr:
    print(i)