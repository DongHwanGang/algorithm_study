import sys
input = sys.stdin.readline

N, M = map(int, input().split())
treeheight = list(map(int, input().split()))

front = 1
treeheight.sort()
end = treeheight[-1]
answer = 0

while front <= end:
    mid = (front + end) // 2
    temp = 0
    for i in treeheight:
        if i > mid:
            temp = temp + (i - mid)
    if temp >= M:
        answer = mid if answer < mid else answer
        front = mid + 1
    else:
        end = mid - 1
print(answer)