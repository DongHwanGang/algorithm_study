import sys
input = sys.stdin.readline


while True:
    arr = list(map(int, input().split()))
    arr.sort()
    a, b, c = arr
    if a == 0 and b == 0 and c == 0:
        break
    if c**2 == a**2 + b**2:
        print('right')
    else:
        print('wrong')

        