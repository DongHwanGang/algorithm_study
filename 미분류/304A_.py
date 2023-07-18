N = int(input())
arr = []
num = []
min = 1000000001
idx = -1
for i in range(N):
    a, b = list(input().split())
    arr.append(a)
    b = int(b)
    if min < b:
        min = min
    else:
        idx = i
        min = b
    num.append(b)

for i in range(idx, N):
    print(arr[i])

if(idx != 0):
    for i in range(idx):
        print(arr[i])