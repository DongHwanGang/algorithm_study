import sys
input = sys.stdin.readline

N, M = map(int, input().split())
arr = [i + 1 for i in range(N)]
for re in range(M):
    i, j, k = map(int, input().split())
    star = arr[i - 1 : k - 1]
    end = arr[k - 1: j]
    arr[i - 1: j] = end + star

for out in arr:
    print(out, end = ' ')
#for y in range(M):
#    i, j, k = map(int, input().split())
#    B = B[:i-1] + B[k-1:j] + B[i-1:k-1] + B[j:]