import sys
input = sys.stdin.readline
N, M = map(int, input().split())

arr = list(map(int, input().split()))

size = len(arr)
temp = 0
answer = 0
for i in range(size):
    for j in range(size):
        for k in range(size):
            if i != j and j != k and k != i:
                temp = arr[i] + arr[j] + arr[k]
                if temp <= M and temp > answer:
                    answer = temp
print(answer)