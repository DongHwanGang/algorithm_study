N = int(input())
arr = []
for i in range(N):
    A, B = map(int, input().split())
    arr.append(A + B)

for i in range(N):
    print(arr[i])