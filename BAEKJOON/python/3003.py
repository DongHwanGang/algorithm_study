import sys
arr = [1, 1, 2, 2, 2, 8]
piece = list(map(int, sys.stdin.readline().split()))
for i in range(6):
    arr[i] -= piece[i]

for i in arr:
    print(i, end = ' ')

#바킹독 블로그, kks227 블로그, 종만복