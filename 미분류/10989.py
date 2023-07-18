N = int(input())
arr = [0]*10001

for _ in range(N):
    temp = int(input())
    arr[temp] += 1

for _ in range(10001):
    for i in range(arr[_]):
        print(_)