import sys
input = sys.stdin.readline

N = int(input())
arr = list(map(int, input().split()))
M = int(input())
Mrr = list(map(int, input().split()))

arr.sort()
dct = [arr[0]]
idx = [1]

for _ in range(1, N):
    if dct[-1] == arr[_]:
        idx[-1] += 1
    else:
        dct.append(arr[_])
        idx.append(1)

for _ in Mrr:
    first = 0
    last = M - 1
    tf = True
    while first <= last:
        mid = (first + last) // 2
        if dct[mid] == _:
            print(idx[mid], end=" ")
            tf = False
            break
        if dct[mid] > _:
            last = mid - 1
        else:
            first = mid + 1

    if tf != False:
        print(0, end=" ")
