import sys
input = sys.stdin.readline
N, K = map(int, input().split())
arr = [i for i in range(1, N + 1)]
strlen = N
idx = 0

print("<", end="")
while True:
    idx = (idx + K - 1) % strlen
    strlen -= 1
    if strlen != 0:
        print("%d, " %arr[idx], end="")
    else:
        print(arr[idx], end="")
        break
    del arr[idx]
print(">", end="")