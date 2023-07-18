strN = input()
M = int(input())

arr = [0] * 10
if M:
    tmp = list(map(int, input().split()))
    for i in tmp:
        arr[i] = 1

arrN = list(map(int, strN))
N = int(strN)

if N == 100:
    print(0)
    exit(0)
else:
