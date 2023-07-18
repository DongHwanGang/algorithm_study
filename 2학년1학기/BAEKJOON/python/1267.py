import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().rstrip().split()))

ysum = 0
msum = 0

for i in arr:
    if i // 30 != 0:
        ysum = (i // 30) * 10 + ysum
    if i % 29 != 0:
        ysum += 10
    
    if i // 60 != 0:
        msum = (i // 60) * 15 + msum
    if i % 59 != 0:
        msum += 15

if msum > ysum:
    print('{0} {1}'.format('Y', ysum))
elif msum < ysum:
    print('{0} {1}'.format('M', msum))
else:
    print('{0} {1} {2}'.format('Y', 'M', ysum))